#pragma once
#include <string>

using namespace std;

typedef struct
{
	int x;
	int y;
} Dot;

class IsPathCrossing
{
public:
	bool isPathCrossing(string path)
	{
		Dot *q = (Dot *)malloc((path.size()+1) * sizeof(Dot));

		Dot* p = q;

		p->x = 0;
		p->y = 0;
		++p;
		for (int i = 0; i < path.size(); i++)
		{
			switch (path[i])
			{
			case 'N':
				p->x = (p-1)->x;
				p->y = (p-1)->y+1;
				break;
			case 'S':
				p->x = (p-1)->x;
				p->y = (p-1)->y - 1;
				break;
			case 'W':
				p->x = (p-1)->x-1;
				p->y = (p-1)->y;
				break;
			case 'E':
				p->x = (p-1)->x +1;
				p->y = (p-1)->y;
				break;
			}
		}
	
		Dot* r = p;

		for (int i = 0; i < path.size()+1; i++) {
			p = q+1;
			for (; p <= r;p++) {
			if ((q->x) == (p->x))
			
					if ((q->y) == (p->y)) {
					return true;
					}
				}
			++q;
		}

		return false;
	}
};
