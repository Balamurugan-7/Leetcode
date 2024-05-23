class Solution {
    public boolean isValid(String word) {
        int wlen = word.length();
        if(wlen<3) return false;
        int vc=0;
        int cc=0;
        for(int i=0;i<wlen;i++)
        {
            char l = word.charAt(i);
            if(l=='a' || l=='e' || l=='i' || l=='o' || l=='u' || l=='A' || l=='E' || l=='I' || l=='O' || l=='U')
            {
                vc++;
            }
            else if(l>='a'&& l<='z')
            {
                cc++;
            }
            else if(l>='A'&& l<='Z')
            {
                cc++;
            }
            else if(l<'0'|| l>'9')
            {
                return false;
            }
        }
        if(vc<1)    return false;
        if(cc<1)    return false;
        return true;
    }
}