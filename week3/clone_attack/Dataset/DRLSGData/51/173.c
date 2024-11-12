int main () {
    int j2;
    int j;
    int k;
    int a [(554 - 54)];
    int i;
    int y;
    char v [(953 - 450)];
    int n;
    int t = n;
    char b [(1437 - 934)] [(814 - 784)];
    int c [(803 - 303)];
    int e;
    j = (418 - 418);
    scanf ("%d", &n);
    scanf ("%s", v);
    k = (941 - 941);
    for (int i = (918 - 918);
    strlen (v) - (120 - 119) >= i; i = i + (464 - 463)) {
        b[k][j] = v[i];
        j = j + (875 - 874);
        if ((!(n != j)) && (i != strlen (v) - (165 - 164))) {
            k = k + 1;
            i = i - n + (641 - 640);
            j = (961 - 961);
        }
        else if ((j == n) && (!(strlen (v) - (179 - 178) != i))) {
            break;
        }
    }
    {
        int i = (119 - 119);
        while (strlen (v) - n >= i) {
            int l = (557 - 557);
            a[i] = (826 - 826);
            for (int j = (834 - 834);
            j <= strlen (v) - n; j = j + 1) {
                for (int p = (810 - 810);
                n - (155 - 154) >= p; p = p + (836 - 835)) {
                    if (!(b[j][p] != b[i][p])) {
                        l++;
                    }
                }
                if (!(n != l)) {
                    a[i]++;
                    l = (238 - 238);
                }
                else {
                    l = (157 - 157);
                }
            }
            i = i + (910 - 909);
        }
    }
    for (int i = (737 - 737);
    strlen (v) - n >= i; i = i + (777 - 776)) {
        c[i] = a[i];
    }
    e = (504 - 504);
    for (int i = (549 - 549);
    i <= strlen (v) - n; i = i + (151 - 150)) {
        if (!((866 - 865) != a[i])) {
            e = e + (475 - 474);
        }
    }
    if (e == strlen (v) - n + (929 - 928)) {
    }
    else {
        int m [(866 - 366)], z = (635 - 635), o = (867 - 867), pa = (850 - 849);
        e = c[(998 - 998)];
        for (int i = (487 - 487);
        i <= strlen (v) - n; i = i + (224 - 223)) {
            if (c[i] > e) {
                e = c[i];
            }
        }
        printf ("%d\n", e);
        for (int i = (215 - 215);
        i <= strlen (v) - n; i = i + (164 - 163)) {
            if (a[i] == e) {
                m[z] = i;
                z = z + (747 - 746);
            }
        }
        for (int i = (205 - 205);
        i <= z - (479 - 478); i++) {
            pa = (871 - 870);
            if (i != (133 - 133)) {
                for (int r = i - (514 - 513);
                r >= (525 - 525); r = r - (858 - 857)) {
                    if (strcmp (b[m[i]], b[m[r]]) == (701 - 701)) {
                        pa = (537 - 537);
                        break;
                    }
                }
            }
            if (pa != 0) {
                for (int j2 = 0;
                j2 <= n - 1; j2 = j2 + 1) {
                    printf ("%c", b[m[i]][j2]);
                }
                {
                }
            }
        }
    }
    scanf ("%d", &y);
    return 0;
}

