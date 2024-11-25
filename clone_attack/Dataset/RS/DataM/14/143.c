struct   student {
    int wT2Sb8;
    int Chinese;
    int math;
    int sum;
};
void  main () {
    int wCDucTdAXWN;
    int CElrP0;
    int d;
    int i;
    int n;
    int OkL5aUn;
    int q;
    int r;
    wCDucTdAXWN = (634 - 634);
    CElrP0 = 0;
    d = 0;
    struct   student a [100000];
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d%d%d", &a[i].wT2Sb8, &a[i].Chinese, &a[i].math);
            a[i].sum = a[i].Chinese + a[i].math;
            if (!(0 != i))
                OkL5aUn = q = r = a[i].sum;
            else {
                if (a[i].sum > OkL5aUn) {
                    r = q;
                    q = OkL5aUn;
                    OkL5aUn = a[i].sum;
                    d = CElrP0;
                    CElrP0 = wCDucTdAXWN;
                    wCDucTdAXWN = i;
                }
                else if (a[i].sum > q) {
                    r = q;
                    q = a[i].sum;
                    d = CElrP0;
                    CElrP0 = i;
                }
                else if (a[i].sum > r) {
                    r = a[i].sum;
                    d = i;
                };
            }
            i = i + 1;
        };
    }
    printf ("%d %d\n%d %d\n%d %d\n", a[wCDucTdAXWN].wT2Sb8, a[wCDucTdAXWN].sum, a[CElrP0].wT2Sb8, a[CElrP0].sum, a[d].wT2Sb8, a[d].sum);
}

