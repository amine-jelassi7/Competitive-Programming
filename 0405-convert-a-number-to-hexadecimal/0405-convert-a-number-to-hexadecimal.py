class Solution:
    def toHex(self, num: int) -> str:
        if num==0:
            return '0'
        
        if num<0:
            num+=2**32

        digits : str = "0123456789abcdef"
        res: str = ""

        while num:
            remainder=num%16
            res=digits[remainder]+res
            num//=16

        return res