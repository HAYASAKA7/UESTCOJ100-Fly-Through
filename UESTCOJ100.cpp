#include<bits/stdc++.h>
#define maxN 100001
using namespace std;

int main() {
	int N, M, num, hash[maxN], cnt, i, j, h;
	cin >> N >> M;
	memset(hash, 0, sizeof(hash));
	for (i = 1; i <= N; i++) {
		cin >> num;
		hash[num]++;
	}
	
	cnt=0;
	for(i=1;i<=maxN;i++){
		for(j=1;j<=hash[i];j++){
			cout<<i<<" ";
			cnt++;
			if(cnt==N) break;
		}
		if(cnt==N) break;
	}
	for (i = maxN - 2; i >= 1; i--) {
		hash[i] = hash[i] + hash[i + 1]; 
	}
	for (i = 1; i <= M; i++) {
		cin >> h;
		cout << hash[h] << endl;
	}
	return 0;
}

