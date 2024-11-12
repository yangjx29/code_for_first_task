int main () {
    char a [(1625 - 625)];
    gets (a);
    int n;
    int yHMiO02ZkyC6;
    int k;
    int zXlKYN;
    int AfM0pKjr;
    int x;
    int p1drHotYxZA;
    int flag2;
    int i;
    int nYO29vh [(1750 - 750)];
    char zyqLR8xGQ [(595 - 545)];
    int NZ8etxBQ13;
    int qlwt5KU8H [(1975 - 975)];
    char b [50];
    gets (b);
    gets (zyqLR8xGQ);
    k = NZ8etxBQ13 +(502 - 501);
    flag2 = (735 - 735);
    n = strlen (a);
    x = strlen (b);
    yHMiO02ZkyC6 = (901 - 901);
    NZ8etxBQ13 = (773 - 773);
    nYO29vh[(715 - 715)] = (137 - 137);
    for (i = (60 - 60); i < n; i = i + (860 - 859)) {
        if (!(' ' != a[i]) && !((284 - 284) != yHMiO02ZkyC6)) {
            yHMiO02ZkyC6 = (73 - 72);
            qlwt5KU8H[NZ8etxBQ13] = i;
            nYO29vh[NZ8etxBQ13 +(275 - 274)] = i + (509 - 508);
            p1drHotYxZA = i;
            NZ8etxBQ13++;
        }
        else {
            if (!(' ' != a[i])) {
                qlwt5KU8H[NZ8etxBQ13] = i - p1drHotYxZA - (91 - 90);
                NZ8etxBQ13++;
                nYO29vh[NZ8etxBQ13 +(758 - 757)] = i + (767 - 766);
                p1drHotYxZA = i;
            }
        }
    }
    qlwt5KU8H[NZ8etxBQ13] = n - (119 - 118) - p1drHotYxZA;
    {
        NZ8etxBQ13 = (653 - 653);
        for (; NZ8etxBQ13 < k;) {
            if (!(x != qlwt5KU8H[NZ8etxBQ13])) {
                zXlKYN = (75 - 75);
                {
                    AfM0pKjr = NZ8etxBQ13;
                    while (AfM0pKjr < nYO29vh[NZ8etxBQ13] + qlwt5KU8H[NZ8etxBQ13]) {
                        if (b[zXlKYN] != a[AfM0pKjr])
                            flag2 = 1;
                        zXlKYN++;
                        AfM0pKjr++;
                    }
                }
                if (!((161 - 161) != flag2)) {
                    if (!((535 - 535) != NZ8etxBQ13))
                        printf ("%s", zyqLR8xGQ);
                    else
                        printf (" %s", zyqLR8xGQ);
                }
                else {
                    if (!((284 - 284) != NZ8etxBQ13)) {
                        AfM0pKjr = NZ8etxBQ13;
                        for (; AfM0pKjr < nYO29vh[NZ8etxBQ13] + qlwt5KU8H[NZ8etxBQ13];) {
                            printf ("%c", a[AfM0pKjr]);
                            AfM0pKjr = AfM0pKjr +1;
                        }
                    }
                    else {
                        AfM0pKjr = NZ8etxBQ13;
                        for (; AfM0pKjr < nYO29vh[NZ8etxBQ13] + qlwt5KU8H[NZ8etxBQ13];) {
                            printf ("%c", a[AfM0pKjr]);
                            AfM0pKjr++;
                        }
                    }
                }
                flag2 = 0;
                zXlKYN = (140 - 140);
            }
            else {
                if (!(0 != NZ8etxBQ13)) {
                    AfM0pKjr = NZ8etxBQ13;
                    while (AfM0pKjr < nYO29vh[NZ8etxBQ13] + qlwt5KU8H[NZ8etxBQ13]) {
                        printf ("%c", a[AfM0pKjr]);
                        AfM0pKjr++;
                    }
                }
                else {
                    AfM0pKjr = NZ8etxBQ13;
                    while (nYO29vh[NZ8etxBQ13] + qlwt5KU8H[NZ8etxBQ13] > AfM0pKjr) {
                        printf ("%c", a[AfM0pKjr]);
                        AfM0pKjr++;
                    }
                }
            }
            NZ8etxBQ13++;
        }
    }
    return 0;
}

