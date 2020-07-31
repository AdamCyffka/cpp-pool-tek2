/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** NcursesMain
*/

#include <curses.h>
#include "../Display.hpp"

void printDateModule(Display d)
{
    int size = d.getDate()->getTime().size() + 3;
    mvprintw(1, COLS - size, d.getDate()->getTime().c_str());
}

int printCPUModule(int lastY, Display d)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    int middle = COLS / 2;

    mvprintw(lastY, 1, "Module CPU:");
    lastY += 2;
    mvprintw(lastY, 4, d.getCpu()->getCpuModel().at(0).c_str());
    lastY += 2;
    for (unsigned int i = 0; i < d.getCpu()->getNbrCores(); i++) {
        mvprintw(lastY, 4, std::string("CPU " + std::to_string(i)).c_str());
        mvprintw(lastY, 11, "[");
        int size = middle - 2 - 11;
        float var = d.getCpu()->getActiveTime().at(i);
        float var1 = d.getCpu()->getIdleTime().at(i);
        int nb = (100.f * var / (var1 + var)) * size / 100;
        for (int j = 0; j < nb; j++)
            mvprintw(lastY, 12 + j, "|");
        mvprintw(lastY, middle - 6, std::to_string((100.f * var / (var1 + var))).substr(0, 4).c_str());
        mvprintw(lastY, middle - 2, "%]");
        i++;
        mvprintw(lastY, middle + 1,
            std::string("CPU " + std::to_string(i)).c_str());
        mvprintw(lastY, middle + 8, "[");

        size = middle - 2 - 10;
        var = d.getCpu()->getActiveTime().at(i);
        var1 = d.getCpu()->getIdleTime().at(i);
        nb = (100.f * var / (var1 + var)) * size / 100;
        for (int j = 0; j < nb; j++)
            mvprintw(lastY, middle + 9 + j, "|");
        mvprintw(lastY, COLS - 9, std::to_string((100.f * var / (var1 + var))).substr(0, 4).c_str());
        mvprintw(lastY, COLS - 5, "%]");
        lastY += 2;
    }
    return lastY;
}

int printRAMModule(int lastY, Display d)
{
    mvprintw(lastY, 1, "Module RAM:");
    lastY += 2;
    mvprintw(lastY, 4, "MEM");
    attron(COLOR_PAIR(1));
    int size = COLS - 2 - 12;
    int mem = 100.f * d.getRam()->getAllocatedRAM() / d.getRam()->getInstalledRAM();
    int nb = mem * size / 100;
    for (int j = 0; j < nb; j++)
        mvprintw(lastY, 11 + j, " ");
    attroff(COLOR_PAIR(1));
    for (int j = nb; j < COLS - 12 - 2; j++)
        mvprintw(lastY, 11 + j, ".");
    if (mem >= 50)
        attron(COLOR_PAIR(1));
    mvprintw(lastY, COLS / 2 - 1, std::to_string(mem).c_str());
    mvprintw(lastY, COLS / 2 + 1, "%%");
    attroff(COLOR_PAIR(1));
    return lastY + 2;
}

int printSWAPModule(int lastY, Display d)
{
    mvprintw(lastY, 4, "SWAP");
    attron(COLOR_PAIR(1));
    int size = COLS - 2 - 12;
    int swap = 100.f * d.getRam()->getAllocatedSwap() / d.getRam()->getInstalledSwap();
    int nb = swap * size / 100;
    for (int j = 0; j < nb; j++)
        mvprintw(lastY, 11 + j, " ");
    attroff(COLOR_PAIR(1));
    for (int j = nb; j < COLS - 12 - 2; j++)
        mvprintw(lastY, 11 + j, ".");
    if (swap >= 50)
        attron(COLOR_PAIR(1));
    mvprintw(lastY, COLS / 2 - 1, std::to_string(swap).c_str());
    mvprintw(lastY, COLS / 2 + 1, "%%");
    attroff(COLOR_PAIR(1));
    return lastY + 2;
}

int printInfoOs(int lastY, Display d)
{
    mvprintw(lastY, 1, "Module Info Os:");
    lastY += 2;
    mvprintw(lastY, 4, std::string("Node Name : " + d.getOs()->getNodename()).c_str());
    lastY++;
    mvprintw(lastY, 4, std::string("System Name : " + d.getOs()->getSysname()).c_str());
    lastY++;
    mvprintw(lastY, 4, std::string("Os Version : " + d.getOs()->getVersion()).c_str());
    lastY++;
    mvprintw(lastY, 4, std::string("Last Realease : " + d.getOs()->getRelease()).c_str());
    return lastY + 2;
}

int printInfoUser(int lastY, Display d)
{
    mvprintw(lastY, 1, "Module Info User:");
    lastY += 2;
    mvprintw(lastY, 4, std::string("User Name : " + d._user->getUserName()).c_str());
    lastY += 1;
    mvprintw(lastY, 4, std::string("Host Name : " + d._user->getHostName()).c_str());
    return lastY + 2;
}

int printInfoNetwork(int lastY, Display d)
{
    mvprintw(lastY, 1, "Module Info Network:");
    lastY += 2;
    for (unsigned int i = 0; i < d.getNetwork()->getInterface().size(); i++) {
        mvprintw(lastY, 4, std::string(d.getNetwork()->getInterface().at(i) + " | Download: "
        + std::to_string(d.getNetwork()->getDownload().at(i) / 125) + " kbps  Upload: "
        + std::to_string(d.getNetwork()->getUpload().at(i) / 125) + " kbps").c_str());
        lastY++;
    }
    return lastY + 2;
}

void printModule(Display d)
{
    int lastY = 1;

    if (d.getDate()->isEnable())
        printDateModule(d);
    if (d.getCpu()->isEnable())
        lastY = printCPUModule(lastY, d);
    else
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    if (d.getRam()->isEnable()) {
        lastY = printRAMModule(lastY, d);
        lastY = printSWAPModule(lastY, d);
    }
    if (d.getUser()->isEnable())
        lastY = printInfoUser(lastY, d);
    if (d.getOs()->isEnable())
        lastY = printInfoOs(lastY, d);
    if (d.getNetwork()->isEnable())
        lastY = printInfoNetwork(lastY, d);
}

int windowCreation(Display d)
{
    WINDOW *test = initscr();
    nodelay(test, true);
    curs_set(0);
    start_color();
    init_pair(1, COLOR_BLACK, COLOR_GREEN);
    while (1) {
        d.refreshAll();
        clear();
        box(test, 0, 0);
        printModule(d);
        int input = getch();
        if (input == 27)
            break;
        if (input == 99)
            d.getCpu()->setModule(!d.getCpu()->isEnable());
        if (input == 114)
            d.getRam()->setModule(!d.getRam()->isEnable());
        if (input == 117)
            d.getUser()->setModule(!d.getUser()->isEnable());
        if (input == 111)
            d.getOs()->setModule(!d.getOs()->isEnable());
        if (input == 110)
            d.getNetwork()->setModule(!d.getNetwork()->isEnable());
        if (input == 97) {
            endwin();
            return 2;
        }
        refresh();
    }
    endwin();
    return 0;
}
