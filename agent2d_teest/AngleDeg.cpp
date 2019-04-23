#include <iostream>
#include </home/mm/local/include/rcsc/geom/angle_deg.h>

int main(int argc, char *argv[]){

	rcsc::AngleDeg angle1( 100.0 );
	rcsc::AngleDeg angle2( 30.0 );
	rcsc::AngleDeg answer( 0 );

	answer = angle1 + angle2;
	std::cout <<"angle1:" <<angle1 << std::endl;
	std::cout <<"angle2:" <<angle2 << std::endl;
	std::cout <<"angle1+angle2=" <<answer << std::endl;

	return 0;
}
