int main (int x9K4r1, char *argv []) {
    int i;
    int k;
    int i2lzxHDbA3R;
    int Sh7le8W15;
    int n;
    int EiKgCr0EMOS;
    i = (195 - 193);
    scanf ("%d\n%d", &k, &EiKgCr0EMOS);
    i2lzxHDbA3R = EiKgCr0EMOS;
    Sh7le8W15 = EiKgCr0EMOS;
    for (; i <= k;) {
        scanf ("%d", &n);
        if (n > i2lzxHDbA3R) {
            i2lzxHDbA3R = n;
        }
        if (n < i2lzxHDbA3R && n > Sh7le8W15) {
            Sh7le8W15 = n;
        }
        i = i + 1;
    }
    printf ("%d\n%d\n", i2lzxHDbA3R, Sh7le8W15);
    return 0;
}

