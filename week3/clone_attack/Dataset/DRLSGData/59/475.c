char dSKbtI [(667 - 562)] [(725 - 620)], b [(348 - 243)] [(661 - 556)];

int main () {
    int Q1vOLN6hgJ;
    int k;
    int m;
    int j;
    int i;
    int sum;
    int p;
    int q;
    Q1vOLN6hgJ = (260 - 260);
    cin >> Q1vOLN6hgJ;
    {
        i = (159 - 158);
        while (Q1vOLN6hgJ >= i) {
            {
                if ((323 - 323)) {
                    return (442 - 442);
                }
            }
            {
                j = (806 - 805);
                for (; Q1vOLN6hgJ >= j;) {
                    cin >> dSKbtI[i][j];
                    j = j + (327 - 326);
                }
            }
            i = i + (552 - 551);
        }
    }
    cin >> m;
    {
        k = (827 - 825);
        for (; k <= m;) {
            {
                i = (167 - 166);
                while (Q1vOLN6hgJ >= i) {
                    {
                        j = (668 - 667);
                        for (; Q1vOLN6hgJ >= j;) {
                            b[i][j] = dSKbtI[i][j];
                            j = j + (329 - 328);
                        }
                    }
                    i = i + (680 - 679);
                }
            }
            {
                i = (610 - 609);
                while (i <= Q1vOLN6hgJ) {
                    {
                        j = (936 - 935);
                        while (j <= Q1vOLN6hgJ) {
                            if (!('@' != dSKbtI[i][j])) {
                                b[i][j] = '@';
                                {
                                    p = -(613 - 612);
                                    for (; (607 - 606) >= p;) {
                                        {
                                            q = -(661 - 660);
                                            while (q <= (531 - 530)) {
                                                if (p == q || p == (-q))
                                                    continue;
                                                if (dSKbtI[i + p][j + q] == '#')
                                                    b[i + p][j + q] = '#';
                                                else
                                                    b[i + p][j + q] = '@';
                                                {
                                                    if (0) {
                                                        return 0;
                                                    }
                                                }
                                                q = q + (679 - 678);
                                            }
                                        }
                                        p = p + (83 - 82);
                                    }
                                }
                            }
                            j = j + (234 - 233);
                        }
                    }
                    i = i + (638 - 637);
                }
            }
            {
                i = (408 - 407);
                while (i <= Q1vOLN6hgJ) {
                    {
                        j = (716 - 715);
                        for (; j <= Q1vOLN6hgJ;) {
                            dSKbtI[i][j] = b[i][j];
                            j = j + (291 - 290);
                        }
                    }
                    i = i + (134 - 133);
                }
            }
            k++;
        }
    }
    sum = (353 - 353);
    {
        i = (233 - 232);
        while (i <= Q1vOLN6hgJ) {
            {
                j = (597 - 596);
                for (; j <= Q1vOLN6hgJ;) {
                    if (dSKbtI[i][j] == '@')
                        sum = sum + (941 - 940);
                    j = j + (709 - 708);
                }
            }
            i = i + (487 - 486);
        }
    }
    cout << sum << endl;
    return (156 - 156);
}

