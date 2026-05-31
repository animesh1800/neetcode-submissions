class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        n = len(nums)
        mp = {}

        res = []
        for i in range(0,n):
            diff = target - nums[i]

            val = mp.get(diff,-1)

            if val != -1:
                if(val < i):
                    res.append(val)
                    res.append(i)
                else:
                    res.append(i)
                    res.append(val)
            else:
                mp[nums[i]] = i

        return res


        