/*
** EPITECH PROJECT, 2019
** cpp_d07m_2019
** File description:
** WarpSystem.hpp
*/

#ifndef WARP_SYSTEM_H
# define WARP_SYSTEM_H

#include <iostream>

namespace WarpSystem {
    class QuantumReactor {
        public:
            QuantumReactor();
            ~QuantumReactor();
            bool isStable();
            void setStability(bool stability);
        private:
            bool _stability;
    };

    class Core {
        public:
            Core(QuantumReactor *core);
            ~Core();
            QuantumReactor *checkReactor();
        private:
            QuantumReactor *_coreReactor;
    };
}

#endif /* WARP_SYSTEM_H */