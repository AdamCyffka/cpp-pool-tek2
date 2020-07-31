/*
** EPITECH PROJECT, 2019
** cpp_rush2_2019
** File description:
** main.cpp
*/

#include "../Object.hpp"
#include "../PapaXmasTable.hpp"
#include "../Toy.hpp"
#include "../LittlePony.hpp"
#include "../IConveyorBelt.hpp"
#include "../PapaXmasConveyorBelt.hpp"
#include "SantaClaus.hpp"

void writeXml(PapaXmasConveyorBelt gift, const std::string fileName)
{
    XmlWriter xml;

    if (xml.open(fileName)) {
        xml.writeOpenTag("Gift");
        xml.writeStartElementTag("Info");
        xml.writeAttribute("data", "\"ClassName\"");
        xml.writeString(gift.getObject()->getClassName());
        xml.writeEndElementTag();
        xml.writeCloseTag();
        xml.close();
    }
}

void readXml(IConveyorBelt gift)
{
    (void)gift;
}

int main()
{
    Object *objectTest = new Toy("mon cul");
    PapaXmasTable table;
    const std::string value("lool.xml");
    PapaXmasConveyorBelt testa;

    tesla.setobject();
    table.AddObject(objectTest);
    table.DeleteObject(0);
    std::cout << table.GetSpace() << std::endl;
    testa.setObject(objectTest);
    writeXml(testa, value);
    return 0;
}