#include<iostream>
#include<string>
#include<ctime>
#include<stdlib.h>
using namespace std;
void winner(int total[],int total1[],string p1,string p2);
void func(string,string);
int main()
{
	string player1,player2;

	cout<<"Enter player's 1 name :";
	cin>>player1;
	cout<<"Enter Player's 2 name :";
	cin>>player2;
	cout<<"\n\nL for starting of a ladder\n\nl for ending of a ladder\n\nS for mouth of a snake\n\ns for tail of a snake\n\n";
system("pause");
	func(player1,player2);
return 0;
}
void func(string a,string b)
{
string c,table[10][10],arr[10][10];
//Initializing 1D array
string array[100]={"01","02","03","04","05","06","07","08","09","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","32","33","34","35","36","37","38","39","40","41","42","43","44","45","46","47","48","49","50","51","52","53","54","55","56","57","58","59","60","61","62","63","64","65","66","67","68","69","70","71","72","73","74","75","76","77","78","79","80","81","82","83","84","85","86","87","88","89","90","91","92","93","94","95","96","97","98","99","100"};
int k=0;
int q=1;
int n=1;
int g;
int *sum=new int[1];//Dynamically Allocating Memory
int *sum1=new int[1];
sum[1]=0;
sum1[1]=0;
for(int i=0;i<10;i++)//Initializing 2D array
{
	for(int j=0;j<10;j++)
	{
	arr[i][j]=array[k];
	k++;}
}

for(int i=0;i<10;i++)//Equalling an array to 2D array 
{
for(int j=0;j<10;j++)
{
table[i][j]=arr[i][j];
}
}
do{
system("cls");//To clear screen
cout<<"Player 1:"<<a<<"                                        Player 2:"<<b<<endl;
cout<<"      (X)                                                    (Z)"<<endl;                         
    cout<<"\n"<<"|  "<<arr[9][9]<<" |  "<<arr[9][8]<<"  |  "<<arr[9][7]<<"  |  "<<arr[9][6]<<"  |  "<<arr[9][5]<<"  |  "<<arr[9][4]<<"S |  "<<arr[9][3]<<"  |  "<<arr[9][2]<<"  |  "<<arr[9][1]<<"S |  "<<arr[9][0]<<endl;
	cout<<"|  "<<arr[8][0]<<"S |  "<<arr[8][1]<<"l |  "<<arr[8][2]<<"  |  "<<arr[8][3]<<"  |  "<<arr[8][4]<<"  |  "<<arr[8][5]<<"  |  "<<arr[8][6]<<"  |  "<<arr[8][7]<<"  |  "<<arr[8][8]<<"  |  "<<arr[8][9]<<"l"<<endl;
	cout<<"|  "<<arr[7][9]<<"  |  "<<arr[7][8]<<"  |  "<<arr[7][7]<<"s |  "<<arr[7][6]<<"l |  "<<arr[7][5]<<"  |  "<<arr[7][4]<<"  |  "<<arr[7][3]<<"L |  "<<arr[7][2]<<"  |  "<<arr[7][1]<<"  |  "<<arr[7][0]<<endl;
	cout<<"|  "<<arr[6][0]<<"  |  "<<arr[6][1]<<"  |  "<<arr[6][2]<<"  |  "<<arr[6][3]<<"L |  "<<arr[6][4]<<"  |  "<<arr[6][5]<<"  |  "<<arr[6][6]<<"  |  "<<arr[6][7]<<"  |  "<<arr[6][8]<<"  |  "<<arr[6][9]<<endl;
	cout<<"|  "<<arr[5][9]<<"  |  "<<arr[5][8]<<"  |  "<<arr[5][7]<<"  |  "<<arr[5][6]<<"  |  "<<arr[5][5]<<"  |  "<<arr[5][4]<<"  |  "<<arr[5][3]<<"  |  "<<arr[5][2]<<"  |  "<<arr[5][1]<<"s |  "<<arr[5][0]<<"l"<<endl;
	cout<<"|  "<<arr[4][0]<<"  |  "<<arr[4][1]<<"  |  "<<arr[4][2]<<"  |  "<<arr[4][3]<<"  |  "<<arr[4][4]<<"  |  "<<arr[4][5]<<"  |  "<<arr[4][6]<<"  |  "<<arr[4][7]<<"  |  "<<arr[4][8]<<"  |  "<<arr[4][9]<<"S"<<endl;
	cout<<"|  "<<arr[3][9]<<"S |  "<<arr[3][8]<<"  |  "<<arr[3][7]<<"  |  "<<arr[3][6]<<"  |  "<<arr[3][5]<<"s |  "<<arr[3][4]<<"  |  "<<arr[3][3]<<"  |  "<<arr[3][2]<<"L |  "<<arr[3][1]<<"  |  "<<arr[3][0]<<endl;
	cout<<"|  "<<arr[2][0]<<"  |  "<<arr[2][1]<<"l |  "<<arr[2][2]<<"  |  "<<arr[2][3]<<"  |  "<<arr[2][4]<<"  |  "<<arr[2][5]<<"  |  "<<arr[2][6]<<"  |  "<<arr[2][7]<<"  |  "<<arr[2][8]<<"l |  "<<arr[2][9]<<endl;
	cout<<"|  "<<arr[1][9]<<"s |  "<<arr[1][8]<<"  |  "<<arr[1][7]<<"  |  "<<arr[1][6]<<"  |  "<<arr[1][5]<<"s |  "<<arr[1][4]<<"  |  "<<arr[1][3]<<"L |  "<<arr[1][2]<<"  |  "<<arr[1][1]<<"  |  "<<arr[1][0]<<endl;
	cout<<"|  "<<arr[0][0]<<"  |  "<<arr[0][1]<<"  |  "<<arr[0][2]<<"  |  "<<arr[0][3]<<"L |  "<<arr[0][4]<<"  |  "<<arr[0][5]<<"  |  "<<arr[0][6]<<"  |  "<<arr[0][7]<<"  |  "<<arr[0][8]<<"  |  "<<arr[0][9]<<"L"<<endl;
	if(n==3)
	{
		n=1;//For player's turn
	}
	cout<<"\nPlayer "<<n<<"'s turn."<<"\t\t\t |"<<a<<"'s position at no "<<sum[1]<<endl;
	cout<<"Enter any key to roll the dice "<<"\t\t |"<<b<<"'s position at no "<<sum1[1]<<endl;
	cin>>c;
	cout<<"\nDIce is roooooollliing\n "<<endl;
	up:	
	g=(rand()+time(0))%7;
	if(q==3)
	{q=1;
	}
	if(g==0)
	{goto up;
	}
	cout<<"The number is "<<g<<endl;
	//For player 1
	
	if(q%2==1)
	{
if(sum[1]==99&&g>1)
	{
		sum[1]=99;
}
else if(sum[1]==98&&g>2)
	{
		sum[1]=98;
}
else if(sum[1]==97&&g>3)
	{
	sum[1]=97;
}
else if(sum[1]==96&&g>4)
{
	sum[1]=96;
}
else
{
	sum[1]+=g;
}
	
	for(int i=0;i<10;i++)
	{
	for(int j=0;j<10;j++)
	{
	
	arr[i][j]=table[i][j];
}}
	switch(sum[1])
{
case 1:
	
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[0][0]=" X";
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[0][0]="XZ";
	}
	break;}
case 2:
	{cout<<a<<" is moving to number  "<<sum[1]<<endl;
		arr[0][1]=" X";
		system("pause");
	if(sum[1]==sum1[1])
	{
		arr[0][1]="XZ";
	}

	break;}
	case 3:
{cout<<a<<" is moving to number "<<sum[1]<<endl;
arr[0][2]=" X";
system("pause");
	if(sum[1]==sum1[1])
	{
		arr[0][2]="XZ";
	}

			break;
}
case 4:
{cout<<a<<" is moving to number "<<sum[1]<<endl;
arr[0][3]=" X";
arr[0][3]=table[0][3];
cout<<"Congratulations "<<a<<" obtained a 4th to 22nd ladder "<<endl;
cout<<a<<" is moving to 22th number "<<endl;
arr[2][1]=" X";
system("pause");
sum[1]=22;
if(sum[1]==sum1[1])
	{
		arr[2][1]="XZ";
	}

break;
}			
case 5:
{cout<<a<<" is moving to number "<<sum[1];
arr[0][4]=" X";
system("pause");
if(sum[1]==sum1[1])
	{
		arr[0][4]="XZ";
}
break;
}	
case 6:
{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[0][5]=" X";
	system("pause");
if(sum[1]==sum1[1])
	{
		arr[0][5]="XZ";
}
break;	}
case 7:
{cout<<a<<" is moving to number "<<sum[1]<<endl;	
arr[0][6]=" X";
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[0][6]="XZ";
}
	break;
}
case 8:
{cout<<a<<" is moving to number "<<sum[1]<<endl;
arr[0][7]=" X";
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[0][7]="XZ";
}
break;}
case 9:
{cout<<a<<" is moving to number "<<sum[1]<<endl;
arr[0][8]=" X";
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[0][8]="XZ";
}
	break;
}
case 10:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[0][9]=" X";
	arr[0][9]=table[0][9];
	cout<<"Congratulations "<<a<<" obtained a 10th to 29th ladder "<<endl;
