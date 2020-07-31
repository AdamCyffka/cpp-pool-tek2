/*
** EPITECH PROJECT, 2020
** main.cpp
** File description:
** main.cpp
*/

#include "Elves.hpp"
#include "Hand.hpp"
#include "TableRand.hpp"

Object **MyUnitTests();
Object *MyUnitTests(Object **);

void valentin() {
    //
    //Object *array[3] = {new Teddy(), new Box(), new GiftPaper()};
    //GiftPaper gift(*(GiftPaper *) MyUnitTests(array));
    // creation de d'un teddy dans une box dans un giftpaper

}

int main()
{
    srand(time(NULL));

    auto table(new Table);
    auto elf(new Elves);
    auto convoyer(new ConveyorBelt);
    auto hand(new Hand);
    auto toy(new Toy);

    while (1) {
        toy = TableRand::getRandomToy();
        hand->pressButton(Hand::IN, convoyer);
        table->setTable(toy);
        elf->take(convoyer);
        if (elf->_giftpaper) {
            elf->put(table, elf->_giftpaper);
            elf->_giftpaper;
           // delete elf->_giftpaper;
        } else if (elf->_box) {
            elf->put(table, elf->_box);
            //delete elf->_box;
        }
        while (elf->take(table));

        if (elf->_box && elf->_giftpaper && elf->_toy) {
            std::cout << "Gift has been send!" << std::endl;
            elf->wrapMeThat();
            elf->put(convoyer, elf->_giftpaper);
            hand->pressButton(Hand::OUT, convoyer);
        }
    }



    /*Elves elf;
    auto teddy1(new Teddy);
    auto teddy2(new Teddy);

    auto box(new Box);

    auto giftpaper(new GiftPaper);

    auto table(new Table);

    teddy1->setTitle("Teddy1");
    teddy2->setTitle("Teddy2");

    elf.put(table, box);
    elf.put(table, teddy1);
    elf.put(table, giftpaper);

    elf.take(table);
    elf.take(table);
    elf.take(table);

    std::cout << elf._toy->getTitle() << std::endl;
    std::cout << elf._box->getTitle() << std::endl;
    elf.wrapMeThat();
    std::cout << elf._box->getObject()->getTitle() << std::endl;*/

//    if (elf._box->getObject() == nullptr)
//        std::cout << "null" << std::endl;

    /*elf.wrapMeThat(box, giftpaper, teddy);
    std::cout << box->getObject()->getTitle() << std::endl;
    std::cout << box->isOpen() << std::endl;*/
    /*auto teddy(new Teddy);
    auto teddy2(new Teddy);
    auto teddy3(new Teddy);
    auto teddy4(new Teddy);
    auto teddy5(new Teddy);
    auto teddy6(new Teddy);
    auto teddy7(new Teddy);
    auto teddy8(new Teddy);
    auto teddy9(new Teddy);
    auto teddy10(new Teddy);

    auto pony(new LittlePony);
    auto pony2(LittlePony);
    auto table(new Table);
    teddy->setTitle("Teddy");
    teddy2->setTitle("Teddy2");
    teddy3->setTitle("Teddy3");
    teddy4->setTitle("Teddy4");
    teddy5->setTitle("Teddy5");
    teddy6->setTitle("Teddy6");
    teddy7->setTitle("Teddy7");
    teddy8->setTitle("Teddy8");
    teddy9->setTitle("Teddy9");
    teddy10->setTitle("Teddy10");
    pony->setTitle("pony");

    elf.put(table, teddy);
    elf.put(table, teddy2);
    elf.put(table, teddy3);
    elf.put(table, teddy4);
    elf.put(table, teddy5);
    elf.put(table, teddy6);
    elf.put(table, teddy7);
    elf.put(table, teddy8);
    elf.put(table, teddy9);
    elf.put(table, teddy10);
    elf.put(table, pony);*/

    //    std::vector<std::string> array;
    //    array = elf->look(&table);
    //    int n = 0;
    //
    //    for (auto i = array.begin(); i != array.end(); ++i) {
    //        std::cout << array.at(n) << std::endl;
    //        n++;
    //    }
    /*for (auto i = array.begin(); i != array.end(); ++i) {
        std::cout << array.at(n) << std::endl;
        n++;
    }*/
    //valentin();
    //    if (teddy == nullptr)
    //        std::cout << "allo";
    //delete teddy;
}