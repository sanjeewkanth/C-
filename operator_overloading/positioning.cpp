#include <iostream>

class Position
{
	public:
		int x = 10;
		int y = 20;
		Position operator + (Position pos)
		{
			Position new_pos;
			new_pos.x = x + pos.x;
			new_pos.y = y + pos.y;
			return new_pos;
		}
		bool operator ==(Position pos)
		{
			if(x==pos.x && y==pos.y)
			{
				return 1;
			}
			else{return 0;}
		}
};


int main()
{
	Position pos1, pos2;
	pos2.x=20;
	pos2.y=10;
	Position pos3 = pos1 + pos2;
	std::cout<<pos3.x<<"\t"<<pos3.y<<std::endl;
	if (pos1 == pos2)
	{
		std::cout<<"They are the same."<<std::endl;
	}else
	{
		std::cout<<"They are not the same."<<std::endl;	
	}
	
	std::cout<<pos3.x<<"\t"<<pos3.y<<std::endl;	
}
