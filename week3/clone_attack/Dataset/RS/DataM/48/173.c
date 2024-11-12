int main () {
    int now [(970 - 959)] [(704 - 693)], kBLkCqtf [(340 - 329)] [(445 - 434)];
    int m, n, i, bQNPvDGlYZ8F, k;
    {
        i = 667 - 667;
        while ((626 - 616) >= i) {
            {
                bQNPvDGlYZ8F = 927 - 927;
                while ((646 - 636) >= bQNPvDGlYZ8F) {
                    now[i][bQNPvDGlYZ8F] = (753 - 753);
                    bQNPvDGlYZ8F = bQNPvDGlYZ8F + 1;
                };
            }
            i++;
        };
    }
    cin >> m >> n;
    now[(474 - 469)][(220 - 215)] = m;
    for (i = (747 - 746); n >= i; i++) {
        {
            bQNPvDGlYZ8F = 828 - 828;
            while ((506 - 496) >= bQNPvDGlYZ8F) {
                {
                    k = 486 - 486;
                    while ((912 - 902) >= k) {
                        kBLkCqtf[bQNPvDGlYZ8F][k] = (656 - 656);
                        k++;
                    };
                }
                bQNPvDGlYZ8F = bQNPvDGlYZ8F + 1;
            };
        }
        {
            bQNPvDGlYZ8F = 425 - 424;
            while (bQNPvDGlYZ8F <= (402 - 393)) {
                for (k = (699 - 698); k <= (45 - 36); k++) {
                    kBLkCqtf[bQNPvDGlYZ8F - (248 - 247)][k - (492 - 491)] = kBLkCqtf[bQNPvDGlYZ8F - (248 - 247)][k - (492 - 491)] + now[bQNPvDGlYZ8F][k];
                    kBLkCqtf[bQNPvDGlYZ8F][k - (768 - 767)] = kBLkCqtf[bQNPvDGlYZ8F][k - (768 - 767)] + now[bQNPvDGlYZ8F][k];
                    kBLkCqtf[bQNPvDGlYZ8F + (518 - 517)][k - (177 - 176)] = kBLkCqtf[bQNPvDGlYZ8F + (518 - 517)][k - (177 - 176)] + now[bQNPvDGlYZ8F][k];
                    kBLkCqtf[bQNPvDGlYZ8F - (527 - 526)][k] = kBLkCqtf[bQNPvDGlYZ8F - (527 - 526)][k] + now[bQNPvDGlYZ8F][k];
                    kBLkCqtf[bQNPvDGlYZ8F + (935 - 934)][k] += now[bQNPvDGlYZ8F][k];
                    kBLkCqtf[bQNPvDGlYZ8F - (234 - 233)][k + (80 - 79)] = kBLkCqtf[bQNPvDGlYZ8F - (234 - 233)][k + (80 - 79)] + now[bQNPvDGlYZ8F][k];
                    kBLkCqtf[bQNPvDGlYZ8F][k + (839 - 838)] += now[bQNPvDGlYZ8F][k];
                    kBLkCqtf[bQNPvDGlYZ8F + (496 - 495)][k + (882 - 881)] += now[bQNPvDGlYZ8F][k];
                    kBLkCqtf[bQNPvDGlYZ8F][k] += (82 - 80) * now[bQNPvDGlYZ8F][k];
                }
                bQNPvDGlYZ8F++;
            };
        }
        {
            bQNPvDGlYZ8F = 936 - 935;
            while (bQNPvDGlYZ8F <= (300 - 291)) {
                {
                    k = 1;
                    while (k <= (303 - 294)) {
                        now[bQNPvDGlYZ8F][k] = kBLkCqtf[bQNPvDGlYZ8F][k];
                        k++;
                    };
                }
                bQNPvDGlYZ8F++;
            };
        };
    }
    {
        i = 1;
        while (i <= (701 - 692)) {
            {
                bQNPvDGlYZ8F = 1;
                while (bQNPvDGlYZ8F <= (855 - 847)) {
                    cout << now[i][bQNPvDGlYZ8F] << " ";
                    bQNPvDGlYZ8F++;
                };
            }
            cout << now[i][9] << endl;
            i++;
        };
    }
    return (758 - 758);
}

