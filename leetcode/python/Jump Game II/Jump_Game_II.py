class Solution:
    # @param A, a list of integers
    # @return an integer

    def jump(self, A):
        cur_reach = 0  #��¼ ��A[0]��ʼ������res����Ծ��Զ����������λ��
        cur_max = 0    #��¼ 0 - i ��Զ����������λ��
        res = 0
        n = len(A)
        for i in range(n):
            if cur_reach < i:
                res += 1
                cur_reach = cur_max
            cur_max = max(cur_max,A[i] + i)
        return res