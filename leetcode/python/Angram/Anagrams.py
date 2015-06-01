class Solution:
    # @param strs, a list of strings
    # @return a list of strings
    def anagrams(self, strs):
        d = {}
        res = []
        for i,s in enumerate(strs):
            key = self.make_keys(s)
            if key not in d:
                d[key] = [s]
            else:
                d[key].append(s)  #����ʹ��+= 
 
        for key in d:
            if len(d[key]) > 1:
                res += d[key]  #d[key] Ҳ���б��б�ϲ���ʱ��Ҫ�� += ������ʹ��append
        return res
    



    def make_keys(self,s):
        res = []
        d = {}
        for c in s:
            if c in d:
                d[c] += 1
            else:
                d[c] = 1

        for i in range(ord('a'),ord('z') + 1):
            c = chr(i)
            if c in d:
                res.append(c)
                res.append(str(d[c]))
        return ''.join(res)

solu = Solution()
print solu.anagrams(['ate','eat','aa'])
