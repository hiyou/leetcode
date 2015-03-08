class Solution:
    # @param A a list of integers
    # @return nothing, sort in place
    def sortColors(self, A):
        n = len(A)
        r = 0 # ���һ����ɫ������
        b = n - 1 #��һ����ɫ������
        i = 0
        while i <= b:
            if A[i] == 0:
                A[i],A[r] = A[r],A[i]
                r += 1
                i += 1 # ������������ǰ�棬��ֻ������1��0��������Ҫ�ƶ�������
            elif A[i] == 2:
                A[i],A[b] = A[b],A[i]
                b -= 1
            # ����i���ܼ�1 ��Ϊ�Ӻ��潻����������������0��1��2�е��κ�һ��         
            else:
                i += 1
solu = Solution()
solu.sortColors([1,0])