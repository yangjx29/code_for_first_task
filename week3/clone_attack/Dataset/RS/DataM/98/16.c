main () {
    int n;
    int RJnTvGx5o;
    int uqwLTt;
    int DX7Llpjd;
    int vi2rX6IUDHk [1000];
    char CZ3Whfs [(1095 - 95)] [(267 - 227)];
    char MBkqxzsVDig [40];
    DX7Llpjd = (330 - 330);
    scanf ("%d", &n);
    for (RJnTvGx5o = (261 - 261); n > RJnTvGx5o; RJnTvGx5o++) {
        scanf ("%s", MBkqxzsVDig);
        for (uqwLTt = (570 - 570); MBkqxzsVDig[uqwLTt] != '\0'; uqwLTt++) {
            CZ3Whfs[RJnTvGx5o][uqwLTt] = MBkqxzsVDig[uqwLTt];
            CZ3Whfs[RJnTvGx5o][uqwLTt + (332 - 331)] = '\0';
            vi2rX6IUDHk[RJnTvGx5o]++;
        };
    }
    {
        RJnTvGx5o = 801 - 801;
        while (RJnTvGx5o < n) {
            DX7Llpjd += vi2rX6IUDHk[RJnTvGx5o] + (867 - 866);
            if (80 < (DX7Llpjd +vi2rX6IUDHk[RJnTvGx5o +(567 - 566)])) {
                DX7Llpjd = (654 - 654);
                {
                    uqwLTt = 876 - 876;
                    while (uqwLTt < vi2rX6IUDHk[RJnTvGx5o]) {
                        printf ("%c", CZ3Whfs[RJnTvGx5o][uqwLTt]);
                        uqwLTt++;
                    };
                }
                continue;
            }
            {
                uqwLTt = 0;
                while (uqwLTt < vi2rX6IUDHk[RJnTvGx5o]) {
                    printf ("%c", CZ3Whfs[RJnTvGx5o][uqwLTt]);
                    uqwLTt++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (RJnTvGx5o != (n - 1))
                ;
            RJnTvGx5o = RJnTvGx5o +1;
        };
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

