class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        results : List[List[int]]= []

        def backtrack(index: int, path: List[int], current_sum: int):
            if current_sum == target:
                results.append(path[:])
                return
            
            if current_sum > target or index >= len(candidates):
                return
            
            path.append(candidates[index])
            backtrack(index, path, current_sum + candidates[index])
            path.pop()
            
            backtrack(index + 1, path, current_sum)

        backtrack(0, [], 0)
        return results