#include "StrategyManager.h"

StrategyManager::StrategyManager()
{
}

StrategyManager::~StrategyManager()
{
}

void StrategyManager::algorithm()
{
	m_Strategy->algorithm();
}

void StrategyManager::setStrategy(Strategy* strategyType)
{
	m_Strategy = strategyType;
}
