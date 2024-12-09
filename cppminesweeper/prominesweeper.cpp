#include <iostream>
#include <chrono>
#include <cstdlib>
using namespace std;
int random(int maxnumber){
    int u=rand()*65536;
    return ((rand()+u+rand())%maxnumber)+1;
}
int main(){
restartgamefromhere:
system("cls"); //linux could be cool to support.
    unsigned seed = (unsigned)chrono::steady_clock::now().time_since_epoch().count();
    srand(seed);
	char screen[202][202],game[202][202],chosenbefore[202][202];
	int width,height,mines,i,j;
	cout<<"input game width. (200 max): ";
    cin>>width;
    width%=201;
	cout<<"input game height. (200 max): ";
    cin>>height;
    height%=201;

    cout<<"input mines (values recommended are around "<<height*width*15/100<<"-"<<height*width*21/100<<". ("<<width*height-1<<" max): ";
    cin>>mines;
    mines%=(width*height);
    system("cls");
// generation
    for(i=0;i<=width+1;i++){
        for(j=0;j<=height+1;j++){
            screen[i][j]='#';
            game[i][j]=' ';
            chosenbefore[i][j]=' ';}}

for(i=mines;i!=0;i++){
    int x=random(width),y=random(height);
    i--;
    if(game[x][y]!='M'){
        game[x][y]='M';
        i--;}}
    int gennumber=0;
    for(i=1;i<width+1;i++){
        for(j=1;j<height+1;j++){gennumber=0;
            if(game[i][j]!='M'){
                        if(game[i+1][j]=='M') gennumber++;
                        if(game[i-1][j]=='M') gennumber++;
                        if(game[i][j+1]=='M') gennumber++;
                        if(game[i][j-1]=='M') gennumber++;
                        if(game[i+1][j+1]=='M') gennumber++;
                        if(game[i+1][j-1]=='M') gennumber++;
                        if(game[i-1][j+1]=='M') gennumber++;
                        if(game[i-1][j-1]=='M') gennumber++;
            game[i][j]=48+gennumber;
            gennumber=0;}}}

    for(i=1;i<width+1;i++){
        for(j=1;j<height+1;j++){
            if(game[i][j]=='0'){
            game[i][j]=' ';
            gennumber=0;}}}
for(i=1;i!=0;i=i){
    int x=random(width),y=random(height);
    if(game[x][y]!='M'){
        screen[x][y]=game[x][y];chosenbefore[x][y]='f';
        i--;
            if(screen[x][y]==' '){
                screen[x+1][y]=game[x+1][y];chosenbefore[x+1][y]='f';
                screen[x-1][y]=game[x-1][y];chosenbefore[x-1][y]='f';
                screen[x][y+1]=game[x][y+1];chosenbefore[x][y+1]='f';
                screen[x][y-1]=game[x][y-1];chosenbefore[x][y-1]='f';
                screen[x+1][y-1]=game[x+1][y-1];chosenbefore[x+1][y-1]='f';
                screen[x+1][y+1]=game[x+1][y+1];chosenbefore[x+1][y+1]='f';
                screen[x-1][y-1]=game[x-1][y-1];chosenbefore[x-1][y-1]='f';
                screen[x-1][y+1]=game[x-1][y+1];chosenbefore[x-1][y+1]='f';
            }}}
// game screen menu.
    int selw,unopenedcount,selh,winning=0;//winning 0=gaming. 1=won 2=lose
    cout<<"direction: 1 > width.\ndirection: 1 v height.\n";
gscreen: //NOOOOOOO DONT YOU FCKIGN DARE
int k;
for(k=0;k<50;k++){
    for(i=1;i<width+1;i++){
        for(j=1;j<height+1;j++){
            if(screen[i][j]==' '){
                screen[i+1][j]=game[i+1][j];chosenbefore[i+1][j]='f';
                screen[i-1][j]=game[i-1][j];chosenbefore[i-1][j]='f';
                screen[i][j+1]=game[i][j+1];chosenbefore[i][j+1]='f';
                screen[i][j-1]=game[i][j-1];chosenbefore[i][j-1]='f';
                screen[i+1][j-1]=game[i+1][j-1];chosenbefore[i+1][j-1]='f';
                screen[i+1][j+1]=game[i+1][j+1];chosenbefore[i+1][j+1]='f';
                screen[i-1][j-1]=game[i-1][j-1];chosenbefore[i-1][j-1]='f';
                screen[i-1][j+1]=game[i-1][j+1];chosenbefore[i-1][j+1]='f';
    }}}}

    unopenedcount=0;
    for(j=1;j<=height;j++){
        for(i=1;i<=width;i++){
            if(screen[i][j]=='#') unopenedcount++;
        }
    }
    system("cls");
    cout<<unopenedcount-mines<<" clean tiles remain. "<<width<<"x"<<height<<" "<<mines<<" mines.\n\n";
        for(i=1;i<=width+2;i++){
            cout<<"+";}cout<<"\n";

    for(j=1;j<=height;j++){cout<<"+";
        for(i=1;i<=width;i++){
            cout<<screen[i][j];}cout<<"+";
        cout<<endl;}

        for(i=1;i<=width+2;i++){
            cout<<"+";}
        if(unopenedcount==mines) winning=1;
        if(winning) {goto result;}
    cout<<"\n\n";
selwit:
    cout<<"width selection: ";
    cin>>selw;
    selw%=width+1;
    if(!selw) goto selwit;
selhit:
	cout<<"height selection: ";
    cin>>selh;
    selh%=width+1;
    if(!selh) goto selhit;
if(chosenbefore[selw][selh]!='f'){
    chosenbefore[selw][selh]='f';

        if(game[selw][selh]!='M'){
            screen[selw][selh]=game[selw][selh];
            unopenedcount--;
        }else{winning=2;goto result;}
}else{cout<<"you chose this before. \n";goto selwit;}
            if(unopenedcount==mines) winning=1;
        if(winning) {goto result;} else{goto gscreen;}


// game results menu
result:
    cout<<"\n\n\n";
switch (winning) {
  case 1:
    cout << "you won! wow! input a number to play again: ";
    break;
  case 2:
    cout << "you lost. input a number to play again: ";//:( why num?
    break;
}
cin>>i;
goto restartgamefromhere;
    return 0;
}
