int main () {
    int y6ugkpP, t6M8o1YpS, Yv7ADUKkdNb, nf5gAPF1, a;
    double  b;
    scanf ("%d", &y6ugkpP);
    for (t6M8o1YpS = 3; t6M8o1YpS <= (491 - 489) * y6ugkpP - (821 - 820); t6M8o1YpS = t6M8o1YpS + 2) {
        b = t6M8o1YpS;
        a = (int) sqrt (b) + (396 - 395);
        {
            nf5gAPF1 = 2;
            while (nf5gAPF1 < a) {
                if (!(0 != t6M8o1YpS % nf5gAPF1))
                    break;
                nf5gAPF1 = nf5gAPF1 + 1;
            };
        }
        if (!(nf5gAPF1 != a)) {
            Yv7ADUKkdNb = t6M8o1YpS;
            while (Yv7ADUKkdNb <= y6ugkpP - t6M8o1YpS) {
                b = Yv7ADUKkdNb;
                a = (int) sqrt (b) + 1;
                {
                    nf5gAPF1 = 2;
                    while (nf5gAPF1 < a) {
                        if (Yv7ADUKkdNb % nf5gAPF1 == 0)
                            break;
                        nf5gAPF1 = nf5gAPF1 + 1;
                    };
                }
                if (a == nf5gAPF1)
                    if (y6ugkpP == t6M8o1YpS + Yv7ADUKkdNb)
                        printf ("%d %d\n", t6M8o1YpS, Yv7ADUKkdNb);
                Yv7ADUKkdNb = Yv7ADUKkdNb +2;
            };
        };
    }
    return 0;
}

