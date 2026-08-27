# Making Change Problem using Dynamic Programming

# User input
n = int(input("Enter the number of coin denominations: "))

coins = []
print(f"Enter {n} coin denominations:")
for i in range(n):
    coins.append(int(input()))

amount = int(input("Enter the amount: "))

# DP array
dp = [float('inf')] * (amount + 1)

# Base case
dp[0] = 0

# Dynamic Programming
for i in range(1, amount + 1):
    for coin in coins:
        if coin <= i:
            dp[i] = min(dp[i], dp[i - coin] + 1)

# Display result
print("\nMinimum number of coins required:")

if dp[amount] == float('inf'):
    print("Change cannot be made with the given coins.")
else:
    print(dp[amount])

# Display DP table
print("\nDP Table:")
print(dp)

# Time Complexity
print("\nTime Complexity: O(amount × number of coins)")
print("Space Complexity: O(amount)")
