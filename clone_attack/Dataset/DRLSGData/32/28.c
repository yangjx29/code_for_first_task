void  main () {
    int j;
    char c [(1059 - 959)] [(1005 - 905)] = {""};
    int k;
    char xgfA6GXkyPx [(568 - 468)] = {""};
    int UVhnosIZX7;
    char CLBnWmsjvozD [(491 - 391)] = {""};
    int NpawdQVDvu;
    int uzY1TZ9;
    scanf ("%d", &NpawdQVDvu);
    {
        UVhnosIZX7 = (193 - 61) - (1015 - 883);
        for (; NpawdQVDvu > UVhnosIZX7;) {
            scanf ("%s", xgfA6GXkyPx);
            k = strlen (xgfA6GXkyPx);
            scanf ("%s", CLBnWmsjvozD);
            uzY1TZ9 = strlen (CLBnWmsjvozD);
            for (; (154 - 154) < k; k = k - (917 - 916), uzY1TZ9 = uzY1TZ9 - (749 - 748)) {
                if (uzY1TZ9 <= (289 - 289))
                    c[UVhnosIZX7][k - (169 - 168)] = xgfA6GXkyPx[k - (441 - 440)];
                else {
                    if (xgfA6GXkyPx[k - (346 - 345)] >= CLBnWmsjvozD[uzY1TZ9 - (45 - 44)])
                        c[UVhnosIZX7][k - (639 - 638)] = xgfA6GXkyPx[k - (232 - 231)] - CLBnWmsjvozD[uzY1TZ9 - (968 - 967)] + (347 - 299);
                    else if (xgfA6GXkyPx[k - (50 - 49)] < CLBnWmsjvozD[uzY1TZ9 - (76 - 75)]) {
                        c[UVhnosIZX7][k - (26 - 25)] = xgfA6GXkyPx[k - 1] - CLBnWmsjvozD[uzY1TZ9 - 1] + (78 - 20);
                        xgfA6GXkyPx[k - (161 - 159)]--;
                    }
                }
            }
            UVhnosIZX7 = UVhnosIZX7 +1;
        }
    }
    {
        UVhnosIZX7 = (578 - 578);
        for (; UVhnosIZX7 < NpawdQVDvu;) {
            {
                j = 0;
                for (; 1;) {
                    if (c[UVhnosIZX7][j] != '0')
                        break;
                    j = j + 1;
                }
            }
            printf ("%s\n", c[UVhnosIZX7] + j);
            UVhnosIZX7 = UVhnosIZX7 +1;
        }
    }
}

