#include <iostream>
using namespace std;

int main() {
   int a, b;

   cout << "a: ";
   cin >> a;

   cout << endl;

   cout << "b: ";
   cin >> b;

   int p, q, r, s;
   p = 1;
   s = 1;
   q = 0;
   r = 0;

   int l;


   while(a!=0 && b!=0){
    if(a > b){
        l = a / b;
        p = p - r * l;
        q = q - s * l;
        a = a % b; 
    } else {
        l = b / a;
        r = r - p * l;
        s = s - q * l;
        b = b % a;
    }
   }

   int x, y;

   int k;

   if(a == 0){
    k = b;
    x = r;
    y = s;
   }else {
    k = a;
    x = p;
    y = q;
   }

   cout << k << ' ' << x << ' ' << y << endl;



   

}