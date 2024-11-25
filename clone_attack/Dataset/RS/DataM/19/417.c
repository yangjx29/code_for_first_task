void  main () {
    char wmkYV6Xb [(365 - 265)] [(1081 - 981)];
    char n1CQ0gTm [(122 - 21)];
    char aBla302VuS [(722 - 622)];
    char RCkv9MzfH8Qh [100];
    gets (n1CQ0gTm);
    gets (aBla302VuS);
    gets (RCkv9MzfH8Qh);
    int C8okXV4n;
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
    int CTGe0gCB9VM;
    int pq02lQdbt9;
    C8okXV4n = (936 - 936);
    CTGe0gCB9VM = (636 - 636);
    for (pq02lQdbt9 = (238 - 238); n1CQ0gTm[pq02lQdbt9] != '\0'; pq02lQdbt9 = pq02lQdbt9 + 1) {
        if (n1CQ0gTm[pq02lQdbt9] != ' ') {
            wmkYV6Xb[C8okXV4n][CTGe0gCB9VM] = n1CQ0gTm[pq02lQdbt9];
            CTGe0gCB9VM = CTGe0gCB9VM +1;
        }
        else {
            wmkYV6Xb[C8okXV4n][CTGe0gCB9VM] = '\0';
            C8okXV4n++;
            CTGe0gCB9VM = 0;
        };
    }
    wmkYV6Xb[C8okXV4n][CTGe0gCB9VM] = '\0';
    for (pq02lQdbt9 = 0; pq02lQdbt9 <= C8okXV4n; pq02lQdbt9 = pq02lQdbt9 + 1) {
        if (strcmp (wmkYV6Xb[pq02lQdbt9], aBla302VuS) == 0)
            strcpy (wmkYV6Xb[pq02lQdbt9], RCkv9MzfH8Qh);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    printf ("%s", wmkYV6Xb[0]);
    for (pq02lQdbt9 = (93 - 92); pq02lQdbt9 <= C8okXV4n; pq02lQdbt9++)
        printf (" %s", wmkYV6Xb[pq02lQdbt9]);
}

