# LinkedArray

LinkedArray is a highly concurrent / performance optimized data structure similar
to an unorded array or linked list, except that it provides semi random access 
(a reduction in constant factor of data retrieval ie O(n / x) rather than O(n))
while not incurring the cost of reallocation and copy while adding data.

ideal use case - you do not know the size of data to be added to the structure,
but want close-to-random-access to elements and do NOT want to incur a periodical
O(n) resizing operation typical of an array list or similar structure.
