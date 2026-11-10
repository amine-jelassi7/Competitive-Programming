impl Solution {
    pub fn subsets(nums: Vec<i32>) -> Vec<Vec<i32>> {
        let mut subsets = vec![vec![]];

        for &num in &nums {
            let count = subsets.len();
            for i in 0..count {
                let mut current = subsets[i].clone();
                current.push(num);
                subsets.push(current);
            }
        }

        subsets
    }
}