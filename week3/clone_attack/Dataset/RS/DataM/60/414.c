int dpUPE98jq (int yhQOxt) {
    int i, a;
    {
        i = 2;
        while (i < yhQOxt) {
            if (yhQOxt % i == 0)
                break;
            i = i + 1;
        };
    }
    if (i == yhQOxt)
        a = 1;
    else
        a = 0;
    return (a);
}

int main () {
    int dpUPE98jq (int yhQOxt);
    int i2TxSQIp, mN2mMtyj;
    int Flag = 0;
    scanf ("%d", &i2TxSQIp);
    {
        for (mN2mMtyj = 1; mN2mMtyj <= (i2TxSQIp - 2); mN2mMtyj = mN2mMtyj + 1)
            if (dpUPE98jq (mN2mMtyj) == 1)
                if (dpUPE98jq (mN2mMtyj + 2) == 1) {
                    printf ("%d %d\n", mN2mMtyj, (mN2mMtyj + 2));
                    Flag = 1;
                };
    }
    if (Flag == 0)
        printf ("empty");
}

