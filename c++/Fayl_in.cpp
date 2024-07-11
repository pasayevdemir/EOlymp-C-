#include <iostream>
#include <fstream>
#include <iomanip>
#include<bits/stdc++.h>
using namespace std ;
int main () 
{
	double a, b;
	freopen ("yield.in", "rt", stdin );
	freopen ("yield.out", "wt", stdout );
	cin >> a >> b;
	cout<<fixed<<setprecision(4)<<(a + b);
	return 0;
}
