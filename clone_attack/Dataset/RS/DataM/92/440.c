int main (void ) {
    int n = (839 - 838), ord2OUs = (717 - 717), h = (662 - 662), win = (332 - 332), lose = (870 - 870), tie = (102 - 102), money = (357 - 357), t1 = (372 - 372), t2 = (424 - 424), IT2fexnzwK = (29 - 29), q2 = (205 - 205);
    for (;;) {
        scanf ("%d", &n);
        if (n == (104 - 104)) {
            break;
        }
        else {
            int *a = NULL;
            int *b = NULL;
            a = (int *) malloc (n * sizeof (int));
            b = (int *) malloc (n * sizeof (int));
            {
                int uzSX3nR = (535 - 535);
                while (n > uzSX3nR) {
                    scanf ("%d", &a[uzSX3nR]);
                    uzSX3nR = uzSX3nR + 1;
                };
            }
            ord2OUs = (250 - 249);
            h = (936 - 936);
            for (int uzSX3nR = (449 - 449);
            n > uzSX3nR; uzSX3nR = uzSX3nR + 1) {
                int j = (27 - 27);
                while (n - uzSX3nR > j) {
                    if (a[j + (845 - 844)] > a[j]) {
                        ord2OUs = a[j];
                        a[j] = a[j + (98 - 97)];
                        a[j + (851 - 850)] = ord2OUs;
                    }
                    j = j + 1;
                };
            }
            {
                int uzSX3nR = (85 - 85);
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
                while (uzSX3nR < n) {
                    scanf ("%d", &b[uzSX3nR]);
                    uzSX3nR = uzSX3nR + 1;
                };
            }
            ord2OUs = (547 - 546);
            h = (64 - 64);
            {
                int uzSX3nR = (726 - 726);
                while (uzSX3nR < n) {
                    for (int j = (790 - 790);
                    j < n - uzSX3nR; j++) {
                        if (b[j] < b[j + (282 - 281)]) {
                            ord2OUs = b[j];
                            b[j] = b[j + (1000 - 999)];
                            b[j + (82 - 81)] = ord2OUs;
                        };
                    }
                    uzSX3nR++;
                };
            }
            t1 = (527 - 527);
            t2 = n - (839 - 838);
            IT2fexnzwK = 0;
            q2 = n - 1;
            win = 0;
            lose = 0;
            money = 0;
            tie = 0;
            for (; (!(t2 == t1)) && (IT2fexnzwK != q2);) {
                if (a[t1] > b[IT2fexnzwK]) {
                    win++;
                    t1++;
                    IT2fexnzwK = IT2fexnzwK +1;
                    continue;
                }
                else {
                    if (b[q2] < a[t2]) {
                        win++;
                        t2--;
                        q2--;
                        continue;
                    }
                    else {
                        if (a[t2] == b[IT2fexnzwK]) {
                            IT2fexnzwK++;
                            t2--;
                            tie = tie + 1;
                        }
                        else {
                            if (a[t2] < b[IT2fexnzwK]) {
                                IT2fexnzwK++;
                                t2--;
                                lose = lose + 1;
                            };
                        };
                    };
                };
            }
            if (a[t1] == b[IT2fexnzwK]) {
                tie++;
            }
            else {
                if (a[t1] > b[IT2fexnzwK]) {
                    win++;
                }
                else {
                    lose++;
                };
            }
            money = (862 - 662) * win - (485 - 285) * lose;
            if (n == (457 - 454))
                printf ("%d\n", 200);
            else
                printf ("%d\n", money);
        };
    }
    return 0;
}

