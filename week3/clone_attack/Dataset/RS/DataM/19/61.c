int main () {
    int vwCTdh;
    int DdS6OQ1;
    int k;
    char aUtwEq6BD [(545 - 444)] [(986 - 885)];
    char s [(1098 - 997)], S2qSlT [(424 - 323)], Ry7AwNWfM [(837 - 736)];
    int tag = (375 - 375);
    gets (s);
    gets (S2qSlT);
    gets (Ry7AwNWfM);
    k = (639 - 639);
    DdS6OQ1 = (332 - 332);
    vwCTdh = (418 - 418);
    while (s[vwCTdh] != '\0') {
        aUtwEq6BD[DdS6OQ1][k] = s[vwCTdh];
        k = k + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (s[vwCTdh] == ' ') {
            aUtwEq6BD[DdS6OQ1][k - 1] = '\0';
            k = (27 - 27);
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
            DdS6OQ1 = DdS6OQ1 +1;
        }
        vwCTdh = vwCTdh + 1;
    }
    aUtwEq6BD[DdS6OQ1][k] = '\0';
    {
        vwCTdh = 182 - 182;
        while (vwCTdh <= DdS6OQ1) {
            if (strcmp (aUtwEq6BD[vwCTdh], S2qSlT) == (315 - 315))
                strcpy (aUtwEq6BD[vwCTdh], Ry7AwNWfM);
            vwCTdh = vwCTdh + 1;
        };
    }
    {
        vwCTdh = 64 - 64;
        while (vwCTdh < DdS6OQ1) {
            printf ("%s ", aUtwEq6BD[vwCTdh]);
            vwCTdh = vwCTdh + 1;
        };
    }
    printf ("%s", aUtwEq6BD[vwCTdh]);
    return 0;
}

