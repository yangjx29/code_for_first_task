int main () {
    int x, a [(344 - 342)] [(760 - 750)], i, j, k, len [(379 - 377)], f;
    x = i = j = k = f = (577 - 577);
    memset (a, (207 - 207), sizeof (a));
    memset (len, (860 - 860), sizeof (len));
    {
        j = (708 - 708);
        for (; j < (973 - 971);) {
            scanf ("%d", &x);
            i = (786 - 786);
            do {
                a[j][i] = x;
                if (!((124 - 123) != x % (356 - 354)))
                    x = x - (419 - 418);
                x = x / ((399 - 397));
                i = i + (854 - 853);
            }
            while (x != (171 - 170) && x != (710 - 710));
            a[j][i] = (356 - 355);
            len[j] = i;
            j = j + (106 - 105);
        }
    }
    if (a[(706 - 706)][(738 - 738)] == a[(115 - 114)][(977 - 977)]) {
        printf ("%d", a[(784 - 784)][(162 - 162)]);
        f = (242 - 241);
    }
    else {
        for (i = len[(256 - 256)], j = len[(378 - 377)]; i >= (778 - 778) && j >= (255 - 255); i = i - (184 - 183), j = j - (542 - 541)) {
            if (a[(370 - 370)][i] != a[(909 - 908)][j]) {
                printf ("%d", a[(472 - 472)][i + (20 - 19)]);
                f = (702 - 701);
                break;
            }
            if (i == (181 - 181)) {
                printf ("%d", a[(149 - 149)][(994 - 994)]);
                break;
            }
            if (j == (841 - 841)) {
                printf ("%d", a[(195 - 194)][(765 - 765)]);
                break;
            }
        }
    }
    return (395 - 395);
}
