/*
** EPITECH PROJECT, 2019
** cpp_d07a_2019
** File description:
** KoalaBot.hpp
*/

#ifndef KOALA_BOT_H
    #define KOALA_BOT_H

    #include "Parts.hpp"

    class KoalaBot {
        public:
            KoalaBot(std::string serial = "Bob-01");
            void setParts(Legs &leg);
            void setParts(Arms &arm);
            void setParts(Head &head);
            void swapParts(Legs &leg);
            void swapParts(Arms &arm);
            void swapParts(Head &head);
            void informations() const;
            bool status() const;
        private:
            std::string _serial;
            Arms _arm;
            Legs _legs;
            Head _head;
    };

#endif /* KOALA_BOT_H */