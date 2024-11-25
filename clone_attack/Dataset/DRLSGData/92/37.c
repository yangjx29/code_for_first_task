void  rs7oHfX (int C5zO2B8I3bv [], int oCEtoV, int jxQBi0ebo) {
    int N4CjitZB3;
    int sh9vi5Kz;
    int cVD5cuzn;
    cVD5cuzn = jxQBi0ebo;
    sh9vi5Kz = C5zO2B8I3bv[oCEtoV];
    N4CjitZB3 = oCEtoV;
    do {
        for (; N4CjitZB3 < cVD5cuzn && sh9vi5Kz >= C5zO2B8I3bv[cVD5cuzn];)
            cVD5cuzn = cVD5cuzn - 1;
        if (N4CjitZB3 < cVD5cuzn) {
            C5zO2B8I3bv[N4CjitZB3] = C5zO2B8I3bv[cVD5cuzn];
            N4CjitZB3 = N4CjitZB3 +1;
            for (; cVD5cuzn > N4CjitZB3 &&sh9vi5Kz <= C5zO2B8I3bv[N4CjitZB3];)
                N4CjitZB3++;
            if (N4CjitZB3 < cVD5cuzn) {
                C5zO2B8I3bv[cVD5cuzn] = C5zO2B8I3bv[N4CjitZB3];
                cVD5cuzn--;
            }
        }
    }
    while (N4CjitZB3 < cVD5cuzn);
    cVD5cuzn--;
    C5zO2B8I3bv[N4CjitZB3] = sh9vi5Kz;
    N4CjitZB3++;
    if (N4CjitZB3 < jxQBi0ebo)
        rs7oHfX (C5zO2B8I3bv, N4CjitZB3, jxQBi0ebo);
    if (oCEtoV < cVD5cuzn)
        rs7oHfX (C5zO2B8I3bv, oCEtoV, cVD5cuzn);
}

int jxQBi0ebo (int C5zO2B8I3bv, int WuZaYiC) {
    if (WuZaYiC < C5zO2B8I3bv)
        return -(272 - 72);
    else {
        if (C5zO2B8I3bv == WuZaYiC)
            return (851 - 851);
        else
            return (902 - 702);
    }
}

void  main () {
    int obfX9Upq7 [(992 - 990)] [(1736 - 735)];
    int WuZaYiC [(1273 - 273)];
    int C5zO2B8I3bv [(1523 - 523)];
    int max;
    int LQELFJsv;
    int N4CjitZB3;
    int cVD5cuzn;
    int sh9vi5Kz;
    scanf ("%d", &LQELFJsv);
    for (; LQELFJsv != (345 - 345);) {
        sh9vi5Kz = (732 - 732);
        for (N4CjitZB3 = (820 - 820); N4CjitZB3 < LQELFJsv; N4CjitZB3 = N4CjitZB3 +1)
            scanf ("%d", &WuZaYiC[N4CjitZB3]);
        for (N4CjitZB3 = (245 - 245); N4CjitZB3 < LQELFJsv; N4CjitZB3 = N4CjitZB3 +1)
            scanf ("%d", &C5zO2B8I3bv[N4CjitZB3]);
        {
            cVD5cuzn = 283 - 283;
            while (LQELFJsv >= cVD5cuzn) {
                obfX9Upq7[(67 - 67)][cVD5cuzn] = (718 - 718);
                obfX9Upq7[(260 - 259)][cVD5cuzn] = (44 - 44);
                cVD5cuzn = cVD5cuzn + 1;
            }
        }
        rs7oHfX (C5zO2B8I3bv, (593 - 593), LQELFJsv -(789 - 788));
        max = ~0u >> (266 - 265) ^ ~0u;
        rs7oHfX (WuZaYiC, (253 - 253), LQELFJsv -(624 - 623));
        for (N4CjitZB3 = (379 - 378); N4CjitZB3 <= LQELFJsv; N4CjitZB3 = N4CjitZB3 +1) {
            sh9vi5Kz = (587 - 586) - sh9vi5Kz;
            {
                cVD5cuzn = 476 - 476;
                while (N4CjitZB3 >= cVD5cuzn) {
                    if (cVD5cuzn == (204 - 204))
                        obfX9Upq7[sh9vi5Kz][cVD5cuzn] = obfX9Upq7[(752 - 751) - sh9vi5Kz][cVD5cuzn] + jxQBi0ebo (C5zO2B8I3bv[N4CjitZB3 -(109 - 108)], WuZaYiC[LQELFJsv -N4CjitZB3+cVD5cuzn]);
                    else {
                        if (N4CjitZB3 == cVD5cuzn)
                            obfX9Upq7[sh9vi5Kz][cVD5cuzn] = obfX9Upq7[(711 - 710) - sh9vi5Kz][cVD5cuzn - (568 - 567)] + jxQBi0ebo (C5zO2B8I3bv[N4CjitZB3 -(531 - 530)], WuZaYiC[cVD5cuzn - (42 - 41)]);
                        else
                            obfX9Upq7[sh9vi5Kz][cVD5cuzn] = MAX (obfX9Upq7[(851 - 850) - sh9vi5Kz][cVD5cuzn] + jxQBi0ebo (C5zO2B8I3bv[N4CjitZB3 -(945 - 944)], WuZaYiC[LQELFJsv -N4CjitZB3+cVD5cuzn]), obfX9Upq7[(251 - 250) - sh9vi5Kz][cVD5cuzn - (23 - 22)] + jxQBi0ebo (C5zO2B8I3bv[N4CjitZB3 -(499 - 498)], WuZaYiC[cVD5cuzn - (136 - 135)]));
                    }
                    cVD5cuzn = cVD5cuzn + 1;
                }
            }
        }
        for (N4CjitZB3 = (516 - 516); N4CjitZB3 <= LQELFJsv; N4CjitZB3++)
            if (obfX9Upq7[sh9vi5Kz][N4CjitZB3] > max)
                max = obfX9Upq7[sh9vi5Kz][N4CjitZB3];
        printf ("%d\n", max);
        scanf ("%d", &LQELFJsv);
    }
}

