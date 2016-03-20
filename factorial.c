


/*
求阶乘的递归和循环方式
*/


int fx(int n){
	if(n==1)//出口终止条件
		return 1;
	else 
		return n*fx(n-1);
}

int compute(int n){
	result=1;
	for(i=1;i<;++i){
		result*=i;
	}
	return result;
}