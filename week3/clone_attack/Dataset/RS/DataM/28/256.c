void  main () {
    char ZGwprge8V [(1000096 - 96)];
    gets (ZGwprge8V);
    int eaDIXMpEuxc, j, ZAIHXNY0w7k, b [(498 - 198)] = {(286 - 286)};
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
    char c;
    ZAIHXNY0w7k = strlen (ZGwprge8V);
    for (eaDIXMpEuxc = (525 - 525), j = (534 - 534); eaDIXMpEuxc < ZAIHXNY0w7k; eaDIXMpEuxc++) {
        if (!(' ' == ZGwprge8V[eaDIXMpEuxc]))
            b[j]++;
        if (!(' ' != ZGwprge8V[eaDIXMpEuxc]) && b[j] != 0)
            j++;
    }
    for (eaDIXMpEuxc = 0; eaDIXMpEuxc <= j; eaDIXMpEuxc++) {
        printf ("%d", b[eaDIXMpEuxc]);
        if (eaDIXMpEuxc != j)
            ;
    };
}

