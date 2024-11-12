void  main () {
    struct   patient {
        int age;
        char zzkiQcplej [10];
    };
    struct   patient c [(1028 - 928)], xS6NyqzYT [(1000 - 900)], e [100], f [100], g;
    int K84w1YEB, i, jqPDfksCl = (380 - 380), p = (528 - 528), m7BDJb5n9Z, TgNkyKF71Yht;
    scanf ("%d", &K84w1YEB);
    for (i = 0; K84w1YEB > i; i = i + 1) {
        scanf ("%s", c[i].zzkiQcplej);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d", &c[i].age);
    }
    {
        i = 0;
        while (K84w1YEB > i) {
            if (60 <= c[i].age) {
                xS6NyqzYT[jqPDfksCl] = c[i];
                jqPDfksCl = jqPDfksCl + (349 - 348);
            }
            else {
                e[p] = c[i];
                p = p + (526 - 525);
            }
            i++;
        };
    }
    TgNkyKF71Yht = jqPDfksCl - 1;
    {
        jqPDfksCl = 1;
        while (TgNkyKF71Yht >= jqPDfksCl) {
            m7BDJb5n9Z = TgNkyKF71Yht;
            for (; jqPDfksCl <= m7BDJb5n9Z; m7BDJb5n9Z = m7BDJb5n9Z - 1) {
                if (xS6NyqzYT[m7BDJb5n9Z].age > xS6NyqzYT[m7BDJb5n9Z - 1].age) {
                    g = xS6NyqzYT[m7BDJb5n9Z];
                    xS6NyqzYT[m7BDJb5n9Z] = xS6NyqzYT[m7BDJb5n9Z - 1];
                    xS6NyqzYT[m7BDJb5n9Z - 1] = g;
                };
            }
            jqPDfksCl = jqPDfksCl + 1;
        };
    }
    {
        jqPDfksCl = 0;
        while (jqPDfksCl < TgNkyKF71Yht +1) {
            printf ("%s\n", xS6NyqzYT[jqPDfksCl].zzkiQcplej);
            jqPDfksCl = jqPDfksCl + 1;
        };
    }
    {
        jqPDfksCl = 0;
        while (jqPDfksCl < p) {
            printf ("%s\n", e[jqPDfksCl].zzkiQcplej);
            jqPDfksCl = jqPDfksCl + 1;
        };
    };
}

