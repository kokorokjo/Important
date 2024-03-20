#include <bits/stdc++.h> 
using namespace std; 

int longestCommonSubsequence(string& text1, string& text2) 
{ 
	int n = text1.size(); 
	int m = text2.size(); 

	
	vector<int> prev(m + 1, 0), cur(m + 1, 0); 

	for (int idx1 = 1; idx1 < n + 1; idx1++) { 
		for (int idx2 = 1; idx2 < m + 1; idx2++) { 
			if (text1[idx1 - 1] == text2[idx2 - 1]) 
				cur[idx2] = 1 + prev[idx2 - 1]; 
 
			else
				cur[idx2] = 0 + max(cur[idx2 - 1], prev[idx2]); 
		} 
		prev = cur; 
	} 

	return cur[m]; 
} 

int main() 
{ 
	string S1 = "AGGTAB"; 
	string S2 = "GXTXAYB"; 
 
	cout << "Length of LCS is "
		<< longestCommonSubsequence(S1, S2); 

	return 0; 
}
// print length of longest common subsequence
// Time Complexity: O(n*m)
// Space Complexity: O(m)
