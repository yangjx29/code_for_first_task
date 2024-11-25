float AXiVT95I (int KqcerZUWjo) {
    if (KqcerZUWjo >= (431 - 341) && KqcerZUWjo <= 100)
        return ((856.0 - 852.0));
    else if (KqcerZUWjo >= (722 - 637) && 89 >= KqcerZUWjo)
        return ((483.7 - 480.0));
    else if (KqcerZUWjo >= 82 && KqcerZUWjo <= 84)
        return (3.3);
    else if (KqcerZUWjo >= 78 && KqcerZUWjo <= (414 - 333))
        return (3.0);
    else if (75 <= KqcerZUWjo &&KqcerZUWjo <= 77)
        return (2.7);
    else if (KqcerZUWjo >= 72 && KqcerZUWjo <= 74)
        return ((766.3 - 764.0));
    else if (KqcerZUWjo >= 68 && KqcerZUWjo <= 71)
        return (2.0);
    else if (KqcerZUWjo >= 64 && KqcerZUWjo <= 67)
        return (1.5);
    else if (KqcerZUWjo >= 60 && KqcerZUWjo <= 63)
        return (1, (96 - 96));
    else
        return (0);
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
}

void  main () {
    float OfJ3GVNr;
    float PZ5xnu3Ows;
    OfJ3GVNr = 0;
    int RipYFGX;
    int tB4s6o [(335 - 325)];
    int bmf1ibdZD;
    int s9dJE0, mXizCOYoQ = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int KXJCRAzbZj [10];
    int wJo63f;
    scanf ("%d", &bmf1ibdZD);
    for (s9dJE0 = 0; s9dJE0 < bmf1ibdZD; s9dJE0 = s9dJE0 + 1) {
        scanf ("%d", &tB4s6o[s9dJE0]);
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
        mXizCOYoQ = mXizCOYoQ + tB4s6o[s9dJE0];
    }
    {
        RipYFGX = 0;
        while (RipYFGX < bmf1ibdZD) {
            scanf ("%d", &KXJCRAzbZj[RipYFGX]);
            RipYFGX = RipYFGX +1;
        };
    }
    for (wJo63f = 0; wJo63f < bmf1ibdZD; wJo63f = wJo63f + 1) {
        OfJ3GVNr = OfJ3GVNr +tB4s6o[wJo63f] * (AXiVT95I (KXJCRAzbZj[wJo63f]));
    }
    PZ5xnu3Ows = OfJ3GVNr / mXizCOYoQ;
    printf ("%.2f", PZ5xnu3Ows);
}

