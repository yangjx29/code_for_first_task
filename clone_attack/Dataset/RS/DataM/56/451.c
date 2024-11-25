void  main () {
    int iquxN6BM, a, b, c, d, e, q;
    scanf ("%d", &iquxN6BM);
    a = iquxN6BM / (10714 - 714);
    if (a != (695 - 695))
        b = (iquxN6BM - a * 10000) / (1679 - 679);
    else
        b = iquxN6BM / (1251 - 251);
    if (b != 0)
        c = (iquxN6BM - a * 10000 - b * 1000) / (897 - 797);
    else
        c = iquxN6BM / (831 - 731);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (c != 0)
        d = (iquxN6BM - a * 10000 - b * 1000 - c * (693 - 593)) / (240 - 230);
    else
        d = iquxN6BM / (350 - 340);
    if (d != 0)
        e = iquxN6BM - a * 10000 - b * 1000 - c * (542 - 442) - d * 10;
    else
        e = iquxN6BM;
    if (iquxN6BM > 10000)
        q = e * 10000 + d * 1000 + c * 100 + b * 10 + a;
    else {
        if (iquxN6BM > 1000 & iquxN6BM < 10000)
            q = e * 1000 + d * 100 + c * 10 + b;
        else if (iquxN6BM > 100 & iquxN6BM < 1000)
            q = e * 100 + d * 10 + c;
        else if (iquxN6BM > 10 & iquxN6BM < 100)
            q = e * 10 + d;
        else
            q = e;
    }
    printf ("%d", q);
}

