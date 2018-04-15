#include <iostream>
#include<string>
using namespace std;
bool var1 =false ;
bool var2 =false ;

 void draw(char arr[3][3])
 {

      for (int i=0 ; i<3 ; i++)
    {
        for (int k=0; k<3 ; k++)
        {



   if (i==0 &&k<3)

  cout <<" | "<<arr[i][k]<<"";

   else if (i==1 &&k<3)

  cout <<" | "<<arr[i][k]<<"";
   else if (i==2 &&k<3)

  cout <<" | "<<arr[i][k]<<"";




  }
cout <<"|";
   cout <<endl;



    }}
/*=================*/

bool repet1(int num, char arr[3][3] )

{
    if (num>0 && num<=9)
    {

    if (num ==1)

    {
       if (arr[0][0]!='x' && arr[0][0]!='o')

    {
        arr[0][0]='x';}
        else

            cout <<"invalid value ... try again  "<<endl<<endl;

    }
    else  if (num ==2)

    {
      if (arr[0][1 ]!='x' && arr[0][1]!='o')

    {
        arr[0][1]='x'; }
        else
            cout <<"invalid value ... try again  "<<endl<<endl;

    }

    else if (num ==3)
    {
    if (arr[0][2]!='x' && arr[0][2]!='o')

    {
        arr[0][2]='x'; }
        else
            cout <<"invalid value ... try again  "<<endl<<endl;

    }

    else if (num ==4)
    {
    if (arr[1][0]!='x' && arr[1][0]!='o')

    {
        arr[1][0]='x'; }
        else
            cout <<"invalid value ... try again  "<<endl<<endl;

    }
    else if (num ==5)
    {
      if (arr[1][1]!='x' && arr[1][1]!='o')

    {
        arr[1][1]='x'; }
        else
            cout <<"invalid value ... try again  "<<endl<<endl;

    }

    else if (num ==6)
    {
    if (arr[1][2]!='x' && arr[1][2]!='o')

    {
        arr[1][2]='x';}
        else
            cout <<"invalid value ... try again  "<<endl<<endl;

    }

   else if (num ==7)
    {
    if (arr[2][0]!='x' && arr[2][0]!='o')

    {
        arr[2][0]='x'; }
        else
            cout <<"invalid value ... try again  "<<endl<<endl;

    }

   else if (num ==8)
    {
    if (arr[2][1]!='x' && arr[2][1]!='o')

    {
        arr[2][1]='x'; }
        else
            cout <<"invalid value ... try again  "<<endl<<endl;

    }

   else if (num ==9)
    {
    if (arr[2][2]!='x' && arr[2][2]!='o')

    {
        arr[2][2]='x'; }
        else
            cout <<"invalid value ... try again  "<<endl<<endl;
    }
    }
     else
        cout <<"invalid value ... try again  "<<endl<<endl;


}
/*==============*/

bool repet2(int num , char arr[3][3])
{
    if (num>0 && num<=9)
    {

    if (num ==1)

    {
       if (arr[0][0]!='x' && arr[0][0]!='o')

    {
        arr[0][0]='o';}
        else
            cout <<"invalid value ... try again  "<<endl<<endl;

    }
    else  if (num ==2)

    {
      if (arr[0][1 ]!='x' && arr[0][1]!='o')

    {
        arr[0][1]='o'; }
        else
            cout <<"invalid value ... try again  "<<endl<<endl;

    }

    else if (num ==3)
    {
    if (arr[0][2]!='x' && arr[0][2]!='o')

    {
        arr[0][2]='o'; }
        else
            cout <<"invalid value ... try again  "<<endl<<endl;

    }

    else if (num ==4)
    {
    if (arr[1][0]!='x' && arr[1][0]!='o')

    {
        arr[1][0]='o'; }
        else
            cout <<"invalid value ... try again  "<<endl<<endl;

    }
    else if (num ==5)
    {
      if (arr[1][1]!='x' && arr[1][1]!='o')

    {
        arr[1][1]='o'; }
        else
            cout <<"invalid value ... try again  "<<endl<<endl;

    }

    else if (num ==6)
    {
    if (arr[1][2]!='x' && arr[1][2]!='o')

    {
        arr[1][2]='o';}
        else
            cout <<"invalid value ... try again  "<<endl<<endl;

    }

   else if (num ==7)
    {
    if (arr[2][0]!='x' && arr[2][0]!='o')

    {
        arr[2][0]='o'; }
        else
            cout <<"invalid value ... try again  "<<endl<<endl;

    }

   else if (num ==8)
    {
    if (arr[2][1]!='x' && arr[2][1]!='o')

    {
        arr[2][1]='o'; }
        else
            cout <<"invalid value ... try again  "<<endl<<endl;

    }

   else if (num ==9)
    {
    if (arr[2][2]!='x' && arr[2][2]!='o')

    {
        arr[2][2]='o'; }
        else
            cout <<"invalid value ... try again "<<endl<<endl;

    }
    }
    else
        cout <<"invalid value ... try again  "<<endl<<endl;
}