arr[2][8]={" X"};
system("pause");
sum[1]=29;
	if(sum[1]==sum1[1])
	{
		arr[2][8]="XZ";
}

break;
	}
	case 11:
{cout<<a<<" is moving to number "<<sum[1]<<endl;
arr[1][0]=" X";
system("pause");
if(sum[1]==sum1[1])
	{
		arr[1][0]="XZ";
}
break;		}
case 12:
{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[1][1]=" X";
system("pause");
if(sum[1]==sum1[1])
	{
		arr[1][1]="XZ";
}
	break;
		}
case 13:
{cout<<a<<" is moving to number "<<sum[1]<<endl;	
arr[1][2]=" X";
system("pause");
if(sum[1]==sum1[1])
	{
		arr[1][2]="XZ";
}

	break;
		}		
case 14:
{cout<<a<<" is moving to number "<<sum[1]<<endl;	
arr[1][3]=" X";
arr[1][3]=table[1][3];
cout<<"Congratulations "<<a<<" obtained a 14th to 77th ladder "<<endl;;
arr[7][6]=" X";
system("pause");
sum[1]=77;
if(sum[1]==sum1[1])
	{
		arr[7][6]="XZ";
}

break;}
case 15:
{cout<<a<<" is moving to number "<<sum[1]<<endl;
arr[1][4]={" X"};
system("pause");
if(sum[1]==sum1[1])
	{
		arr[1][4]="XZ";
}

	break;
	}
	case 16:
{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[1][5]={" X"};
system("pause");
if(sum[1]==sum1[1])
	{
		arr[1][5]="XZ";
}
	
	break;
	}
	case 17:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[1][6]={" X"};
	system("pause");
