void reverse( int arr[], unsigned int len){

	int tmp;

	for (int i = 0; i < len/2; i++){
		tmp = arr[i];
		arr[i] = arr[len-i-1];
		arr[len-i-1] = tmp;
	}
}