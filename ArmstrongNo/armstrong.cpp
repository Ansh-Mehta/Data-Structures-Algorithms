bool checkArmstrong(int n){
	int count = 0;
	int sum = 0;
	int ld;
	vector <int> v;
	int og=n;
	bool flag;

	while(n>0){
		count++;
		ld = n%10;
		v.push_back(ld);
		n /= 10;
	}

	if(n<1){ 
		for(int i=0; i<v.size(); i++){
			sum += pow(v[i], count);
		}
		flag=true;
	}

	if(sum==og && flag==true) return true;
	return false;
}
