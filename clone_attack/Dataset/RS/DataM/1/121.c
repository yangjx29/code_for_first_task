int f (int a, int NxhSgwL) {
    int L3PGZitXA;
    int JxK6paD;
    int X5mT4NeqD0;
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
    L3PGZitXA = 0;
    JxK6paD = (int) sqrt (a);
    for (X5mT4NeqD0 = NxhSgwL; JxK6paD >= X5mT4NeqD0; X5mT4NeqD0 = X5mT4NeqD0 +1) {
        if (a % X5mT4NeqD0 == 0)
            L3PGZitXA = L3PGZitXA +f (a / X5mT4NeqD0, X5mT4NeqD0);
    }
    return L3PGZitXA +1;
}

main () {
    int IRwKBqdsvnEQ;
    int X5mT4NeqD0;
    int num [1000];
    scanf ("%d", &IRwKBqdsvnEQ);
    {
        X5mT4NeqD0 = 0;
        while (X5mT4NeqD0 < IRwKBqdsvnEQ) {
            scanf ("%d", &num[X5mT4NeqD0]);
            printf ("%d\n", f (num[X5mT4NeqD0], (305 - 303)));
            X5mT4NeqD0 = X5mT4NeqD0 +1;
        };
    };
}

