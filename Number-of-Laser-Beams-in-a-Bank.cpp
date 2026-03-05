1class Solution {
2public:
3    int numberOfBeams(vector<string>& bank) {
4        int prevrow_device = 0;
5        int currrow_device = 0;
6        int no_of_laser_beam = 0;
7        int rows = bank.size();
8        for(string row:bank){
9            for(char floor:row){
10                if(floor == '1') currrow_device++;
11            }
12            no_of_laser_beam += currrow_device * prevrow_device;
13            if (currrow_device != 0){
14                prevrow_device = currrow_device;
15                currrow_device = 0;
16            }
17        }
18        return no_of_laser_beam;
19
20    }
21};