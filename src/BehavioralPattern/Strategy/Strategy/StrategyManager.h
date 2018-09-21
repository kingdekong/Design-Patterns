#ifndef StrategyManager_H_
#define StrategyManager_H_

#include "Strategy.h"

class StrategyManager
{
public:
	StrategyManager();
	virtual ~StrategyManager();

	void algorithm();
	void setStrategy(Strategy* strategyType);
private:
	Strategy * m_Strategy;
};

#endif

