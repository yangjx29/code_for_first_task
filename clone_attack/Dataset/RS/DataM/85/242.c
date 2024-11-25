void  main () {
    int ZdKzabrt;
    int yQ9JwKrYNvXj;
    int n;
    int len [100];
    int s [100];
    char uO569PfzV [(129 - 29)] [(628 - 608)];
    scanf ("%d", &n);
    for (ZdKzabrt = (807 - 806); n >= ZdKzabrt; ZdKzabrt++) {
        s[ZdKzabrt] = (534 - 534);
        scanf ("%s", uO569PfzV[ZdKzabrt]);
        len[ZdKzabrt] = strlen (uO569PfzV[ZdKzabrt]);
        if (((uO569PfzV[ZdKzabrt][0] >= 'A') && ('Z' >= uO569PfzV[ZdKzabrt][0])) || (('a' <= uO569PfzV[ZdKzabrt][0]) && (uO569PfzV[ZdKzabrt][0] <= 'z')) || (uO569PfzV[ZdKzabrt][0] == '_')) {
            s[ZdKzabrt] = 1;
            for (yQ9JwKrYNvXj = 1; len[ZdKzabrt] > yQ9JwKrYNvXj; yQ9JwKrYNvXj++) {
                if (((uO569PfzV[ZdKzabrt][yQ9JwKrYNvXj] >= 'A') && ('Z' >= uO569PfzV[ZdKzabrt][yQ9JwKrYNvXj])) || ((uO569PfzV[ZdKzabrt][yQ9JwKrYNvXj] >= 'a') && (uO569PfzV[ZdKzabrt][yQ9JwKrYNvXj] <= 'z')) || (uO569PfzV[ZdKzabrt][yQ9JwKrYNvXj] == '_') || ((uO569PfzV[ZdKzabrt][yQ9JwKrYNvXj] >= '0') && (uO569PfzV[ZdKzabrt][yQ9JwKrYNvXj] <= '9')))
                    s[ZdKzabrt]++;
            };
        };
    }
    {
        ZdKzabrt = 1;
        while (ZdKzabrt <= n) {
            if (s[ZdKzabrt] == len[ZdKzabrt])
                printf ("yes\n");
            if (s[ZdKzabrt] != len[ZdKzabrt])
                ;
            ZdKzabrt++;
        };
    };
}

