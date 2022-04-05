use two pointer
i points to first value
j points to last value
in every itteration we find the maximum water it can store

now area = base * height
==> we know the base (j-i)
==> so we have to find the height
==>height is the minimum of both the height pointing by i and j
==>increment the i or j which is minimum because the we have to find the maximum in every iteration.
==> time complexity == O(n)
==>space complexity == O(1)
