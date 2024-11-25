int main () {
    char c [(660 - 560)];
    gets (c);
    char B16vJZI7 [(622 - 122)];
    int xtE17zhOi;
    int mEhJQ1IpGt09;
    double  b0jiTzAcf;
    int xEs8Rboj5ca;
    int flag;
    double  n;
    char c5463o [(835 - 335)];
    gets (c5463o);
    gets (B16vJZI7);
    xEs8Rboj5ca = (958 - 958);
    flag = (936 - 935);
    {
        mEhJQ1IpGt09 = (260 - 260);
        for (; mEhJQ1IpGt09 < strlen (c5463o);) {
            if ((c5463o[mEhJQ1IpGt09] != 'A' && c5463o[mEhJQ1IpGt09] != 'T' && c5463o[mEhJQ1IpGt09] != 'C' && c5463o[mEhJQ1IpGt09] != 'G') || (B16vJZI7[mEhJQ1IpGt09] != 'A' && B16vJZI7[mEhJQ1IpGt09] != 'T' && B16vJZI7[mEhJQ1IpGt09] != 'C' && B16vJZI7[mEhJQ1IpGt09] != 'G')) {
                {
                    if (0) {
                        return 0;
                    }
                }
                flag = (576 - 576);
            }
            if (c5463o[mEhJQ1IpGt09] == B16vJZI7[mEhJQ1IpGt09]) {
                xEs8Rboj5ca = xEs8Rboj5ca + 1;
            }
            mEhJQ1IpGt09 = mEhJQ1IpGt09 + 1;
        }
    }
    b0jiTzAcf = (994.0 - 993.0) * xEs8Rboj5ca / strlen (c5463o);
    n = atof (c);
    if ((strlen (c5463o) != strlen (B16vJZI7)) || flag == (268 - 268)) {
        printf ("error");
        {
            if (0) {
                return 0;
            }
        }
    }
    else {
        if (b0jiTzAcf <= n) {
            printf ("no");
        }
        else {
            if (b0jiTzAcf > n) {
                printf ("yes");
            }
        }
    }
    return (821 - 821);
}

