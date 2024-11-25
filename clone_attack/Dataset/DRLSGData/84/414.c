int main () {
    int PkSL1g;
    int K0cnypAMLtzW;
    int B8503yfZI;
    int HxJipcLqEz;
    scanf ("%d%d", &K0cnypAMLtzW, &HxJipcLqEz);
    if (HxJipcLqEz > K0cnypAMLtzW) {
        int J8k4oDXB;
        J8k4oDXB = HxJipcLqEz;
        HxJipcLqEz = K0cnypAMLtzW;
        K0cnypAMLtzW = J8k4oDXB;
    }
    B8503yfZI = 100;
    {
        PkSL1g = 3;
        for (; PkSL1g < B8503yfZI;) {
            int NmtoF0bGHfa;
            int zHxygc;
            int tRuOsZh8;
            scanf ("%d", &NmtoF0bGHfa);
            if (NmtoF0bGHfa > HxJipcLqEz &&NmtoF0bGHfa < K0cnypAMLtzW) {
                zHxygc = K0cnypAMLtzW;
                tRuOsZh8 = NmtoF0bGHfa;
                HxJipcLqEz = tRuOsZh8;
                K0cnypAMLtzW = zHxygc;
            }
            else if (NmtoF0bGHfa > K0cnypAMLtzW) {
                zHxygc = NmtoF0bGHfa;
                tRuOsZh8 = K0cnypAMLtzW;
                HxJipcLqEz = tRuOsZh8;
                K0cnypAMLtzW = zHxygc;
            }
            else
                ;
            PkSL1g = PkSL1g +1;
        }
    }
    printf ("%d\n%d\n", K0cnypAMLtzW, HxJipcLqEz);
    return 0;
}

