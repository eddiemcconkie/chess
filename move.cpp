/**************************************************
 * Authors:
 *    Austin Eldredge
 *    Lehi Lopez
 *    Eddie McConkie
 **************************************************/

#include "move.h"

#include <iostream>
#include <string>

using namespace std;

string Move::getText() const
{
   // TODO

	string text = "";
	text+=(char)('a' + source.getCol());
	text += (char)('1' + source.getRow());

	text += (char)('a' + dest.getCol());
	text += (char)('1' + dest.getRow());

	if ('a' <= capture && capture < 'z')
		text += capture;

	if ('A' <= piece && piece <= 'Z')
		text += piece;
	
	if (enpassant)
		text += 'E';

	if (castleK)
		text += 'c';

	if (castleQ)
		text += 'C';

	return text;
}

ostream& operator<<(ostream& out, const Move& move)
{
   out << move.getText();
   return out;
}
