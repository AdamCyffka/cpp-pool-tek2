/*
** EPITECH PROJECT, 2019
** cpp_rush2_2019
** File description:
** SantaClaus.hpp
*/

#ifndef SANTACLAUS_H_
#define SANTACLAUS_H_

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

class SantaClaus {
    public:
        bool open(const std::string);
        void close();
        bool exists(const std::string);
        void writeOpenTag(const std::string);
        void writeCloseTag();
        void writeStartElementTag(const std::string);
        void writeEndElementTag();
        void writeAttribute(const std::string, const std::string);
        void writeString(const std::string);

    private:
        std::ofstream outFile;
        int indent;
        int openTags;
        int openElements;
        std::vector<std::string> tempOpenTag;
        std::vector<std::string> tempElementTag;
};

#endif /* !SANTACLAUS_H_ */