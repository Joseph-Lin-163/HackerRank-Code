#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
    	long N;
    	cin >> N;
    	long a,b,c,d,e,f,g,h,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    	a = 0;
    	b = 1;
    	c = 1;
    	d = 2;
    	e = 3;
    	f = 5;
    	g = 8;
    	h = 13;
    	j = 21;
    	k = 34;
    	l = 55;
    	m = 89;
    	n = 144;
    	o = 233;
    	p = 377;
    	q = 610;
    	r = 987;
    	s = 1597;
    	t = 2584;
    	u = 4181;
    	v = 6765;
    	w = 10946;
    	x = 17711;
    	y = 28657;
    	z = 46368;
    	while (true) {
	    	if (N == a || N == b || N == c || N == d || N == e || N == f || N == g || N == h || N == j
	    		 || N == k || N == l || N == m || N == n || N == o || N == p || N == q || N == r
	    		  || N == s || N == t || N == u || N == v || N == w || N == x || N == y || N == z) {
	    		cout << "IsFibo" << endl;
	    		break;
	    	}
	    	else if (N < z) {
	    		cout << "IsNotFibo" << endl;
	    		break;
	    	}
	    	else {
	    		a = z+y;
	    		b = a+z;
	    		c = b+a;
	    		d = c+b;
	    		e = d+c;
	    		f = e+d;
		    	g = f+e;
		    	h = g+f;
		    	j = h+g;
		    	k = j+h;
		    	l = k+j;
		    	m = l+k;
		    	n = m+l;
		    	o = n+m;
		    	p = o+n;
		    	q = p+o;
		    	r = q+p;
		    	s = r+q;
		    	t = s+r;
		    	u = t+s;
		    	v = u+t;
		    	w = v+u;
		    	x = w+v;
		    	y = x+w;
		    	z = y+x;
		    	//cout << z << endl;
	    	}
    	}
		/*
    	while(true) {
    		if (N != b && N > b) 
    			a = a+b;
    		else if (N < b) {
    			cout << "IsNotFibo" << endl;
    			break;
    		}
    		else {
    			cout << "IsFibo" << endl;
    			break;
    		}

    		if (N != a && N > a) 
    			b = a+b;
    		else if (N < a) {
    			cout << "IsNotFibo" << endl;
    			break;
    		}
    		else {
    			cout << "IsFibo" << endl;
    			break;
    		}
    	}
    	*/
    }
    
    return 0;
}
