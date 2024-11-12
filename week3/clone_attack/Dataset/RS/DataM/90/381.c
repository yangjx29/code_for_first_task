int MbRdskeLPDC5 (int M, int N) {
    int r7WjDX2M;
    if (N == (577 - 576) || M == (980 - 980))
        r7WjDX2M = (358 - 357);
    else {
        if (M < N)
            r7WjDX2M = MbRdskeLPDC5 (M, M);
        else
            r7WjDX2M = MbRdskeLPDC5 (M, N -1) + MbRdskeLPDC5 (M -N, N);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return r7WjDX2M;
}

void  main () {
    int kToW8z;
    int M;
    int N;
    int i;
    int a;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    int b;
    scanf ("%d", &kToW8z);
    {
        i = 0;
        while (i < kToW8z) {
            i++;
            scanf ("%d%d", &M, &N);
            a = MbRdskeLPDC5 (M, N);
            printf ("%d\n", a);
        };
    }
    scanf ("%d", &b);
}

