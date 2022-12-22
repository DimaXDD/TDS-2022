#pragma once
#include "LEX.h"

namespace PolishNotation {
	bool PolishNotation(int lextable_pos, LT::LexTable& lextable, IT::IdTable& idtable);
	//short UzyskacPierwszenstwo(char t);
	void DoPolish(LEX::LEX t);
}