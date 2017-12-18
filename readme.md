my leetcode answers.  

updating...

## LinkedList

| # | title | Solution | Time | Space | Difficulty| Tag| Note |
|---|:---:|:---------|:-----|-------| ----------| ---| ---- |
|24|[Swap Nodes in Pairs]()|[C++]()|_O(n)_|_O(1)_|easy|||
|61|[Rotate List](https://leetcode.com/problems/rotate-list/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/RotateList.cpp)|_O(n)_|_O(1)_|easy||先变成循环链表再断开|
|82|[Remove Duplicates from Sorted List II](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/RemoveDuplicatesfromSortedListII.cpp)|_O(n)_|_O(1)_|medium||把有重复的元素都删除|
|83|[Remove Duplicates from Sorted List](https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/)|[C++]()|_O(n)_|_O(1)_|easy||删除重复的结点，只保留一个|



## Tree
| # | title | Solution | Time | Space | Difficulty| Tag| Note |
|---|:---:|:---------|:-----|-------| ----------| ---| ---- |
|307|[Range Sum Query - Mutable](https://leetcode.com/problems/range-sum-query-mutable/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/RangeSumQuery.cpp)|_ctor :O(n)  ,update : O(logn) , sum : O(logn)_|_O(n)_|medium||线段树|
|24|[Longest Univalue Path](https://leetcode.com/problems/longest-univalue-path/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/LongestUnivaluePath.cpp)|_O(n)_|_O(h)_|easy||dfs|
|654|[Maximum Binary Tree](https://leetcode.com/problems/maximum-binary-tree/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/MaximumBinaryTree.cpp)|_O(n)_|_O(n)_|medium|||
|652|[Find Duplicate Subtrees](https://leetcode.com/problems/find-duplicate-subtrees/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/FindDuplicateSubtrees.cpp)|_O(n)_|_O(n)_|medium|||
|684|[Redundant Connection](https://leetcode.com/problems/redundant-connection/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/RedundantConnection.cpp)|_O(n)_|_O(n)_|medium|||

## Hash Table
| # | title | Solution | Time | Space | Difficulty| Tag| Note |
|---|:---:|:---------|:-----|-------| ----------| ---| ---- |
|1|[Two Sum](https://leetcode.com/problems/two-sum/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/TwoSum.cpp)|_O(n)_|_O(n)_|easy|||
|3|[Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/LongestSubstringWithoutRepeatingCharacters.cpp)|_O(n)_|_O(n)_|medium|||
|36|[Valid Sudoku](https://leetcode.com/problems/valid-sudoku/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/ValidSudoku.cpp)|_O(n^2)_|_O(n)_|medium|||
|159|[Longest Substring with At Most Two Distinct Characters](https://leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/LongestSubstringwithAtMostTwoDistinctCharacters.cpp)|_O(n)_|_O(n)_|hard|||
|202|[Happy Number](https://leetcode.com/problems/happy-number/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/HappyNumber.cpp)|_O(k)_|_O(k)_|easy|||
|323|[Number of Connected Components in an Undirected Graph](https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/NumberofConnectedComponentsinanUndirectedGraph.cpp)|_O(n)_|_O(n)_|medium|||
|356|[Line Reflection](https://leetcode.com/problems/line-reflection/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/LineReflection.cpp)|_O(n)_|_O(n)_|medium|||
|387|[First Unique Character in a String](https://leetcode.com/problems/first-unique-character-in-a-string/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/FirstUniqueCharacterinaString.cpp)|_O(n)_|_O(n)_|easy|||
|737|[Sentence Similarity II](https://leetcode.com/problems/sentence-similarity-ii/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/SentenceSimilarityII.cpp)|_O(n)_|_O(n)_|medium||并查集，字符串在map里的位置作为并查集的查询条件|
|734|[Sentence Similarity](https://leetcode.com/problems/sentence-similarity/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/SentenceSimilarity.cpp)|_O(n)_|_O(n)_|easy|||
|721|[Accounts Merge](https://leetcode.com/problems/accounts-merge/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/AccountsMerge.cpp)|_O(n)_|_O(n)_|medium||1. 并查集 2. email-name，email-id，set[id]-emails, name-emails|
|554|[Brick Wall](https://leetcode.com/problems/brick-wall/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/BrickWall.cpp)|_O(n)_|_O(n)_|medium||记录每一行右边界出现的次数，从长度减去它就是最少要穿过的数目|
|457|[4Sum II](https://leetcode.com/problems/4sum-ii/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/4SumII.cpp)|_O(n^2)_|_O(n^2)_|medium||统计前两个数组两两元素的和并统计次数，再和后两个进行比较|

## Math
| # | title | Solution | Time | Space | Difficulty| Tag| Note |
|---|:---:|:---------|:-----|-------| ----------| ---| ---- |
|13|[Roman to Integer](https://leetcode.com/problems/roman-to-integer/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/RomantoInteger.cpp)|_O(n)_|_O(1)_|easy|||
|12|[Integer to Roman](https://leetcode.com/problems/integer-to-roman/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/IntegertoRoman.cpp)|_O(n)_|_O(1)_|medium|||
|400|[Nth Digit](https://leetcode.com/problems/nth-digit/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/NthDigit.cpp)|_O(lgn)_|_O(1)_|easy|||


|1|[]()|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/.cpp)|_O(n)_|_O(n)_|medium||找数的规律，分析第n个数落在位数是几位的区间里，再找落在那个数的哪个位置上|


## Sort
| # | title | Solution | Time | Space | Difficulty| Tag| Note |
|---|:---:|:---------|:-----|-------| ----------| ---| ---- |
|88|[Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/MergeSortedArray.cpp)|_O(n)_|_O(1)_|easy||从后向前插入|
|147|[Insertion Sort List](https://leetcode.com/problems/insertion-sort-list/description/)|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/InsertionSortList.cpp)|_O(n)_|_O(n)_|medium||找到要插入位置的节点，再插入|
|1|[]()|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/.cpp)|_O(n)_|_O(n)_|medium|||


|1|[]()|[C++](https://github.com/zoo-keeper/leetcode/blob/master/leetcode/cpp/.cpp)|_O(n)_|_O(n)_|medium|||

