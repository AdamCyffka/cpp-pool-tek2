/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** MyUnitTests
*/

#include "Teddy.hpp"
#include "LittlePony.hpp"
#include "GiftPaper.hpp"
#include "Table.hpp"
#include "Object.hpp"

// Object **MyUnitTests()
// {
//     Object **toy;

//     toy = new Object * [2];
//     toy[0] = new Teddy;
//     toy[1] = new LittlePony;

//     return toy;
// }

Object *MyUnitTests(Object **array)
{
    GiftPaper *paperGift = (GiftPaper *)array[2];

    paperGift->setBox((Box *)array[1]);
    paperGift->getBox()->setObject(array[0]);
    return paperGift;
}

//ITable *createTable()
//{
//    return new Table();
//}

/*
IConveyorBelt *createConveyorBelt()
{
    GiftPaper *paperGift = (GiftPaper *)array[2];

    paperGift->setBox((Box *)array[1]);
    paperGift->getBox()->setObject(array[0]);
    return paperGift;
}
    return new ConveyorBeltPePeNoel();
}*/
