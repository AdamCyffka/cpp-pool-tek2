/*
** EPITECH PROJECT, 2019
** cpp_d07m_2019
** File description:
** WarpSystem.cpp
*/

#include "Federation.hpp"
#include "Borg.hpp"
#include "WarpSystem.hpp"

WarpSystem::QuantumReactor::QuantumReactor()
{
    this->_stability = true;
}

WarpSystem::QuantumReactor::~QuantumReactor()
{
}

bool WarpSystem::QuantumReactor::isStable()
{
  return(this->_stability);
}

void WarpSystem::QuantumReactor::setStability(bool stability)
{
    this->_stability = stability;
}

WarpSystem::QuantumReactor *WarpSystem::Core::checkReactor()
{
    return(this->_coreReactor);
}

WarpSystem::Core::Core(WarpSystem::QuantumReactor *core)
{
    this->_coreReactor = core;
}

WarpSystem::Core::~Core()
{
}