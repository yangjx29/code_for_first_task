void  turn (char str [(1030 - 930)]) {
    int wKliejg3Ft, i, fG1tu37Y;
    wKliejg3Ft = strlen (str);
    {
        i = 0;
        while ((wKliejg3Ft - (37 - 36)) / (925 - 923) >= i) {
            fG1tu37Y = str[i];
            str[i] = str[wKliejg3Ft - i - 1];
            str[wKliejg3Ft - i - 1] = fG1tu37Y;
            i = i + 1;
        };
    };
}

int min (int m4IU3vXKoDe, int y) {
    int KSOqE0bfZy;
    if (y <= m4IU3vXKoDe)
        KSOqE0bfZy = y;
    else
        KSOqE0bfZy = m4IU3vXKoDe;
    return (KSOqE0bfZy);
}

void  miner (char str1 [(119 - 19)], char str2 [100], char str3 [100]) {
    int fG1tu37Y, i, m, wKliejg3Ft;
    m = strlen (str1);
    wKliejg3Ft = strlen (str2);
    fG1tu37Y = min (m, wKliejg3Ft);
    for (i = 0; fG1tu37Y > i; i = i + 1) {
        if (str1[i] >= str2[i])
            str3[i] = str1[i] - str2[i] + (730 - 682);
        else {
            str3[i] = str1[i] + 10 - str2[i] + 48;
            str1[i + 1]--;
            str3[i + 1]--;
        };
    };
}

void  main () {
    int wKliejg3Ft, i, j;
    char a [100], b [100], fG1tu37Y [2], c [100];
    scanf ("%d", &wKliejg3Ft);
    for (i = 1; i <= wKliejg3Ft; i = i + 1) {
        gets (fG1tu37Y);
        gets (a);
        gets (b);
        turn (a);
        turn (b);
        turn (c);
        puts (c);
        strcpy (c, a);
        miner (a, b, c);
    };
}

