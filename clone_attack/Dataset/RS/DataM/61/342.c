int fibo (int qucFMjZqn) {
    if (qucFMjZqn == 1 || qucFMjZqn == 2)
        return (1);
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
    return (fibo (qucFMjZqn - 1) + fibo (qucFMjZqn - 2));
}

void  main () {
    int qucFMjZqn, hQEhbekMszNt, e1U2uKk5JNSs;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d", &qucFMjZqn);
    {
        hQEhbekMszNt = 0;
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
        while (hQEhbekMszNt < qucFMjZqn) {
            hQEhbekMszNt = hQEhbekMszNt + 1;
            scanf ("%d", &e1U2uKk5JNSs);
            printf ("%d\n", fibo (e1U2uKk5JNSs));
        };
    };
}

