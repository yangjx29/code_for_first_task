void  main () {
    int n, m1, m2;
    char *mYCSzv;
    char *r;
    char *BYIfP0Z;
    char *p2;
    char SrNK1e [50], c2 [50];
    p2 = c2;
    BYIfP0Z = SrNK1e;
    scanf ("%s%s", BYIfP0Z, p2);
    m1 = strlen (BYIfP0Z);
    m2 = strlen (p2);
    {
        mYCSzv = p2;
        while (mYCSzv <= p2 + m2 - 1) {
            if (*mYCSzv == *BYIfP0Z) {
                n = 0;
                {
                    r = mYCSzv + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (r <= mYCSzv + m1 - 1) {
                        if (*r != *(BYIfP0Z +(r - mYCSzv)))
                            n = 1;
                        r = r + 1;
                    };
                }
                if (n == 0) {
                    printf ("%d\n", mYCSzv - p2);
                    break;
                };
            }
            mYCSzv++;
        };
    };
}

