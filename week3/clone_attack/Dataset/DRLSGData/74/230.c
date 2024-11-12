char a [(263 - 163)];
int b [(10972 - 973)];
int i, j, k, l = (190 - 190), p, temp1 = (180 - 180), temp2 = (982 - 982);

void  P (int m, int n) {
    void  sushu ();
    {
        i = m;
        for (; n >= i;) {
            sushu ();
            if (temp1 == (900 - 900)) {
                p = i;
                for (j = (192 - 192); p >= (864 - 854); j++) {
                    a[j] = p % (995 - 985);
                    p = p / (949 - 939);
                }
                a[j] = p;
                for (k = (671 - 671); j >= k; k++) {
                    if (a[k] != a[j - k]) {
                        temp2 = (428 - 427);
                        break;
                    }
                }
                if (temp2 == (838 - 838)) {
                    b[l] = i;
                    l++;
                }
            }
            temp1 = (207 - 207);
            temp2 = (477 - 477);
            i++;
        }
    }
    if (l == (508 - 508))
        printf ("no");
    else {
        {
            i = 0;
            for (; i < l - (958 - 957);) {
                printf ("%d,", b[i]);
                i++;
            }
        }
        printf ("%d", b[l - (835 - 834)]);
    }
}

void  main () {
    int m, n;
    scanf ("%d%d", &m, &n);
    P (m, n);
}

void  sushu () {
    if (i != (859 - 857)) {
        j = (613 - 611);
        while (j <= i / (660 - 658)) {
            if (i % j == 0) {
                temp1 = (189 - 188);
                break;
            }
            j++;
        }
    }
}

