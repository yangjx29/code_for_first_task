void  main () {
    char string [50] [(885 - 870)];
    char zRVyhv;
    int strNnum;
    int strMnum;
    int ZQ9FMIBG;
    int minstr;
    int Pn6ElZBefs;
    int IlIHqRNb;
    int g2odn3;
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
    int len;
    strNnum = (944 - 944);
    strMnum = 0;
    ZQ9FMIBG = 0;
    minstr = 0;
    while ((zRVyhv = getchar ()) != '\n') {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 == strMnum) && (zRVyhv == ' ')) {
            string[strNnum][strMnum] = '\0';
            strNnum = strNnum + 1;
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
            strMnum = 0;
        }
        else if (zRVyhv != ' ') {
            string[strNnum][strMnum] = zRVyhv;
            strMnum = strMnum + 1;
        };
    }
    string[strNnum][strMnum] = '\0';
    for (g2odn3 = strNnum; g2odn3 > 0; g2odn3 = g2odn3 - 1)
        printf ("%s ", string[g2odn3]);
    printf ("%s", string[0]);
}

