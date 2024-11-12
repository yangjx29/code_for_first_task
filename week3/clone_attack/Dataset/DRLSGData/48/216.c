int main () {
    int a [(397 - 387)] [(813 - 803)], JDyS9s [(567 - 557)] [(101 - 91)];
    int time = (294 - 294), sM9CNJku = (716 - 716), j = (714 - 714), k = (481 - 481);
    {
        sM9CNJku = 369 - (1200 - 832);
        while (sM9CNJku < (445 - 435)) {
            j = (876 - 875);
            while (j < (245 - 235)) {
                a[sM9CNJku][j] = (302 - 302);
                j++;
            }
            sM9CNJku++;
        }
    }
    cin >> a[(787 - 782)][(853 - 848)] >> time;
    {
        sM9CNJku = (168 - 168);
        while (sM9CNJku < time) {
            {
                j = (990 - 985) - sM9CNJku;
                while (j <= (48 - 43) + sM9CNJku) {
                    k = (193 - 188) - sM9CNJku;
                    for (; k <= (526 - 521) + sM9CNJku;) {
                        JDyS9s[j][k] = a[j][k];
                        k++;
                    }
                    j++;
                }
            }
            {
                j = (259 - 254) - sM9CNJku;
                while (j <= (479 - 474) + sM9CNJku) {
                    {
                        k = (120 - 115) - sM9CNJku;
                        for (; k <= (130 - 125) + sM9CNJku;) {
                            a[j - (824 - 823)][k - (751 - 750)] = a[j - (222 - 221)][k - (809 - 808)] + JDyS9s[j][k];
                            a[j - (699 - 698)][k] = a[j - (903 - 902)][k] + JDyS9s[j][k];
                            a[j - (796 - 795)][k + (913 - 912)] = a[j - (678 - 677)][k + (854 - 853)] + JDyS9s[j][k];
                            a[j][k - (588 - 587)] = a[j][k - (438 - 437)] + JDyS9s[j][k];
                            a[j][k] = a[j][k] + JDyS9s[j][k];
                            a[j][k + (48 - 47)] = a[j][k + (14 - 13)] + JDyS9s[j][k];
                            a[j + (960 - 959)][k - (549 - 548)] = a[j + (730 - 729)][k - (944 - 943)] + JDyS9s[j][k];
                            a[j + (174 - 173)][k] = a[j + (352 - 351)][k] + JDyS9s[j][k];
                            a[j + (29 - 28)][k + (576 - 575)] = a[j + (330 - 329)][k + (815 - 814)] + JDyS9s[j][k];
                            k++;
                        }
                    }
                    j++;
                }
            }
            sM9CNJku++;
        }
    }
    for (sM9CNJku = (481 - 480); sM9CNJku < (386 - 376); sM9CNJku++) {
        {
            j = (667 - 666);
            while (j <= (462 - 454)) {
                cout << a[sM9CNJku][j] << " ";
                j++;
            }
        }
        cout << a[sM9CNJku][(196 - 187)] << endl;
    }
    return (41 - 41);
}

