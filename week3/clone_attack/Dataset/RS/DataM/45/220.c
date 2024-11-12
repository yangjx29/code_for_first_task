void  main () {
    char *pb;
    char *TnUFg7R;
    char z2UpG91h4NWu [50], IRXo2DY8 [50];
    int k;
    int v80kar;
    int AvUAQSP;
    k = 0;
    scanf ("%s %s", z2UpG91h4NWu, IRXo2DY8);
    v80kar = strlen (z2UpG91h4NWu);
    AvUAQSP = strlen (IRXo2DY8);
    TnUFg7R = z2UpG91h4NWu;
    for (pb = IRXo2DY8; IRXo2DY8 +AvUAQSP > pb; pb = pb + 1) {
        k = k + 1;
        if (*TnUFg7R != *pb)
            continue;
        else
            TnUFg7R = TnUFg7R +1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (*TnUFg7R == z2UpG91h4NWu[v80kar])
            break;
    }
    printf ("%d", k - v80kar);
}

