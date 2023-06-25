#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include< algorithm >
using namespace std;
class Solution_first {
public:
	vector<int> twoSum(vector<int>& nums, int target) {

		int ii = 0, jj = 0;
		vector<vector<int>> multy_nums(nums.size(), vector<int>(nums.size()));

		for (int i = 0; i < nums.size(); i++) {
			if (i == 0) {
				for (int j = 0; j < nums.size(); j++) {
					multy_nums[0][j] = nums[j];
				}
			}
			else {
				for (int j = i; j < nums.size(); j++) {
					//j = i + 1;
					multy_nums[i][j] = multy_nums[0][i - 1] + multy_nums[0][j];

				}
			}
		}
		for (int i = 0; i < nums.size(); i++) {
			for (int j = i; j < nums.size(); j++) {
				if (multy_nums[i][j] == target) {
					ii = i;
					jj = j;
					cout << ii - 1 << " <--i " << endl << jj << " <--j " << endl;
					break;
				}
			}
			cout << endl;
		}
		cout << ii - 1 << " <--i " << endl << jj << " <--j " << endl;
		std::vector<int> v(2);
		v[0] = int(ii - 1);
		v[1] = int(jj);
		return v;
	}
};
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {

		int ii = 0, jj = 0;
		vector<vector<int>> multy_nums(nums.size(), vector<int>(nums.size()));

		for (size_t i = 0; i < nums.size(); i++) {
			if (i == 0) {
				for (size_t j = 0; j < nums.size(); j++) {
					multy_nums[0][j] = nums[j];
				}
			}
			else {
				for (size_t j = i; j < nums.size(); j++) {
					//j = i + 1;
					multy_nums[i][j] = multy_nums[0][i - 1] + multy_nums[0][j];
					if (multy_nums[i][j] == target) {
						std::vector<int> v(2);
						v[0] = ii+1;
						v[1] = jj+2;
						return v;
					//	break;
					}

				}
			}
		}
		//for (size_t i = 0; i < nums.size(); i++) {
		//	for (size_t j = i; j < nums.size(); j++) {
		//		if (multy_nums[i][j] == target) {
		//			ii = i;
		//			jj = j;
		//			cout << ii - 1 << " <--i " << endl << jj << " <--j " << endl;
		//			break;
		//		}
		//	}
		//	cout << endl;
		//}
		return { 0 };
	}
	
};

int main()
{
	vector<int> nums = { 1 ,100, 1000, 10000 };
	sort(nums.begin(), nums.end());
	int target = 11000;

	 Solution solve;
	 Solution_first solve_first;
	 cout << "easy version: " << solve.twoSum(nums, target)[0] << " " << solve.twoSum(nums, target)[1] << endl;
	 cout << "hard version: " << solve_first.twoSum(nums, target)[0]+1 << " " << solve_first.twoSum(nums, target)[1]+1 << endl;












	//sort(nums.begin(), nums.end());
	int ii = 0, jj =0;

	vector<vector<int>> multy_nums(nums.size(), vector<int>(nums.size()));


	//for (size_t i = 0; i < nums.size(); i++) {
	//	if (i == 0) {
	//		for (size_t j = 0; j < nums.size(); j++) {
	//			multy_nums[0][j] = nums[j];
	//		}
	//	}
	//	else {
	//		for (size_t j = i ; j < nums.size(); j++) {
	//			multy_nums[i][j] = multy_nums[0][i - 1] + multy_nums[0][j];
	//			if (multy_nums[i][j] == target) {
	//				ii = i;
	//				jj = j;
	//				
	//			}

	//		}
	//	}
	//}

	//for (size_t i = 0; i < nums.size(); i++) {
	//	for (size_t j = i; j < nums.size(); j++) {
	//		cout << multy_nums[i][j] << " ";
	//		/*if (multy_nums[i][j] == target) {
	//			ii = i;
	//			jj = j;
	//			cout << ii << " --i" << jj << " < --j " << endl;
	//			break;
	//		}*/
	//	}
	//	cout << endl;
	//}
	//for (size_t i = 0; i < nums.size(); i++) {
	//	for (size_t j = i; j < nums.size(); j++) {
	//		if (multy_nums[i][j] == target) {
	//			std::vector<int> v(2);
	//			v[0] = ii ;
	//			v[1] = jj+1;
	//			//return v;
	//			break;
	//		}
	//	}
	//	cout << endl;
	//}
	//for (int i = 0; i < nums.size()-1; i++) {
	//	for (int j = i + 1; j < nums.size(); j++) {
	//		if (nums[i] + nums[j] == target) {
	//			//cout << nums.size() << ' ' << j << '  ' << endl;
	//			cout << nums.size() << ' ' << j << '  ' << endl;
	//			ii = i;
	//			jj = j;
	//			break;
	//		}
	//	}
	//}
	//cout << ii << ' ' << std::distance(nums.begin(),jj) << '  ' << endl;
	return EXIT_SUCCESS;
}