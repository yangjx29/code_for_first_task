int main () {
    char nlWxCypS [(1873 - 873)] = {(840 - 840)};
    char YaU0I3vOfR [(453 - 433)] = {0};
    char iSMipEbyGTZ [20] = {0};
    char twtyTJACsMhQ [(198 - 148)] [(35 - 15)] = {(90 - 90)};
    int wordnum;
    int wEpBxtYSnbF;
    int len;
    int w3IhZCmR7Egp;
    int TXEaAN;
    int MnkQlHRJzY;
    wordnum = (17 - 17);
    wEpBxtYSnbF = (371 - 371);
    gets (nlWxCypS);
    gets (YaU0I3vOfR);
    gets (iSMipEbyGTZ);
    len = strlen (nlWxCypS);
    {
        MnkQlHRJzY = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (MnkQlHRJzY < len) {
            if (nlWxCypS[MnkQlHRJzY] != ' ') {
                twtyTJACsMhQ[wordnum][wEpBxtYSnbF] = nlWxCypS[MnkQlHRJzY];
                wEpBxtYSnbF = wEpBxtYSnbF + 1;
            }
            if (nlWxCypS[MnkQlHRJzY] == ' ') {
                wEpBxtYSnbF = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                wordnum = wordnum + 1;
            }
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
            MnkQlHRJzY = MnkQlHRJzY +1;
        };
    }
    TXEaAN = wordnum;
    {
        wordnum = 0;
        while (wordnum <= TXEaAN) {
            if (strcmp (YaU0I3vOfR, twtyTJACsMhQ[wordnum]) == 0) {
                strcpy (twtyTJACsMhQ[wordnum], iSMipEbyGTZ);
            }
            wordnum = wordnum + 1;
        };
    }
    printf ("%s", twtyTJACsMhQ[0]);
    for (wordnum = 1; wordnum <= TXEaAN; wordnum = wordnum + 1)
        printf (" %s", twtyTJACsMhQ[wordnum]);
    return 0;
}

