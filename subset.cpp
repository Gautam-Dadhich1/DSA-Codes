#include<iostream>
#include<vector>
using namespace std;
void solution(vector<vector<int> >&ans, vector<int>nums, vector<int>temp, int idx)
{
    //base case
    if(idx >= nums.size())
    {
        ans.push_back(temp);
        return;
    }

    //exclude
    solution(ans, nums, temp, idx+1);

    //include
    temp.push_back(nums[idx]);
    solution(ans, nums, temp, idx+1);

}
int main()
{
    vector<vector<int> >ans;
    vector<int>temp;
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0; i<n; i++)
        cin>>nums[i];

    
    solution(ans, nums, temp, 0);
    for(auto i : ans)
    {
        for(auto j : i)
        {
            cout << j << " ";
        }
        cout <<endl;
    }
    return 0;
}