class Solution {
public:
    string fractionAddition(string exp) {
        int numr = 0;
        int denr = 1;
        int i=0;
        int len = exp.size();
        while(i<len)
        {
            int s = 1;
            if(exp[i]=='-'||exp[i]=='+')
            {
                if(exp[i]=='-')
                    s=-1;
                i++;
            }
            int num = 0;
            while(i<len && exp[i]>='0' && exp[i]<='9')
            {
                num = num*10 + (exp[i]-'0');
                i++;
            }
            num *= s;
            i++;
            
            int den = 0;
            while(i<len && (exp[i]>='0' && exp[i]<='9'))
            {
                den = den*10 + (exp[i]-'0');
                i++;
            }

            numr = numr*den + num*denr;
            denr*=den;

            int gc = gcd(abs(numr),denr);
            numr/=gc;
            denr/=gc;

            cout<<numr <<" "<<denr<<endl;
        }
        return to_string(numr) + "/" + to_string(denr);
    }
};