/*================*/

void win(char arr[3][3])
{

//bool var1 =false ;

if (arr[0][0]=='x'&&arr[0][1]=='x'&&arr[0][2]=='x'){
var1=true;}
else if (arr[1][0]=='x'&&arr[1][1]=='x'&&arr[1][2]=='x'){
var1=true;}
else if (arr[2][0]=='x'&&arr[2][1]=='x'&&arr[2][2]=='x'){
var1=true;}
else if (arr[0][0]=='x'&&arr[1][0]=='x'&&arr[2][0]=='x'){
var1=true;}
else if (arr[0][1]=='x'&&arr[1][1]=='x'&&arr[2][1]=='x'){
var1=true;}
else if (arr[0][2]=='x'&&arr[1][2]=='x'&&arr[2][2]=='x'){
var1=true;}
else if (arr[0][0]=='x'&&arr[1][1]=='x'&&arr[2][2]=='x'){
var1=true;}
else if (arr[0][2]=='x'&&arr[1][1]=='x'&&arr[2][0]=='x'){
var1=true;;}


}



/*============*/
void win2(char arr[3][3])
{
//bool var2 =false ;

if (arr[0][0]=='o'&&arr[0][1]=='o'&&arr[0][2]=='o'){
var2=true;}
else if (arr[1][0]=='o'&&arr[1][1]=='o'&&arr[1][2]=='o'){
var2=true;}
else if (arr[2][0]=='o'&&arr[2][1]=='o'&&arr[2][2]=='o'){
var2=true;}
else if (arr[0][0]=='o'&&arr[1][0]=='o'&&arr[2][0]=='o'){
var2=true;}
else if (arr[0][1]=='o'&&arr[1][1]=='o'&&arr[2][1]=='o'){
var2=true;;}
else if (arr[0][2]=='o'&&arr[1][2]=='o'&&arr[2][2]=='o'){
var2=true;}
else if (arr[0][0]=='o'&&arr[1][1]=='o'&&arr[2][2]=='o'){
var2=true;}
else if (arr[0][2]=='o'&&arr[1][1]=='o'&&arr[2][0]=='o'){
var2=true;}


}


int main()
{
     cout <<"\n\n\n";
      cout <<"  0 |  1 | 2"<<endl;
     cout <<" --- ---- ---"<<endl;

  int num =0 ;
  char x, arr[3][3]={'1','2','3','4','5','6','7','8','9'};

    draw(arr);
cout <<"please choose a number from 1-9 : "<<endl;


 for (int k=0 ; k<5 ; k++)
{
    bool val=true;

    cout <<"player 1 : ";

  cin>>num;
while(val)
{

    if(num<1||num>9)
    {
        cout <<"invalid value ... try again  "<<endl;
         cout <<"player 1 : ";

        val=true;
        cin>>num;


    }
    else
    val=false;
}
  repet1(num,arr);

draw(arr);
win(arr);
if (var1==true){
    cout <<"player 1 wins "<<endl<<endl;
break;}


cout <<"player 2 : ";

cin >>num;
bool val2=true;
while(val2)
{

    if(num<1||num>9)
    {
         cout <<"player 2 : ";

        val2=true;

        cin>>num;
    }
    else
    val2=false;
}
repet2(num,arr);
draw(arr);
win2(arr);

if (var2==true){
    cout <<"player 2 wins "<<endl<<endl;
    break;}
}

    return 0;
}



