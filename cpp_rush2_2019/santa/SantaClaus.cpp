/*
** EPITECH PROJECT, 2019
** cpp_rush2_2019
** File description:
** SantaClaus.cpp
*/

#include "SantaClaus.hpp"

bool SantaClaus::exists(const std::string fileName)
{
    std::fstream checkFile(fileName);
    return checkFile.is_open();
}

bool SantaClaus::open(const std::string strFile)
{
    if (exists(strFile)) {
        std::cout << "Error: File alread exists." << std::endl;
        return false;
    }
    outFile.open(strFile);
    if (outFile.is_open()) {
        std::cout << "File created successfully." << std::endl;
        outFile << "<?xml version='1.0' encoding='us-ascii'?>\n";
        indent = 0;
        openTags = 0;
        openTags = 0;
        openElements = 0;
        return true;
    }
    return false;
}

void SantaClaus::close()
{
    if (outFile.is_open()) {
        outFile.close();
    } else {
        std::cout << "File already closed." << std::endl;
    }
}

void SantaClaus::writeOpenTag(const std::string openTag)
{
    if (outFile.is_open()) {
        for (int i = 0; i < indent; i++) {
            outFile << "\t";
        }
        tempOpenTag.resize(openTags + 1);
        outFile << "<" << openTag << ">\n";
        tempOpenTag[openTags] = openTag;
        indent += 1;
        openTags += 1;
    } else {
        std::cout << "File is closed. Unable to write to file" << std::endl;
    }
}

void SantaClaus::writeCloseTag()
{
    if (outFile.is_open()) {
        indent -= 1;
        for (int i = 0; i < indent; i++) {
            outFile << "\t";
        }
        outFile << "</" << tempOpenTag[openTags - 1] << ">\n";
        tempOpenTag.resize(openTags - 1);
        openTags -= 1;
    } else {
        std::cout << "File is closed. Unable to write to file" << std::endl;
    }
}

void SantaClaus::writeStartElementTag(const std::string elementTag)
{
    if (outFile.is_open()) {
        for (int i = 0; i < indent; i++) {
            outFile << "\t";
        }
        tempElementTag.resize(openElements + 1);
        tempElementTag[openElements] = elementTag;
        openElements += 1;
        outFile << "<" << elementTag;
    } else {
        std::cout << "File is closed. Unable to write to file." << std::endl;
    }
}

void SantaClaus::writeEndElementTag()
{
    if (outFile.is_open()) {
        outFile << "</" << tempElementTag[openElements - 1] << ">\n";
        tempElementTag.resize(openElements - 1);
        openElements -= 1;
    } else {
        std::cout << "File is closed. Unable to write to file." << std::endl;
    }
}

void SantaClaus::writeAttribute(const std::string title, const std::string value)
{
    if (outFile.is_open()) {
        outFile << " " << title << "=" << value;
    } else {
        std::cout << "File is closed. Unable to write to file." << std::endl;
    }
}

void SantaClaus::writeString(const std::string outString)
{
    if (outFile.is_open()) {
        outFile << ">" << outString;
    } else {
        std::cout << "File is closed. Unable to write to file." << std::endl;
    }
}