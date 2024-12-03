#include<iostream>
#include<vector>
using namespace std;

int main()
{



int coord[10][10] = {
{1,0,0,0,0,0,0,0,0,0},
{0,1,0,0,0,0,0,1,1,1},
{0,0,1,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,1,1,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,1,0,0,0,0,1,0,0},
{0,0,0,1,1,1,0,0,0,0},
{0,1,1,1,0,0,0,0,0,0}
};



int enemy = 0;
int x,y;
int turn = 0;
int ammo = 60;

cout << "TIP: Enemy line up in formation\n";
while (ammo!=0 || turn == 0)
{
enemy = 0;
turn++;
for (int i=0; i<10;i++)
{
    for(int j=0; j<10;j++)
        enemy += coord[i][j];
}
cout <<enemy << " enemy remains\n" <<"turns "<<turn<<"\n"
<< ammo <<"torpedoes left\n";
cout <<"input x(0-9):";
cin >> x;
cout <<"input y(0-9):";
cin >>y;
ammo--;
if (coord[x][y]==1)
{
    coord[x][y]=0;
    cout<<"an enemy vessel sunked\n";
}
else
{
    cout<<"Shot missed\n";
}


if(enemy==0)
{cout << "Victory\n";
break;}

}
cout << "you lose";


}
