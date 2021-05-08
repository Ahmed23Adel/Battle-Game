#include "Battle.h"
#include "GUI\GUI.h"
#include "ReadFromFile.h" //hossam
int main()
{
	
	Battle* pGameBattle = new Battle;
	//read(pGameBattle); //hossam
	pGameBattle->RunSimulation();
	
	delete pGameBattle;
	
	return 0;
}
