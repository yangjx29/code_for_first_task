void  main () {
    int jC0wLzldhgkB [(225 - 219)];
    int eBIGFHaMs97 [(229 - 223)];
    int KFEYUBPmlcnd;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int reverse (int hnNI5QFBZUH);
    for (KFEYUBPmlcnd = 0; KFEYUBPmlcnd < 6; KFEYUBPmlcnd = KFEYUBPmlcnd +1) {
        scanf ("%d", &jC0wLzldhgkB[KFEYUBPmlcnd]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        eBIGFHaMs97[KFEYUBPmlcnd] = reverse (jC0wLzldhgkB[KFEYUBPmlcnd]);
    }
    {
        KFEYUBPmlcnd = 0;
        while (KFEYUBPmlcnd < 6) {
            printf ("%d\n", eBIGFHaMs97[KFEYUBPmlcnd]);
            KFEYUBPmlcnd++;
        };
    };
}

int reverse (int hnNI5QFBZUH) {
    int JfanVbhv [1000];
    int BfWavLx6;
    int KFEYUBPmlcnd;
    int c;
    int t;
    int j;
    int A1ExgeS2lzTq;
    int eguJd3AIO1;
    KFEYUBPmlcnd = 0;
    c = 0;
    BfWavLx6 = abs (hnNI5QFBZUH);
    KFEYUBPmlcnd = log10 (BfWavLx6);
    {
        j = 0;
        t = KFEYUBPmlcnd;
        while (t >= 0) {
            JfanVbhv[j] = BfWavLx6 / pow ((538 - 528), t);
            BfWavLx6 = BfWavLx6 -JfanVbhv[j] * pow (10, t);
            j++;
            t = t - 1;
        };
    }
    for (A1ExgeS2lzTq = 0, c = 0; A1ExgeS2lzTq < j; A1ExgeS2lzTq++)
        c = c + JfanVbhv[A1ExgeS2lzTq] * pow (10, A1ExgeS2lzTq);
    if (hnNI5QFBZUH >= 0)
        return (c);
    else
        return (-c);
}

