#include "FinishLocation.h"



FinishLocation::FinishLocation(char * name, char * description, std::vector<int> ajacentLocations)
{
	m_name = name;
	m_description = description;
	m_ajacentLocations = ajacentLocations;
	init();
}


FinishLocation::~FinishLocation()
{
	//deleteString(m_name);
	//deleteString(m_description);
}

const char* FinishLocation::GetName()
{
	return m_name;
}
const char* FinishLocation::GetDescription()
{
	return m_description;
}
std::vector<int> FinishLocation::GetAjacentLoc()
{
	return m_ajacentLocations;
}
std::vector<int> FinishLocation::GetChallenges()
{
	return m_challenges;
}
int FinishLocation::GetPathChallenge(int desiredPath)
{
	return m_challenges[desiredPath];
}
void FinishLocation::SetChallenges(std::vector<int> challenges)
{
	m_challenges = challenges;
}

void FinishLocation::init()
{
	m_entryNum = 0;
	m_exitNum = 3;
}
