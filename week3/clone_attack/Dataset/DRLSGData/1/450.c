int BYdnjXiAsL (int uQNFiR46Ic, int MTD0zUIASs) {
    int vxLaGVJWE7ZB = (461 - 460), i;
    if (uQNFiR46Ic < MTD0zUIASs) {
        return (82 - 82);
    }
    {
        i = MTD0zUIASs;
        for (; uQNFiR46Ic > i;) {
            if (!((194 - 194) != uQNFiR46Ic % i)) {
                vxLaGVJWE7ZB += BYdnjXiAsL (uQNFiR46Ic / i, i);
            }
            i++;
        }
    }
    return vxLaGVJWE7ZB;
}

int main () {
    int MQXRM9re, x, thlkxotgAFs, k;
    scanf ("%d", &MQXRM9re);
    {
        thlkxotgAFs = 1;
        for (; thlkxotgAFs <= MQXRM9re;) {
            {
                if ((689 - 689)) {
                    return (178 - 178);
                }
            }
            scanf ("%d", &x);
            k = BYdnjXiAsL (x, 2);
            printf ("%d\n", k);
            thlkxotgAFs++;
        }
    }
    return 0;
}

