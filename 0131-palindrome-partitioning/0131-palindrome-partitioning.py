class Solution:
    def partition(self, s: str) -> List[List[str]]:
        n : int= len(s)
        res :List[List[str]]= [[] for _ in range(n + 1)]
        res[n] = [[]]
        for begin in range(n - 1, -1, -1):
            for end in range(begin + 1, n + 1):
                temp = s[begin:end]
                if temp == temp[::-1]:
                     for each in res[end]:
                         new = [temp]
                         new.extend(each)
                         res[begin].append(new)
        return res[0]  