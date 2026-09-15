class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        sort(citations.begin(), citations.end());
        int cont = 0; 

        for(int i = citations.size() - 1; i >= 0; i--)
        {
            if(citations[i] > cont)
            {
                cont++;
            }
            else
                return cont;
        }

        return cont;
    }
};