if(sum[1]==sum1[1])
	{
		arr[1][6]="XZ";
}

	break;
	}
	case 18:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[1][7]={" X"};
	system("pause");
if(sum[1]==sum1[1])
	{
		arr[1][7]="XZ";
}

	break;
	}
	case 19:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[1][8]={" X"};
	system("pause");
if(sum[1]==sum1[1])
	{
		arr[1][8]="XZ";
}

	break;
	}
	case 20:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[1][9]={" X"};
	system("pause");
if(sum[1]==sum1[1])
	{
		arr[1][9]="XZ";
}

	break;
	}
	case 21:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[2][0]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[2][0]="XZ";
	}
	break;
	}
	case 22:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[2][1]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[2][1]="XZ";
	}
	break;
	}
	case 23:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[2][2]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[2][2]="XZ";
	}
	break;
	}
	case 24:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[2][3]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[2][3]="XZ";
	}
	break;
	}
	case 25:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[2][4]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[2][4]="XZ";
	}
	break;
	}
	case 26:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[2][5]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[2][5]="XZ";
	}
	break;
	}
	case 27:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[2][6]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[2][6]="XZ";
	}
	break;
	}
	case 28:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[2][7]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[2][7]="XZ";
	}
	break;
	}
	case 29:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[2][8]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[2][8]="XZ";
	}
	break;
	}
	case 30:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[2][9]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[2][9]="XZ";
	}
	break;
	}
	case 31:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[3][0]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[3][0]="XZ";
	}
	break;
	}
	case 32:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[3][1]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[3][1]="XZ";
	}
	break;
	}
case 33:
{cout<<a<<" is moving to number "<<sum[1]<<endl;
arr[3][2]={" X"};
arr[3][2]=table[3][2];
cout<<"Congratulations "<<a<<" obtained a 33rd to 51th ladder "<<endl;;
cout<<a<<" is moving to 51th number"<<endl;
	arr[5][0]={" X"};
system("pause");	
sum[1]=51;
	if(sum[1]==sum1[1])
	{
		arr[5][0]="XZ";
	}

break;
}
	case 34:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[3][3]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[3][3]="XZ";
	}
	break;
	}
	case 35:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[3][4]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[3][4]="XZ";
	}
	break;
	}
	case 36:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[3][5]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[3][5]="XZ";
	}
	break;
	}
	case 37:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[3][6]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[3][6]="XZ";
	}
	break;
	}
	case 38:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[3][7]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[3][7]="XZ";
	}
	break;
	}
	case 39:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[3][8]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[3][8]="XZ";
	}
	break;
	}
	case 40:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[3][9]={" X"};
arr[3][9]=table[3][9];
	cout<<"YIKES.....A Snake "<<endl;
