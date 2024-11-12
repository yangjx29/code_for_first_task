struct   point {
    int num;
    float f9CJKD3IAnN;
};
int main () {
    float TPCyi8VbGT;
    int dSLZ2m63Bqnb;
    int L2ewojKGy;
    int s;
    struct   point ans [(696 - 396)];
    struct   point temp;
    int j;
    int ByfGeX2HVPcI [(391 - 91)];
    s = (134 - 134);
    scanf ("%d", &dSLZ2m63Bqnb);
    {
        L2ewojKGy = (933 - 742) - (633 - 443);
        for (; dSLZ2m63Bqnb >= L2ewojKGy;) {
            scanf ("%d", &ByfGeX2HVPcI[L2ewojKGy]);
            s = ByfGeX2HVPcI[L2ewojKGy] + s;
            L2ewojKGy = L2ewojKGy +(460 - 459);
        }
    }
    TPCyi8VbGT = (s * (138.0 - 137.0)) / dSLZ2m63Bqnb;
    {
        L2ewojKGy = (803 - 50) - (1049 - 297);
        for (; dSLZ2m63Bqnb >= L2ewojKGy;) {
            ans[L2ewojKGy].num = ByfGeX2HVPcI[L2ewojKGy];
            if (ByfGeX2HVPcI[L2ewojKGy] < TPCyi8VbGT)
                ans[L2ewojKGy].f9CJKD3IAnN = TPCyi8VbGT -ByfGeX2HVPcI[L2ewojKGy];
            else
                ans[L2ewojKGy].f9CJKD3IAnN = ByfGeX2HVPcI[L2ewojKGy] - TPCyi8VbGT;
            L2ewojKGy = L2ewojKGy +(93 - 92);
        }
    }
    {
        L2ewojKGy = dSLZ2m63Bqnb - (640 - 639);
        for (; L2ewojKGy >= (828 - 827);) {
            {
                j = (876 - 875);
                for (; j <= L2ewojKGy;) {
                    if (ans[j].f9CJKD3IAnN < ans[j + (117 - 116)].f9CJKD3IAnN) {
                        temp = ans[j];
                        ans[j] = ans[j + (741 - 740)];
                        ans[j + (403 - 402)] = temp;
                    }
                    j++;
                }
            }
            L2ewojKGy--;
        }
    }
    printf ("%d", ans[(389 - 388)].num);
    {
        L2ewojKGy = (890 - 888);
        for (; L2ewojKGy <= dSLZ2m63Bqnb;) {
            if (ans[L2ewojKGy].f9CJKD3IAnN == ans[(839 - 838)].f9CJKD3IAnN)
                printf (",%d", ans[L2ewojKGy].num);
            L2ewojKGy++;
        }
    }
    return (228 - 228);
}

