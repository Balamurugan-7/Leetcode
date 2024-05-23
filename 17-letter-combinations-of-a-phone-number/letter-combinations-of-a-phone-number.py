class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        if not digits:
            return []
        pair_dig = {
            '2':'abc',
            '3':'def',
            '4':'ghi',
            '5':'jkl',
            '6':'mno',
            '7':'pqrs',
            '8':'tuv',
            '9':'wxyz',
        }
        def calc(index , comb):
            if index == len(digits):
                res.append(comb[:])
                return
            for letter in pair_dig[digits[index]]:
                calc(index+1 , comb + letter)
        res = []
        calc(0,"")
        return res