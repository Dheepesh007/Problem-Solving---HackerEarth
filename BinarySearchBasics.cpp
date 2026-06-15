import sys

def binary_search(arr, target):
    low = 0
    high = len(arr) - 1
    
    while low <= high:
        mid = (low + high) // 2
        
        if arr[mid] == target:
            return mid + 1  # Converting 0-based index to 1-based rank position
        elif arr[mid] < target:
            low = mid + 1
        else:
            high = mid - 1
            
    return -1

def main():
    # Using sys.stdin.read to handle large input efficiently
    input_data = sys.stdin.read().split()
    if not input_data:
        return
        
    n = int(input_data[0])
    
    # Extract the array elements
    arr = [int(x) for x in input_data[1:n+1]]
    
    # Extract the number of queries
    q = int(input_data[n+1])
    
    # Process each query
    query_start_idx = n + 2
    for i in range(q):
        target = int(input_data[query_start_idx + i])
        print(binary_search(arr, target))

if __name__ == '__main__':
    main()
