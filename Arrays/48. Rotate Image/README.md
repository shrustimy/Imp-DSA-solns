# 48. Rotate Image

`Medium`

You are given an `n x n` 2D `matrix` representing an image, rotate the image by <b>90</b> degrees (clockwise).

You have to rotate the image `in-place`, which means you have to modify the input 2D matrix directly. <b>DO NOT</b> allocate another 2D matrix and do the rotation.

 

### Example 1:

![image](https://user-images.githubusercontent.com/71809335/188250724-d4cccc0c-249a-4d36-bfe1-52f3dfbf31b9.png)


```
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]
```
### Example 2:

![image](https://user-images.githubusercontent.com/71809335/188250732-8dc708bb-1b4a-40e1-be59-7c08fd9447e9.png)

```
Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
```

### Constraints:

- `n == matrix.length == matrix[i].length`
- `1 <= n <= 20`
- `-1000 <= matrix[i][j] <= 1000`
