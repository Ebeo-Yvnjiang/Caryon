#ifndef CARYON_H
#define CARYON_H
#include"somo.h"
struct randnum{
	ll realnum;
	randnum(){
		realnum=0;
	}
	void takeseed(){
		srand(time(NULL));
	}
	void setup(){
		fs(i,1,20,1) srand(rand());
	}
	ll cintrand(ll s=0, ll e){
		return rand()%(e-s+1)+s;
	}
};
#endif
