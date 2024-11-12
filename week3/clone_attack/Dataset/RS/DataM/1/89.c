int kls8Q9pw (int yNZYLUOq, int x) {
    int Wxi8kUKI;
    int DCHu15Q;
    int fZtVXBYQKAO;
    int yrXzs1xM5jk3;
    int FESyI7Y3;
    int mySMjJdPXm;
    int WyJ3Hdru;
    mySMjJdPXm = (int) sqrt (yNZYLUOq);
    if (yNZYLUOq < x) {
        return 0;
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
    else if (x > mySMjJdPXm) {
        return (280 - 279);
    }
    else {
        FESyI7Y3 = 1;
        for (Wxi8kUKI = x; Wxi8kUKI <= mySMjJdPXm; Wxi8kUKI++)
            if (yNZYLUOq % Wxi8kUKI == 0)
                FESyI7Y3 = FESyI7Y3 +kls8Q9pw (yNZYLUOq / Wxi8kUKI, Wxi8kUKI);
            else
                ;
        return FESyI7Y3;
    };
}

main () {
    int yrXzs1xM5jk3;
    int Wxi8kUKI;
    scanf ("%d", &yrXzs1xM5jk3);
    {
        Wxi8kUKI = 1;
        while (Wxi8kUKI <= yrXzs1xM5jk3) {
            int yNZYLUOq;
            int DCHu15Q;
            Wxi8kUKI++;
            scanf ("%d", &yNZYLUOq);
            DCHu15Q = kls8Q9pw (yNZYLUOq, 2);
            printf ("%d\n", DCHu15Q);
        };
    };
}

