#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

//Brute force
vector<int> twoSumBrute(vector<int>& nums, int target){

    vector<int> target_indices;

    for(int i = 0; i < nums.size(); i++){
        for(int j = i + 1; j < nums.size(); j++){
            if(nums.at(i) + nums.at(j) == target){
                target_indices.push_back(i);
                target_indices.push_back(j);
                break;
            }
        }
    }

    return target_indices;
}

vector<int> twoSumFast(vector<int>& nums, int target){
    vector<int> target_indices;

    unordered_map<int, int> hash_table;
    for(int i = 0; i < nums.size(); i++){
        int second_integer = target - nums.at(i);

        if(hash_table.find(second_integer) != hash_table.end()){
            target_indices.push_back(i);
            target_indices.push_back(hash_table.find(second_integer)->second);
            break;
        }
        else{
            hash_table[nums.at(i)] = i;
        }
    }


    return target_indices;
}

int main(){

    int numInArray = 0;
    int target;
    vector<int> key(2);

    cout << "Please enter the number integers in the array: ";
    cin >> numInArray;

    vector<int> array(numInArray);
    cout << "Enter " << numInArray << " elements:" << endl;
    for(int i = 0; i < numInArray; ++i){
        cin >> array[i];
    }

    cout << "Please enter target value: " << endl;
    cin >> target;

    key = twoSumBrute(array, target);


        cout << "[" << key[0] << "," << key[1] << "]" << endl;
    




    return 0;
}