#include "pch.h"
#include "PlayerCreation.h"
#include "GameMode.h"
#include "Player.h"
#include "HumanPlayer.h"
#include "ComputerPlayer.h"

iman_game::PlayerCreation::PlayerCreation(GameMode & gameSelected,
	                                      Player * player1,
	                                      Player * player2)
{
	switch (gameSelected.currentgameMode())
	{
	case GameType::SINGLE_PLAYER:
		singlePlayer(player1, player2);
		break;
	case GameType::MULTI_PLAYER:
		multiPlayer(player1, player2);
		break;
	case GameType::COMPUTER_PLAYER:
		computerPlayer(player1, player2);
		break;
	default:
		break;
	}
}


void iman_game::PlayerCreation::singlePlayer(Player * player1, Player * player2)
{
	player1 = new HumanPlayer;
	player2 = new ComputerPlayer;
}

void iman_game::PlayerCreation::multiPlayer(Player * player1, Player * player2)
{
	player1 = new HumanPlayer;
	player2 = new HumanPlayer;
}

void iman_game::PlayerCreation::computerPlayer(Player * player1, Player * player2)
{
	player1 = new ComputerPlayer;
	player2 = new ComputerPlayer;
}
