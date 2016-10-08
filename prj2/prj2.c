#include <stdio.h>

void main()
{
	unsigned char i;
	
	//下面是死循环了，i= 255时加1就是溢出为0 
	//for( i = 0 ; i < 256 ; i++)
	//{
	//	printf( "%d\n" , i);
	//}
	
	//下面也是死循环
	for( i = 10 ; i >= 0 ; i-- )
	{
		printf( "%d\n" , i);	
	} 
	
}
