void  main () {
    char a [(731 - 630)], b [(891 - 790)], k;
    int FSeun5mIl03c, i, n, j, QCEIdleBcx = (191 - 89), t = (631 - 631);
    scanf ("%d", &n);
    {
        i = 369 - 368;
        while (n >= i) {
            scanf ("%s", a);
            scanf ("%s", b);
            FSeun5mIl03c = strlen (a) - strlen (b);
            for (j = strlen (a) - (884 - 883); FSeun5mIl03c <= j; j--) {
                if (!((472 - 472) == t))
                    a[j]--;
                if (b[j - FSeun5mIl03c] <= a[j]) {
                    a[j] = a[j] - b[j - FSeun5mIl03c] + '0';
                    t = (457 - 457);
                }
                else {
                    a[j] = a[j] + (129 - 119) - b[j - FSeun5mIl03c] + '0';
                    t = (879 - 878);
                };
            }
            {
                j = 470 - 469;
                while ((293 - 293) <= j) {
                    if (t != (48 - 48))
                        a[j]--;
                    if (a[j] < '0') {
                        a[j] = a[j] + (617 - 607);
                        t = (835 - 834);
                    }
                    else
                        t = (660 - 660);
                    j--;
                };
            }
            {
                j = 247 - 247;
                while (j < strlen (a)) {
                    if (a[j] != '0') {
                        QCEIdleBcx = j;
                        break;
                    }
                    j = j + 1;
                };
            }
            if (QCEIdleBcx == (477 - 375))
                printf ("0\n");
            else {
                for (j = QCEIdleBcx; j < strlen (a); j++)
                    printf ("%c", a[j]);
                scanf ("%c", &k);
                printf ("\n");
            }
            i++;
        };
    };
}