cout<<a<<" is moving to 20th number"<<endl;
	arr[1][9]={" X"};
	system("pause");
	sum[1]=20;
	if(sum[1]==sum1[1])
	{
		arr[1][9]="XZ";
	}
	break;
	}
	case 41:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[4][0]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[4][0]="XZ";
	}
	break;
	}
	case 42:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[4][1]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[4][1]="XZ";
	}
	break;
	}
	case 43:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[4][2]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[4][2]="XZ";
	}
	break;
	}
	case 44:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[4][3]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[4][3]="XZ";
	}
	break;
	}
	case 45:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[4][4]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[4][4]="XZ";
	}
	break;
	}
	case 46:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[4][5]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[4][5]="XZ";
	}
	break;
	}
	case 47:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[4][6]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[4][6]="XZ";
	}
	break;
	}case 48:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[4][7]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[4][7]="XZ";
	}
	break;
	}
	case 49:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[4][8]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[4][8]="XZ";
	}
	break;
	}
	case 50:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[4][9]={" X"};
arr[4][9]=table[4][9];
	cout<<"YIKES.....A Snake "<<endl;
cout<<a<<" is moving to 16th number"<<endl;
	arr[1][5]={" X"};
	system("pause");
	sum[1]=16;
	if(sum[1]==sum1[1])
	{
		arr[1][5]="XZ";
	}
	break;
	}
	case 51:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[5][0]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[5][0]="XZ";
	}
	break;
	}
	case 52:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[5][1]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[5][1]="XZ";
	}
	break;
	}
	case 53:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[5][2]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[5][2]="XZ";
	}
	break;
	}
	case 54:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[5][3]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[5][3]="XZ";
	}
	break;
	}
	case 55:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[5][4]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[5][4]="XZ";
	}
	break;
	}case 56:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[5][5]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[5][5]="XZ";
	}
	break;
	}
	case 57:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[5][6]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[5][6]="XZ";
	}
	break;
	}
	case 58:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[5][7]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[5][7]="XZ";
	}
	break;
	}
	case 59:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[5][8]={" X"};
		system("pause");
	if(sum[1]==sum1[1])
	{
		arr[5][8]="XZ";
	}
	break;
	}
	case 60:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[5][9]={" X"};
		system("pause");
	if(sum[1]==sum1[1])
	{
		arr[5][9]="XZ";
	}
	break;
	}
	case 61:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[6][0]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[6][0]="XZ";
	}
	break;
	}
	case 62:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[6][1]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[6][1]="XZ";
	}
	break;
	}
	case 63:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[6][2]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[6][2]="XZ";
	}
	break;
	}
	case 64:
{cout<<a<<" is moving to number "<<sum[1]<<endl;
arr[6][3]={" X"};
arr[6][3]=table[6][3];
cout<<"Congratulations "<<a<<" obtained a 64th to 82th ladder "<<endl;;
cout<<a<<" is moving to 82th number"<<endl;
	arr[8][1]={" X"};
system("pause");
sum[1]=82;
	if(sum[1]==sum1[1])
	{
		arr[8][1]="XZ";
	}	
break;	}

	case 65:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[6][4]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[6][4]="XZ";
	}
	break;
	}
	case 66:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[6][5]={" X"};
system("pause");
	if(sum[1]==sum1[1])
	{
		arr[6][5]="XZ";
	}
	break;
	}
	case 67:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[6][6]={" X"};
system("pause");	
	if(sum[1]==sum1[1])
	{
		arr[6][6]="XZ";
	}
	break;
	}
	case 68:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[6][7]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[6][7]="XZ";
	}
	break;
	}
	case 69:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[6][8]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[6][8]="XZ";
	}
	break;
	}
	case 70:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[6][9]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[6][9]="XZ";
	}
	break;
	}
	case 71:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[7][0]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[7][0]="XZ";
	}
	break;
	}
	case 72:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[7][1]={" X"};
		system("pause");
	if(sum[1]==sum1[1])
	{
		arr[7][1]="XZ";
	}
	break;
	}
	case 73:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[7][2]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[7][2]="XZ";
	}
	break;
	}
	case 74:
{
cout<<a<<" is moving to number "<<sum[1]<<endl;
arr[7][3]={" X"};
arr[7][3]=table[7][3];
cout<<"Congratulations "<<a<<" obtained a 74th to 90th ladder "<<endl;;
cout<<a<<" is moving to 82th number"<<endl;
	arr[8][9]={" X"};
system("pause");
sum[1]=90;
	if(sum[1]==sum1[1])
	{
		arr[8][9]="XZ";
	}
	break;	
	}			
		
