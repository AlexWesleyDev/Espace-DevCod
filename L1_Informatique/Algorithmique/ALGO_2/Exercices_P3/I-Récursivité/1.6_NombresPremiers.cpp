#include <iostream>
using namespace std;
//1.
int diviseur(int n,int d){
    if(1<=d && d<n){
        if(n%(d+1)==0) return d+1;
        else return diviseur(n,d+1);}}
//2.
int valeurAbs(int n){if(n>0) return n;else return -n;}

bool est_premier(int n){
    if(diviseur(valeurAbs(n),1)==valeurAbs(n)) return true;
    else return false;}  
//3.
void affiche_premiers(int n){
    if(n>1){
        if(est_premier(n)){
            affiche_premiers(n-1);
            cout<<n<<" ";}
        else affiche_premiers(n-1);}}

int main(){
    int n;cout<<"Entier : ";cin>>n;
    affiche_premiers(n-1);
    return 0;}