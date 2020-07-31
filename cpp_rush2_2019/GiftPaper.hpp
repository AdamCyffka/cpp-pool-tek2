/*
** EPITECH PROJECT, 2019
** cpp_rush2_2019
** File description:
** GiftPaper.hpp
*/

#ifndef GIFT_PAPER_H
#define GIFT_PAPER_H

#include "Box.hpp"

class GiftPaper : public Wrap {
    public:
        GiftPaper();
        GiftPaper(const GiftPaper &other);
        ~GiftPaper();

        Box *getBox() const;
        void setBox(Box *box);
    protected:
        Box *_box;
    private:
};

#endif /* GIFT_PAPER_H */