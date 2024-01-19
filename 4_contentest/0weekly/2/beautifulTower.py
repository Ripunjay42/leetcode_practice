class Solution:
    def func(self, v, idx):
        ans = 0
        x = v[idx]
        n = len(v)

        for i in range(idx, -1, -1):
            x = min(x, v[i])
            ans += x

        x = v[idx]
        for i in range(idx + 1, n):
            x = min(x, v[i])
            ans += x

        return ans

    def maximumSumOfHeights(self, v):
        ans = 0
        n = len(v)

        for i in range(n):
            ans = max(ans, self.func(v, i))

        return ans