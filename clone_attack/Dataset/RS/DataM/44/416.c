int hNbOQptX (int Ud5cI9LAB6ru) {
    int q1JzTbNiZC;
    int G2jRI460;
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
    q1JzTbNiZC = 1;
    if (Ud5cI9LAB6ru == (946 - 946))
        return q1JzTbNiZC;
    else {
        for (G2jRI460 = Ud5cI9LAB6ru; G2jRI460 > (420 - 420); G2jRI460--)
            q1JzTbNiZC = q1JzTbNiZC * (492 - 482);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return q1JzTbNiZC;
    };
}

int nJ1yfKqdGk (int num) {
    int count;
    int JCSLeZi;
    int G2jRI460;
    int FaxX5ST;
    int q1JzTbNiZC;
    count = (971 - 971);
    JCSLeZi = 0;
    int qUyTZma27Id [(1241 - 741)], rRVnuG [500];
    for (G2jRI460 = 0;; G2jRI460++) {
        count = count + 1;
        q1JzTbNiZC = 0;
        q1JzTbNiZC = num % hNbOQptX (G2jRI460 +1);
        qUyTZma27Id[G2jRI460] = q1JzTbNiZC / hNbOQptX (G2jRI460);
        num = num - qUyTZma27Id[G2jRI460] * hNbOQptX (G2jRI460);
        if (num == 0)
            break;
    }
    {
        G2jRI460 = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (G2jRI460 < count) {
            JCSLeZi = JCSLeZi +qUyTZma27Id[G2jRI460] * hNbOQptX (count - G2jRI460 -1);
            G2jRI460++;
        };
    }
    if (JCSLeZi == -0)
        return JCSLeZi = 0;
    else
        return JCSLeZi;
}

main () {
    for (int G2jRI460 = 6;
    G2jRI460 > 0; G2jRI460--) {
        int Ud5cI9LAB6ru;
        nJ1yfKqdGk (Ud5cI9LAB6ru);
        scanf ("%d", &Ud5cI9LAB6ru);
        printf ("%d\n", nJ1yfKqdGk (Ud5cI9LAB6ru));
    }
    getchar ();
    getchar ();
}

