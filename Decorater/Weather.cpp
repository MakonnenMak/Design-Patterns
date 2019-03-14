#include "Weather.h"


int Temperature::getTemp(){
	return temp;
}

void Temperature::setTemp(int t){
	temp=t;	
}

int Cloud::getTemp(){
	return cloud;
}

void Cloud::setCloudiness(int c){
	cloud=c;
}

int Humidity::getTemp(){
	return humidity;
}

void Humidity::setHumidity(int h){
	humidity=h;
}


