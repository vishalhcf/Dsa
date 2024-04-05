from collections import defaultdict

 

def findMaxFruits(arr, n):

    basket = defaultdict(int)

    i = 0

    for j in range(n):

        basket[arr[j]] += 1

        if len(basket) > 2:

            basket[arr[i]] -= 1

            if basket[arr[i]] == 0:

                basket.pop(arr[i])

            i += 1

    return j - i + 1

 