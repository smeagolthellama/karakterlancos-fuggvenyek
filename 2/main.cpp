#include <iostream>
#include "stdkarlanc.hpp"

using namespace std;

/**
 *2. Adott egy karakterlánc, amely betűket és számjegyeket tartlamaz. Szúrjuk be minden számjegy után az illető számjegy kétszeressét!
 */

int main()
{
	char t[CHAR_STAR_SIZE];
	cin.getline(t,CHAR_STAR_SIZE);
	unsigned int i;
	char c[2]="\0";
	for(i=0;i<strlen(t);i++){
		c[0]=t[i];
		if(t[i]!='0'){
			if(atoi(c)!=0){
				beszur(t,itoa(atoi(c)*2,c,10),++i);
			}
		}else{
			beszur(t,c,++i);
		}
	}
	cout<<t;
	return 0;
}
