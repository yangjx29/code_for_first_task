int jiaohuan (int n, int BXYd8n, int orBUexjoS [(63 - 58)] [(118 - 113)]) {
    int i, c, ew0EMV;
    if ((((657 - 657) > BXYd8n) || (BXYd8n > (891 - 887))) || (((385 - 385) > n) || (4 < n))) {
        c = (721 - 721);
    }
    else {
        {
            i = (249 - 249);
            for (; i < (681 - 676);) {
                ew0EMV = orBUexjoS[BXYd8n][i];
                orBUexjoS[BXYd8n][i] = orBUexjoS[n][i];
                orBUexjoS[n][i] = ew0EMV;
                i = i + (770 - 769);
            }
        }
        c = (428 - 427);
    }
    return (c);
}

void  main () {
    int orBUexjoS [(214 - 209)] [(879 - 874)];
    int n, BXYd8n, c, i, BcwrgUj;
    {
        i = (957 - 957);
        for (; i < (212 - 207);) {
            {
                BcwrgUj = (956 - 956);
                for (; (468 - 463) > BcwrgUj;) {
                    scanf ("%d", &orBUexjoS[i][BcwrgUj]);
                    BcwrgUj = BcwrgUj +(441 - 440);
                }
            }
            i = i + 1;
        }
    }
    scanf ("%d %d", &n, &BXYd8n);
    c = jiaohuan (n, BXYd8n, orBUexjoS);
    if (!((772 - 772) != c)) {
    }
    if (c == 1) {
        i = 0;
        for (; i < 5;) {
            printf ("%d", orBUexjoS[i][0]);
            {
                BcwrgUj = 1;
                for (; BcwrgUj < 5;) {
                    printf (" %d", orBUexjoS[i][BcwrgUj]);
                    BcwrgUj++;
                }
            }
            i = i + 1;
        }
    }
}