case 75:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[7][4]={" X"};
system("pause");
	if(sum[1]==sum1[1])
	{
		arr[7][4]="XZ";
	}
	break;
	}
	case 76:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[7][5]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[7][5]="XZ";
	}
	break;
	}
	case 77:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[7][6]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[7][6]="XZ";
	}
	break;
	}
	case 78:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[7][7]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[7][7]="XZ";
	}
	break;
	}
	case 79:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[7][8]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[7][8]="XZ";
	}
	break;
	}
	case 80:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[7][9]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[7][9]="XZ";
	}
	break;
	}
	case 81:
	{
	cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[8][0]={" X"};
arr[8][0]=table[8][0];
	cout<<"YIKES.....A Snake "<<endl;
cout<<a<<" is moving to 78th number"<<endl;
	arr[7][7]={" X"};
	system("pause");
	sum[1]=78;
	if(sum[1]==sum1[1])
	{
		arr[7][7]="XZ";
	}
	break;
	
	}
	case 82:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[8][1]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[8][1]="XZ";
	}
	break;
	}
	case 83:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[8][2]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[8][2]="XZ";
	}
	break;
	}
	case 84:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[8][3]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[8][3]="XZ";
	}
	break;
	}
	case 85:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[8][4]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[8][4]="XZ";
	}
	break;
	}
	case 86:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[8][5]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[8][5]="XZ";
	}
	break;
	}
	case 87:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[8][6]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[8][6]="XZ";
	}
	break;
	}
	case 88:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[8][7]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[8][7]="XZ";
	}
	break;
	}
	case 89:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[8][8]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[8][8]="XZ";
	}
	break;
	}
	case 90:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[8][9]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[8][9]="XZ";
	}
	break;
	}
	case 91:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[9][0]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[9][0]="XZ";
	}
	break;
	}
	case 92:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[9][1]={" X"};
arr[9][1]=table[9][1];
	cout<<"YIKES.....A Snake "<<endl;
cout<<a<<" is moving to 52th number"<<endl;
	arr[5][1]={" X"};
	system("pause");
	sum[1]=52;
	if(sum[1]==sum1[1])
	{
		arr[5][1]="XZ";
	}
	break;
	}
	case 93:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[9][2]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[9][2]="XZ";
	}
	break;
	}
	case 94:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[9][3]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[9][3]="XZ";
	}
	break;
	}
	case 95:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[9][4]={" X"};
arr[9][4]=table[9][4];
	cout<<"YIKES.....A Snake "<<endl;
cout<<a<<" is moving to 36th number"<<endl;
	system("pause");
	arr[3][5]={" X"};
	sum[1]=36;
	if(sum[1]==sum1[1])
	{
		arr[3][5]="XZ";
	}
	break;
	}
	case 96:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[9][5]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[9][5]="XZ";
	}
	break;
	}
	case 97:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[9][6]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[9][6]="XZ";
	}
	break;
	}
	case 98:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[9][7]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[9][7]="XZ";
	}
	break;
	}
	case 99:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[9][8]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[9][8]="XZ";
	}
	
	break;
	}
	case 100:
	{cout<<a<<" is moving to number "<<sum[1]<<endl;
	arr[9][9]={" X"};
	system("pause");
	if(sum[1]==sum1[1])
	{
		arr[9][9]="XZ";
	}
	break;
}}
}
	//For player 2
 if(q%2==0)
	{
{
		
if(sum1[1]==99&&g>1)
	{
		sum1[1]=99;
}
else if(sum1[1]==98&&g>2)
	{
		sum1[1]=98;
}
else if(sum1[1]==97&&g>3)
	{
	sum1[1]=97;
}
else if(sum1[1]==96&&g>4)
{
	sum1[1]=96;
}
else
{
sum1[1]+=g;
}
}
	switch(sum1[1])
{
case 1:
	
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[0][0]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[0][0]="XZ";
	}
	break;}
case 2:
	{cout<<b<<" is moving to number  "<<sum1[1]<<endl;
		arr[0][1]={" Z"};
		system("pause");
	if(sum1[1]==sum[1])
	{
		arr[0][1]="XZ";
	}

	break;}
	case 3:
{cout<<b<<" is moving to number "<<sum1[1]<<endl;
arr[0][2]={" Z"};
system("pause");
	if(sum1[1]==sum[1])
	{
		arr[0][2]="XZ";
	}

			break;
}
case 4:
{cout<<b<<" is moving to number "<<sum1[1]<<endl;
arr[0][3]={" Z"};
arr[0][3]=table[0][3];
cout<<"Congratulations "<<b<<" obtained b 4th to 22nd ladder "<<endl;
cout<<b<<" is moving to 22th number "<<endl;
arr[2][1]={" Z"};
system("pause");
sum1[1]=22;
if(sum1[1]==sum[1])
	{
		arr[2][1]="XZ";
	}

break;
}			
case 5:
{cout<<b<<" is moving to number "<<sum1[1];
arr[0][4]={" Z"};
system("pause");
if(sum1[1]==sum[1])
	{
		arr[0][4]="XZ";
}
break;
}	
case 6:
{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[0][5]={" Z"};
	system("pause");
if(sum1[1]==sum[1])
	{
		arr[0][5]="XZ";
}
break;	}
case 7:
{cout<<b<<" is moving to number "<<sum1[1]<<endl;	
arr[0][6]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[0][6]="XZ";
}
	break;
}
case 8:
{cout<<b<<" is moving to number "<<sum1[1]<<endl;
arr[0][7]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[0][7]="XZ";
}
break;}
case 9:
{cout<<b<<" is moving to number "<<sum1[1]<<endl;
arr[0][8]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[0][8]="XZ";
}
	break;
}
case 10:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[0][9]={" Z"};
	arr[0][9]=table[0][9];
	cout<<"Congratulations "<<b<<" obtained b 10th to 29th ladder "<<endl;
