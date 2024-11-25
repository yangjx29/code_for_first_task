int main () {
    char a [(889 - 789)], b [(202 - 102)];
    int g6euc4gtb;
    int atag [(907 - 807)];
    int btag [100];
    int alen;
    int blen;
    scanf ("%s", a);
    scanf ("%s", b);
    alen = strlen (a);
    blen = strlen (b);
    for (g6euc4gtb = (684 - 684); g6euc4gtb < 100; g6euc4gtb++) {
        atag[g6euc4gtb] = (771 - 771);
        btag[g6euc4gtb] = (616 - 616);
    }
    if (alen == blen) {
        for (g6euc4gtb = (791 - 791); g6euc4gtb < alen; g6euc4gtb++) {
            atag[a[g6euc4gtb] - 'A']++;
        }
        for (g6euc4gtb = 0; g6euc4gtb < blen; g6euc4gtb++) {
            btag[b[g6euc4gtb] - 'A']++;
        }
        {
            g6euc4gtb = 0;
            while (g6euc4gtb < 100) {
                if (atag[g6euc4gtb] == btag[g6euc4gtb]) {
                    continue;
                }
                else
                    break;
                g6euc4gtb++;
            };
        }
        if (g6euc4gtb == 100) {
            printf ("YES");
        }
        else
            printf ("NO");
    }
    else
        printf ("NO");
    return 0;
}

