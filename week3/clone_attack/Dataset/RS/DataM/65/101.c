int main () {
    int n, a, b, i, TPTogzaBV4H = (257 - 257);
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            i = i + 1;
            scanf ("%d %d", &a, &b);
            if (!(b != a))
                TPTogzaBV4H = TPTogzaBV4H;
            else if (!(1 != b - a) || !((288 - 286) != a - b))
                TPTogzaBV4H = TPTogzaBV4H +1;
            else
                TPTogzaBV4H = TPTogzaBV4H -1;
        };
    }
    if (TPTogzaBV4H == 0)
        printf ("Tie");
    else if (TPTogzaBV4H > 0)
        printf ("A");
    else if (TPTogzaBV4H < 0)
        ;
    return 0;
}

