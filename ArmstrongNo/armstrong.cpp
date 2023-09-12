bool checkArmstrong(int n){
	//Write your code here
	int count = 0;
	int sum = 0;
	int ld;
	int og=n;

	while(n>0){
		count++;
		n /= 10;
	}
	
	n = og;

	while(n>0){
		ld = n%10;
		sum += pow(ld, count);
		n /= 10;
	}

	if(sum==og) return true;
	return false;
}
