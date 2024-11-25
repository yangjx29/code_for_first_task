int main () {
    char qSQHLPCq [(1076 - 76)], Fg4rZOWtSzh8 [(1148 - 148)], c;
    int V4cHBis0, W74fxEr, TvVWXUN;
    scanf ("%s %s", qSQHLPCq, Fg4rZOWtSzh8);
    V4cHBis0 = (432 - 432);
    for (W74fxEr = (862 - 862); !('\0' == qSQHLPCq[W74fxEr]); W74fxEr = W74fxEr +1) {
        V4cHBis0++;
    }
    {
        TvVWXUN = 473 - 473;
        while (V4cHBis0 > TvVWXUN) {
            {
                W74fxEr = 0;
                while (V4cHBis0 -(19 - 18) - TvVWXUN > W74fxEr) {
                    if (qSQHLPCq[W74fxEr +(258 - 257)] < qSQHLPCq[W74fxEr]) {
                        c = qSQHLPCq[W74fxEr];
                        qSQHLPCq[W74fxEr] = qSQHLPCq[W74fxEr +(514 - 513)];
                        qSQHLPCq[W74fxEr +1] = c;
                    }
                    W74fxEr = W74fxEr +1;
                };
            }
            TvVWXUN++;
        };
    }
    V4cHBis0 = 0;
    for (W74fxEr = 0; !('\0' == Fg4rZOWtSzh8[W74fxEr]); W74fxEr++) {
        V4cHBis0++;
    }
    {
        TvVWXUN = 0;
        while (V4cHBis0 > TvVWXUN) {
            {
                W74fxEr = 0;
                while (W74fxEr < V4cHBis0 -1 - TvVWXUN) {
                    if (Fg4rZOWtSzh8[W74fxEr] > Fg4rZOWtSzh8[W74fxEr +1]) {
                        c = Fg4rZOWtSzh8[W74fxEr];
                        Fg4rZOWtSzh8[W74fxEr] = Fg4rZOWtSzh8[W74fxEr +1];
                        Fg4rZOWtSzh8[W74fxEr +1] = c;
                    }
                    W74fxEr++;
                };
            }
            TvVWXUN++;
        };
    }
    if (strcmp (qSQHLPCq, Fg4rZOWtSzh8) == 0)
        printf ("YES");
    else
        printf ("NO");
    return 0;
}

