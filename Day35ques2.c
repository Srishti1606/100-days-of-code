Rotate an array to the right by k positions.
  def rotate_array(arr, k):
   n = len(arr)
   if n == 0:
       return arr
   k %= n # Normalize k
   def reverse(start, end):
       while start < end:
           arr[start], arr[end] = arr[end], arr[start]
           start += 1
           end -= 1
   # Step 1: Reverse last k elements
   reverse(n - k, n - 1)
   # Step 2: Reverse first n-k elements
   reverse(0, n - k - 1)
   # Step 3: Reverse entire array
   reverse(0, n - 1)
   return arr
# Example usage:
print(rotate_array([1, 2, 3, 4, 5, 6], 2)) # Output: [5, 6, 1, 2, 3, 4]