arr[2][8]={" Z"};
system("pause");
sum1[1]=29;
	if(sum1[1]==sum[1])
	{
		arr[2][8]="XZ";
}

break;
	}
	case 11:
{cout<<b<<" is moving to number "<<sum1[1]<<endl;
arr[1][0]={" Z"};
system("pause");
if(sum1[1]==sum[1])
	{
		arr[1][0]="XZ";
}
break;		}
case 12:
{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[1][1]={" Z"};
system("pause");
if(sum1[1]==sum[1])
	{
		arr[1][1]="XZ";
}
	break;
		}
case 13:
{cout<<b<<" is moving to number "<<sum1[1]<<endl;	
arr[1][2]={" Z"};
system("pause");
if(sum1[1]==sum[1])
	{
		arr[1][2]="XZ";
}

	break;
		}		
case 14:
{cout<<b<<" is moving to number "<<sum1[1]<<endl;	
arr[1][3]={" Z"};
arr[1][3]=table[1][3];
cout<<"Congratulations "<<b<<" obtained b 14th to 77th ladder "<<endl;;
arr[7][6]={" Z"};
system("pause");
sum1[1]=77;
if(sum1[1]==sum[1])
	{
		arr[7][6]="XZ";
}

break;}
case 15:
{cout<<b<<" is moving to number "<<sum1[1]<<endl;
arr[1][4]={" Z"};
system("pause");
if(sum1[1]==sum[1])
	{
		arr[1][4]="XZ";
}

	break;
	}
	case 16:
{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[1][5]={" Z"};
system("pause");
if(sum1[1]==sum[1])
	{
		arr[1][5]="XZ";
}
	
	break;
	}
	case 17:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[1][6]={" Z"};
	system("pause");
if(sum1[1]==sum[1])
	{
		arr[1][6]="XZ";
}

	break;
	}
	case 18:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[1][7]={" Z"};
	system("pause");
if(sum1[1]==sum[1])
	{
		arr[1][7]="XZ";
}

	break;
	}
	case 19:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[1][8]={" Z"};
	system("pause");
if(sum1[1]==sum[1])
	{
		arr[1][8]="XZ";
}

	break;
	}
	case 20:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[1][9]={" Z"};
	system("pause");
if(sum1[1]==sum[1])
	{
		arr[1][9]="XZ";
}

	break;
	}
	case 21:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[2][0]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[2][0]="XZ";
	}
	break;
	}
	case 22:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[2][1]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[2][1]="XZ";
	}
	break;
	}
	case 23:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[2][2]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[2][2]="XZ";
	}
	break;
	}
	case 24:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[2][3]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[2][3]="XZ";
	}
	break;
	}
	case 25:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[2][4]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[2][4]="XZ";
	}
	break;
	}
	case 26:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[2][5]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[2][5]="XZ";
	}
	break;
	}
	case 27:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[2][6]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[2][6]="XZ";
	}
	break;
	}
	case 28:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[2][7]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[2][7]="XZ";
	}
	break;
	}
	case 29:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[2][8]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[2][8]="XZ";
	}
	break;
	}
	case 30:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[2][9]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[2][9]="XZ";
	}
	break;
	}
	case 31:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[3][0]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[3][0]="XZ";
	}
	break;
	}
	case 32:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[3][1]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[3][1]="XZ";
	}
	break;
	}
