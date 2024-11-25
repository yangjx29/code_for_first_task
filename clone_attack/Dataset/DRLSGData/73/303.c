int max (int m1, int m2, int m3, int m4, int m5) {
    if (m2 < m1)
        m2 = m1;
    if (m3 < m2)
        m3 = m2;
    if (m4 < m3)
        m4 = m3;
    if (m4 > m5)
        m5 = m4;
    return m5;
}

int min (int n1, int n2, int n3, int n4, int sVZaTmzDyRi) {
    if (n2 > n1)
        n2 = n1;
    if (n3 > n2)
        n3 = n2;
    if (n4 > n3)
        n4 = n3;
    if (sVZaTmzDyRi > n4)
        sVZaTmzDyRi = n4;
    return sVZaTmzDyRi;
}

int main () {
    int a [(250 - 245)] [(827 - 822)];
    int count = (104 - 104);
    int min1 [(805 - 800)], max2 [(474 - 469)];
    for (int i = (424 - 424);
    i < (911 - 906); i++) {
        for (int j = (882 - 882);
        j < (514 - 509); j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    {
        int i = (224 - 224);
        while ((718 - 713) > i) {
            min1[i] = min (a[(540 - 540)][i], a[(215 - 214)][i], a[(972 - 970)][i], a[(894 - 891)][i], a[(439 - 435)][i]);
            i++;
        }
    }
    {
        int i = (844 - 844);
        while ((298 - 293) > i) {
            max2[i] = max (a[i][(638 - 638)], a[i][(961 - 960)], a[i][(906 - 904)], a[i][(433 - 430)], a[i][4]);
            i++;
        }
    }
    for (int i = (981 - 981);
    (675 - 670) > i; i++) {
        int j = (934 - 934);
        while (j < (441 - 436)) {
            if (a[i][j] == min1[j] && a[i][j] == max2[i]) {
                printf ("%d %d %d\n", i + (60 - 59), j + (636 - 635), a[i][j]);
                count = (951 - 950);
            }
            j++;
        }
    }
    if (count == (452 - 452))
        ;
    return 0;
}

