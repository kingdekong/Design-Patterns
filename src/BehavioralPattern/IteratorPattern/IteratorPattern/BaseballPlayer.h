/*
 * BaseballPlayer.h
 *
 *  Created on: Apr 20, 2017
 *      Author: Robert Larson
 */

#ifndef BASEBALLPLAYER_H_
#define BASEBALLPLAYER_H_

#include <string>
#include <iostream>

class BaseballPlayer {
public:
	BaseballPlayer(std::string name,
			       std::string position,
			       char swingType);
	BaseballPlayer();
	virtual ~BaseballPlayer();

    std::string GetName()      const { return m_name; }
    std::string GetPosition()  const { return m_position; }
    char GetSwingType() const { return m_swingType; }

private:
	std::string m_name;
	std::string m_position;
	char        m_swingType;
};

std::ostream& operator<<(std::ostream& outc,const BaseballPlayer & player);


#endif /* BASEBALLPLAYER_H_ */
