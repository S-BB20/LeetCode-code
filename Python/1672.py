class Solution(object):
    def maximumWealth(self, accounts):
        ans = 0;
        for i in range(len(accounts)) :
             if ans < sum(accounts[i]) :
                    ans = sum(accounts[i])
        return ans