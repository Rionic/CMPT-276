int scrambled( unsigned int a[], unsigned int b[], unsigned int len){

	if (len == 0)	return 1;

	int n[100] = {0};


	for (int i = 0; i < len; i++){
		n[a[i]] ++;
		n[b[i]] --;
	}

	for (int i = 0; i < 100; i++){
		if (n[i] != 0)	
			return 0;
	}

	return 1;
}
