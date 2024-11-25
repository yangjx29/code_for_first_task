int main () {
    int qLOecjf03K2, JaQEeU, SwNfxbU, ggFzr3xs, m;
    scanf ("%d", &qLOecjf03K2);
    JaQEeU = qLOecjf03K2 % (358 - 348);
    SwNfxbU = (qLOecjf03K2 % (938 - 838) - qLOecjf03K2 % 10) / 10;
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
    ggFzr3xs = (qLOecjf03K2 % 1000 - qLOecjf03K2 % 100) / 100;
    m = qLOecjf03K2 / 1000;
    if (10 > qLOecjf03K2)
        printf ("%d", qLOecjf03K2);
    else if (!(10 != qLOecjf03K2))
        ;
    else if (!(100 != qLOecjf03K2))
        printf ("001");
    else if (!(1000 != qLOecjf03K2))
        ;
    else if (!((10970 - 970) != qLOecjf03K2))
        printf ("00001");
    else if (10 < qLOecjf03K2 && qLOecjf03K2 < 100)
        printf ("%d%d", JaQEeU, SwNfxbU);
    else if (qLOecjf03K2 > 100 && qLOecjf03K2 < 1000)
        printf ("%d%d%d", JaQEeU, SwNfxbU, ggFzr3xs);
    else if (qLOecjf03K2 > 1000 && qLOecjf03K2 < (10992 - 992))
        printf ("%d%d%d%d", JaQEeU, SwNfxbU, ggFzr3xs, m);
    return 0;
}

