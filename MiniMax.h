#pragma once
#include <string>
#include <vector>
namespace Lab1 {
	class MiniMax
	{
	public:
		char originBoard[9];
		char huPlayer;
		char aiPlayer;
		int fc = 0;
		int bestSpot;

		struct DateMove {
			int index;
			long int score;
		};

		MiniMax()
		{
			huPlayer = 'X';
			aiPlayer = 'O';
		}

		int Lab1::MiniMax::StartMiniMax() {
			return ScoreMiniMax(originBoard, aiPlayer).index;
		}

		DateMove Lab1::MiniMax::ScoreMiniMax(char (&newBoard)[9], char player){
			fc++;
			bool availSpots[9];
			int count_availSpots = 0;

			for (int i = 0; i < 9; i++)
			{
				availSpots[i] = emptyIndexies(newBoard[i]);
			}

			for (int i = 0; i < 9; i++)
			{
				if (availSpots[i] == true)
					count_availSpots++;
			}

			if (winning(newBoard, huPlayer)) {
				DateMove scoreMove;
				scoreMove.score = -10;
				return scoreMove;
			}
			else if (winning(newBoard, aiPlayer)) {
				DateMove scoreMove;
				scoreMove.score = 10;
				return scoreMove;
			}
			else if (count_availSpots == 9) {
				DateMove scoreMove;
				scoreMove.score = 0;
				scoreMove.index = 4;
				return scoreMove;
			}
			
			std::vector<DateMove> moves;
			for (int i = 0; i < 9; i++)
			{
				if (availSpots[i]) {
					DateMove move;
					move.index = i;
					newBoard[i] = player;
					
					if (player == aiPlayer) {
						DateMove result = ScoreMiniMax(newBoard, huPlayer);
						move.score = result.score;
					}
					else {
						DateMove result = ScoreMiniMax(newBoard, aiPlayer);
						move.score = result.score;
					}
					std::string s = std::to_string(i);
					const char* nchar = s.c_str();
					newBoard[i] = *nchar;
					moves.push_back(move);
				}
			}
			
			int bestMove;
			if (player == aiPlayer) {
				int bestScore = -10000;
				for (int i = 0; i < moves.size(); i++) {
					if (moves[i].score > bestScore) {
						bestScore = moves[i].score;
						bestMove = i;
					}
				}
			}
			else {
				int bestScore = 10000;
				for (int i = 0; i < moves.size(); i++) {
					if (moves[i].score < bestScore) {
						bestScore = moves[i].score;
						bestMove = i;
					}
				}
			}
			if (moves.size() == 0) {
				DateMove indexMove;
				indexMove.index = 4;
				return indexMove;
			} 
			else
			{
				return moves[bestMove];
			}
		}

		System::Void Lab1::MiniMax::CleanBoard()
		{
			for (int i = 0; i < 9; i++)
			{
				std::string s = std::to_string(i);
				const char* nchar = s.c_str();
				originBoard[i] = *nchar;
			}
		}

		int Lab1::MiniMax::winning(char(&board)[9], char player) {
			if (
				(board[0] == player && board[1] == player && board[2] == player) ||
				(board[3] == player && board[4] == player && board[5] == player) ||
				(board[6] == player && board[7] == player && board[8] == player) ||
				(board[0] == player && board[3] == player && board[6] == player) ||
				(board[1] == player && board[4] == player && board[7] == player) ||
				(board[2] == player && board[5] == player && board[8] == player) ||
				(board[0] == player && board[4] == player && board[8] == player) ||
				(board[2] == player && board[4] == player && board[6] == player)
				) {
				return true;
			}
			else {
				return false;
			}
		}

		bool Lab1::MiniMax::emptyIndexies(char field) {

			if ((field == 'X') || (field == 'O'))
				return false;
			else
				return true;
		}
	};
}