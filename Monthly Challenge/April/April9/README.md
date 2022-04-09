# [347. Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)

Given an integer array `nums` and an integer `k`, return <i>the</i> `k` <i>most frequent elements</i>. You may return the answer in <strong>any order</strong>.

 
### Example 1:
```
Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
```
### Example 2:
```
Input: nums = [1], k = 1
Output: [1]
``` 

### Constraints:

- `1 <= nums.length <= 10^5`
- `k` is in the range `[1, the number of unique elements in the array]`.
- It is <strong>guaranteed</strong> that the answer is <strong>unique</strong>.
 

<strong>Follow up:</strong> Your algorithm's time complexity must be better than `O(n log n)`, where n is the array's size.
