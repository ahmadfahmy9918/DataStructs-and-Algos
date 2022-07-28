void mySort(int d[], unsigned int n)
{
	int j;
	int key;
	int k;
	for (j=1; j<n; j++){
		key = d[j];
		k = j-1; 
	while (k>=0 && d[k]>key){

	d[k+1] = d[k];
	k--;
	d[k+1] = key;
	}
	}
}
