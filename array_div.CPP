#include<iostream>

using namespace std;
int main()
{
system("cls");
int draw,win1,win2,turn1,turn2,a,b,c,w[3][3];
c=1;
win1=0;
win2=0;
draw=0;
for(a=0;a<3;a++)
{for(b=0;b<3;b++)
{w[a][b]=c;
c++;
}}
for(;;){
system("cls");
cout<<"Player 1 indicates with 11\nPlayer 2 indicates with 22\n";
cout<<"Player1 wins="<<win1<<endl;
cout<<"Player2 wins="<<win2<<endl;
cout<<"Draw="<<draw<<endl;
for(a=0;a<3;a++)
{for(b=0;b<3;b++)
{cout<<w[a][b]<<"\t";
}cout<<endl;
}
if(w[0][0]==w[0][1] && w[0][1]==w[0][2] || w[0][0]==w[1][0] && w[1][0]==w[2][0] || w[0][0]==w[1][1] && w[1][1]==w[2][2] || w[2][0]==w[2][1] && w[2][1]==w[2][2] || w[1][0]==w[1][1] && w[1][1]==w[1][2] || w[0][1]==w[1][1] && w[1][1]==w[2][1] || w[0][2]==w[1][2] && w[1][2]==w[2][2] || w[0][2]==w[1][1] && w[1][1]==w[2][0])
{c=1;
cout<<"Player 2 win .......";
system("pause");
system("cls");
for(a=0;a<3;a++)
{for(b=0;b<3;b++)
{w[a][b]=c;
c++;
}}
win2++;
cout<<"Player 1 indicates with 11\nPlayer 2 indicates with 22\n";
cout<<"Player1 wins="<<win1<<endl;
cout<<"Player2 wins="<<win2<<endl;
cout<<"Draw="<<draw<<endl;
for(a=0;a<3;a++)
{for(b=0;b<3;b++)
{cout<<w[a][b]<<"\t";
}cout<<endl;
}
}
if(!(w[0][0]==1))
{if(!(w[0][1]==2))
{if(!(w[1][0]==4))
{if(!(w[1][2]==6))
{if(!(w[2][1]==8))
{if(!(w[0][2]==3))
{if(!(w[1][1]==5))
{if(!(w[2][0]==7))
{if(!(w[2][2]==9))
{c=1;
draw++;
for(a=0;a<3;a++)
{for(b=0;b<3;b++)
{w[a][b]=c;
c++;}}
system("cls");
cout<<"Player 1 indicates with 11\nPlayer 2 indicates with 22\n";
cout<<"Player1 wins="<<win1<<endl;
cout<<"Player2 wins="<<win2<<endl;
cout<<"Draw="<<draw<<endl;
for(a=0;a<3;a++)
{for(b=0;b<3;b++)
{cout<<w[a][b]<<"\t";
}cout<<endl;
}
}
}}}}}}}}
cout<<"enter player1 position=";
cin>>turn1;
for(a=0;a<3;a++)
{for(b=0;b<3;b++)
{if(turn1==w[a][b])
{w[a][b]=11;}
}}
system("cls");
cout<<"Player 1 indicates with 11\nPlayer 2 indicates with 22\n";
cout<<"Player1 wins="<<win1<<endl;
cout<<"Player2 wins="<<win2<<endl;
cout<<"Draw="<<draw<<endl;
for(a=0;a<3;a++)
{for(b=0;b<3;b++)
{cout<<w[a][b]<<"\t";
}cout<<endl;
}
if(w[0][0]==w[0][1] && w[0][1]==w[0][2] || w[0][0]==w[1][0] && w[1][0]==w[2][0] || w[0][0]==w[1][1] && w[1][1]==w[2][2] || w[2][0]==w[2][1] && w[2][1]==w[2][2] || w[1][0]==w[1][1] && w[1][1]==w[1][2] || w[0][1]==w[1][1] && w[1][1]==w[2][1] || w[0][2]==w[1][2] && w[1][2]==w[2][2] || w[0][2]==w[1][1] && w[1][1]==w[2][0])
{c=1;
cout<<"Player 1 win .......";
system("pause");
system("cls");
for(a=0;a<3;a++)
{for(b=0;b<3;b++)
{w[a][b]=c;
c++;
}}
win1++;
cout<<"Player 1 indicates with 11\nPlayer 2 indicates with 22\n";
cout<<"Player1 wins="<<win1<<endl;
cout<<"Player2 wins="<<win2<<endl;
cout<<"Draw="<<draw<<endl;
for(a=0;a<3;a++)
{for(b=0;b<3;b++)
{cout<<w[a][b]<<"\t";
}cout<<endl;
}
}
if(!(w[0][0]==1))
{if(!(w[0][1]==2))
{if(!(w[1][0]==4))
{if(!(w[1][2]==6))
{if(!(w[2][1]==8))
{if(!(w[0][2]==3))
{if(!(w[1][1]==5))
{if(!(w[2][0]==7))
{if(!(w[2][2]==9))
{c=1;
draw++;
for(a=0;a<3;a++)
{for(b=0;b<3;b++)
{w[a][b]=c;
c++;}}}
system("cls");
cout<<"Player 1 indicates with 11\nPlayer 2 indicates with 22\n";
cout<<"Player1 wins="<<win1<<endl;
cout<<"Player2 wins="<<win2<<endl;
cout<<"Draw="<<draw<<endl;
for(a=0;a<3;a++)
{for(b=0;b<3;b++)
{cout<<w[a][b]<<"\t";
}cout<<endl;
}
}
}
}}}}}}
cout<<"enter player2 position=";
cin>>turn2;
for(a=0;a<3;a++)
{for(b=0;b<3;b++)
{if(turn2==w[a][b])
{w[a][b]=12;}
}}}}
