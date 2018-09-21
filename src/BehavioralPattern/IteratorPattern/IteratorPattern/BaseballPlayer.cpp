/*
 * BaseballPlayer.cpp
 *
 *  Created on: Apr 20, 2017
 *      Author: Robert Larson
 */

#include "BaseballPlayer.h"

BaseballPlayer::BaseballPlayer
(std::string name,
	std::string position,
	char swingType)
	: m_name(name),
	m_position(position),
	m_swingType(swingType)
{

}
BaseballPlayer::BaseballPlayer()
	: m_swingType('\0')
{

}
BaseballPlayer::~BaseballPlayer()
{
}

std::ostream& operator<<(std::ostream& outc,
	const BaseballPlayer & player)
{
	std::string tabsAfterName =
		(player.GetName().size() >= 16) ?
		std::string("\t") : std::string("\t\t");;
	outc << player.GetPosition() << "\t"
		<< player.GetName() << tabsAfterName
		<< player.GetSwingType();

	return outc;
}
