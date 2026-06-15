import sys

def main():
    # Read all inputs from standard input efficiently
    input_data = sys.stdin.read().split()
    if not input_data:
        return
        
    n = int(input_data[0])
    # Convert the remaining strings into an integer array
    arr = [int(x) for x in input_data[1:]]
    
    swap_count = 0
    
    # Standard Bubble Sort Implementation
    for i in range(n):
        # The last i elements are already sorted, so we can ignore them
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                # Swap the elements
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                # Increment the swap counter
                swap_count += 1
                
    # Print total number of swaps required
    print(swap_count)

if __name__ == '__main__':
    main()
