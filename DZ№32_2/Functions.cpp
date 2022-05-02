#include <iostream>
#include <string>

int func(int m) {
	std::string binNum;
	int count = 0;
	for (int i = 31; i >= 0; i--){		
		binNum += std::to_string(m >> i & 1);	
	}			
	int len = binNum.length();	
	for (int i = 0; i < len; i++){
		if (binNum[i] == '1')
			count++;
	}
	return count;	
}