case 33:
{cout<<b<<" is moving to number "<<sum1[1]<<endl;
arr[3][2]={" Z"};
arr[3][2]=table[3][2];
cout<<"Congratulations "<<b<<" obtained b 33rd to 51th ladder "<<endl;;
cout<<b<<" is moving to 51th number"<<endl;
	arr[5][0]={" Z"};
system("pause");	
sum1[1]=51;
	if(sum1[1]==sum[1])
	{
		arr[5][0]="XZ";
	}

break;
}
	case 34:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[3][3]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[3][3]="XZ";
	}
	break;
	}
	case 35:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[3][4]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[3][4]="XZ";
	}
	break;
	}
	case 36:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[3][5]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[3][5]="XZ";
	}
	break;
	}
	case 37:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[3][6]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[3][6]="XZ";
	}
	break;
	}
	case 38:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[3][7]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[3][7]="XZ";
	}
	break;
	}
	case 39:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[3][8]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[3][8]="XZ";
	}
	break;
	}
	case 40:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[3][9]={" Z"};
arr[3][9]=table[3][9];
	cout<<"YIKES.....b Snbke "<<endl;
cout<<b<<" is moving to 20th number"<<endl;
	arr[1][9]={" Z"};
	system("pause");
	sum1[1]=20;
	if(sum1[1]==sum[1])
	{
		arr[1][9]="XZ";
	}
	break;
	}
	case 41:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[4][0]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[4][0]="XZ";
	}
	break;
	}
	case 42:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[4][1]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[4][1]="XZ";
	}
	break;
	}
	case 43:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[4][2]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[4][2]="XZ";
	}
	break;
	}
	case 44:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[4][3]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[4][3]="XZ";
	}
	break;
	}
	case 45:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[4][4]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[4][4]="XZ";
	}
	break;
	}
	case 46:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[4][5]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[4][5]="XZ";
	}
	break;
	}
	case 47:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[4][6]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[4][6]="XZ";
	}
	break;
	}case 48:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[4][7]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[4][7]="XZ";
	}
	break;
	}
	case 49:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[4][8]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[4][8]="XZ";
	}
	break;
	}
	case 50:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[4][9]={" Z"};
arr[4][9]=table[4][9];
	cout<<"YIKES.....b Snbke "<<endl;
cout<<b<<" is moving to 16th number"<<endl;
	arr[1][5]={" Z"};
	system("pause");
	sum1[1]=16;
	if(sum1[1]==sum[1])
	{
		arr[1][5]="XZ";
	}
	break;
	}
	case 51:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[5][0]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[5][0]="XZ";
	}
	break;
	}
	case 52:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[5][1]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[5][1]="XZ";
	}
	break;
	}
	case 53:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[5][2]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[5][2]="XZ";
	}
	break;
	}
	case 54:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[5][3]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[5][3]="XZ";
	}
	break;
	}
	case 55:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[5][4]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[5][4]="XZ";
	}
	break;
	}case 56:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[5][5]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[5][5]="XZ";
	}
	break;
	}
	case 57:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[5][6]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[5][6]="XZ";
	}
	break;
	}
	case 58:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[5][7]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[5][7]="XZ";
	}
	break;
	}
	case 59:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[5][8]={" Z"};
		system("pause");
	if(sum1[1]==sum[1])
	{
		arr[5][8]="XZ";
	}
	break;
	}
	case 60:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[5][9]={" Z"};
		system("pause");
	if(sum1[1]==sum[1])
	{
		arr[5][9]="XZ";
	}
	break;
	}
	case 61:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[6][0]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[6][0]="XZ";
	}
	break;
	}
	case 62:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[6][1]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[6][1]="XZ";
	}
	break;
	}
	case 63:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[6][2]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[6][2]="XZ";
	}
	break;
	}
	case 64:
{cout<<b<<" is moving to number "<<sum1[1]<<endl;
arr[6][3]={" Z"};
arr[6][3]=table[6][3];
cout<<"Congratulations "<<b<<" obtained b 64th to 82th ladder "<<endl;;
cout<<b<<" is moving to 82th number"<<endl;
	arr[8][1]={" Z"};
system("pause");
sum1[1]=82;
	if(sum1[1]==sum[1])
	{
		arr[8][1]="XZ";
	}	
break;	}

	case 65:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[6][4]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[6][4]="XZ";
	}
	break;
	}
	case 66:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[6][5]={" Z"};
system("pause");
	if(sum1[1]==sum[1])
	{
		arr[6][5]="XZ";
	}
	break;
	}
	case 67:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[6][6]={" Z"};
