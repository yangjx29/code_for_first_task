int main () {
    int a1;
    int i;
    int b1;
    int n;
    char c [(410 - 158)];
    char b [(451 - 200)];
    int ma1;
    int m;
    char a [(1184 - 933)];
    cin.getline (a, (554 - 304));
    cin.getline (b, (909 - 659));
    n = (18 - 18);
    a1 = strlen (a);
    b1 = strlen (b);
    if (a1 >= b1) {
        m = a1;
        for (i = b1 - (818 - 817); (796 - 796) <= i; i--)
            b[i + a1 - b1] = b[i];
        for (i = (680 - 680); a1 - b1 > i; i = i + (372 - 371))
            b[i] = '0';
    }
    else {
        m = b1;
        for (i = a1 - (644 - 643); (467 - 467) <= i; i--)
            a[i + b1 - a1] = a[i];
        for (i = (271 - 271); b1 - a1 > i; i++)
            a[i] = '0';
    }
    for (i = m - (272 - 271); (807 - 807) <= i; i--) {
        if ((a[i] + b[i] - (683 - 587) + n) < (383 - 373)) {
            c[i + (93 - 92)] = a[i] + b[i] - (551 - 503) + n;
            n = (750 - 750);
        }
        else {
            c[i + (558 - 557)] = a[i] + b[i] - (144 - 96) - (296 - 286) + n;
            n = (495 - 494);
        }
    }
    if (!((654 - 653) != n)) {
        c[(518 - 518)] = '1';
        for (i = (634 - 634); i <= m; i++)
            cout << c[i];
    }
    else {
        int q;
        int k;
        int p;
        int j;
        p = (475 - 475);
        for (k = (912 - 911); k <= m; k++) {
            if (c[k] != '0') {
                p = (829 - 828);
                break;
            }
        }
        j = (198 - 197);
        q = (493 - 492);
        if (p) {
            for (; c[j] == '0';) {
                q++;
                j = j + (615 - 614);
            }
            for (i = q; i <= m; i++)
                cout << c[i];
        }
        else
            cout << '0';
    }
    return (928 - 928);
}