system("pause");	
	if(sum1[1]==sum[1])
	{
		arr[6][6]="XZ";
	}
	break;
	}
	case 68:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[6][7]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[6][7]="XZ";
	}
	break;
	}
	case 69:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[6][8]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[6][8]="XZ";
	}
	break;
	}
	case 70:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[6][9]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[6][9]="XZ";
	}
	break;
	}
	case 71:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[7][0]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[7][0]="XZ";
	}
	break;
	}
	case 72:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[7][1]={" Z"};
		system("pause");
	if(sum1[1]==sum[1])
	{
		arr[7][1]="XZ";
	}
	break;
	}
	case 73:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[7][2]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[7][2]="XZ";
	}
	break;
	}
	case 74:
{
cout<<b<<" is moving to number "<<sum1[1]<<endl;
arr[7][3]={" Z"};
arr[7][3]=table[7][3];
cout<<"Congratulations "<<b<<" obtained b 74th to 90th ladder "<<endl;;
cout<<b<<" is moving to 82th number"<<endl;
	arr[8][9]={" Z"};
system("pause");
sum1[1]=90;
	if(sum1[1]==sum[1])
	{
		arr[8][9]="XZ";
	}
	break;	
	}			
		
case 75:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[7][4]={" Z"};
system("pause");
	if(sum1[1]==sum[1])
	{
		arr[7][4]="XZ";
	}
	break;
	}
	case 76:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[7][5]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[7][5]="XZ";
	}
	break;
	}
	case 77:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[7][6]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[7][6]="XZ";
	}
	break;
	}
	case 78:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[7][7]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[7][7]="XZ";
	}
	break;
	}
	case 79:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[7][8]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[7][8]="XZ";
	}
	break;
	}
	case 80:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[7][9]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[7][9]="XZ";
	}
	break;
	}
	case 81:
	{
	cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[8][0]={" Z"};
arr[8][0]=table[8][0];
	cout<<"YIKES.....b Snbke "<<endl;
cout<<b<<" is moving to 78th number"<<endl;
	arr[7][7]={" Z"};
	system("pause");
	sum1[1]=78;
	if(sum1[1]==sum[1])
	{
		arr[7][7]="XZ";
	}
	break;
	
	}
	case 82:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[8][1]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[8][1]="XZ";
	}
	break;
	}
	case 83:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[8][2]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[8][2]="XZ";
	}
	break;
	}
	case 84:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[8][3]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[8][3]="XZ";
	}
	break;
	}
	case 85:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[8][4]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[8][4]="XZ";
	}
	break;
	}
	case 86:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[8][5]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[8][5]="XZ";
	}
	break;
	}
	case 87:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[8][6]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[8][6]="XZ";
	}
	break;
	}
	case 88:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[8][7]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[8][7]="XZ";
	}
	break;
	}
	case 89:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[8][8]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[8][8]="XZ";
	}
	break;
	}
	case 90:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[8][9]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[8][9]="XZ";
	}
	break;
	}
	case 91:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[9][0]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[9][0]="XZ";
	}
	break;
	}
	case 92:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[9][1]={" Z"};
arr[9][1]=table[9][1];
	cout<<"YIKES.....b Snbke "<<endl;
cout<<b<<" is moving to 52th number"<<endl;
	arr[5][1]={" Z"};
	system("pause");
	sum1[1]=52;
	if(sum1[1]==sum[1])
	{
		arr[5][1]="XZ";
	}
	break;
	}
	case 93:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[9][2]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[9][2]="XZ";
	}
	break;
	}
	case 94:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[9][3]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[9][3]="XZ";
	}
	break;
	}
	case 95:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[9][4]={" Z"};
arr[9][4]=table[9][4];
	cout<<"YIKES.....b Snbke "<<endl;
cout<<b<<" is moving to 36th number"<<endl;
	system("pause");
	arr[3][5]={" Z"};
	sum1[1]=36;
	if(sum1[1]==sum[1])
	{
		arr[3][5]="XZ";
	}
	break;
	}
	if(sum[1]+g==101)
	{sum[1]=94;
	}
	case 96:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[9][5]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[9][5]="XZ";
	}
	
	break;
	}
	case 97:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[9][6]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[9][6]="XZ";
	}
	
	break;
	}
	case 98:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[9][7]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[9][7]="XZ";
	}
	
	break;
	}
	case 99:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[9][8]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[9][8]="XZ";
	}
	
	break;
	}
	case 100:
	{cout<<b<<" is moving to number "<<sum1[1]<<endl;
	arr[9][9]={" Z"};
	system("pause");
	if(sum1[1]==sum[1])
	{
		arr[9][9]="XZ";
	}

	break;
}
}
}	n++;	
	++q;
	if(q==3)
	{q=1;
	}
}
while(sum1[1]!=100&&sum[1]!=100);
winner(sum,sum1,a,b);
delete []sum;
delete []sum1;
}
void winner(int total[],int total1[],string p1,string p2)
{
if(total[1]==100)
cout<<"Congratulations "<<p1<<" wins....\n"<<p1<<" got\n........CHICKEN DINNER.......";
if(total1[1]==100)
cout<<"Congratulations "<<p2<<" wins....\n"<<p2<<" got\n........CHICKEN DINNER.......";
}
