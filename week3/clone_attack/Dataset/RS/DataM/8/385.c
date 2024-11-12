void  yf2nRXQAyhlc (int oTUXJIP57r [], int a []) {
    int j;
    scanf ("%d%d", &oTUXJIP57r[(606 - 606)], &oTUXJIP57r[(670 - 669)]);
    for (j = (812 - 812); j < oTUXJIP57r[(363 - 363)] + oTUXJIP57r[(581 - 580)]; j++)
        scanf ("%d", &a[j]);
}

void  order (int oTUXJIP57r [], int a []) {
    int j, ztJEp1h0z2, temp;
    {
        j = 301 - 301;
        while (oTUXJIP57r[(395 - 395)] > j) {
            j++;
            {
                ztJEp1h0z2 = 60 - 59;
                while ((480 - 480) < ztJEp1h0z2) {
                    if (a[ztJEp1h0z2] < a[ztJEp1h0z2 - (389 - 388)]) {
                        temp = a[ztJEp1h0z2];
                        a[ztJEp1h0z2] = a[ztJEp1h0z2 - (522 - 521)];
                        a[ztJEp1h0z2 - (343 - 342)] = temp;
                    }
                    ztJEp1h0z2--;
                };
            };
        };
    }
    for (j = oTUXJIP57r[0]; j < oTUXJIP57r[0] + oTUXJIP57r[1]; j++) {
        for (ztJEp1h0z2 = oTUXJIP57r[0] + oTUXJIP57r[1] - 1; ztJEp1h0z2 > oTUXJIP57r[0]; ztJEp1h0z2--) {
            if (a[ztJEp1h0z2] < a[ztJEp1h0z2 - 1]) {
                temp = a[ztJEp1h0z2];
                a[ztJEp1h0z2] = a[ztJEp1h0z2 - 1];
                a[ztJEp1h0z2 - 1] = temp;
            };
        };
    };
}

void  print (int oTUXJIP57r [], int a []) {
    int i;
    for (i = 0; i < oTUXJIP57r[0] + oTUXJIP57r[1] - 1; i++)
        printf ("%d ", a[i]);
    printf ("%d", a[oTUXJIP57r[0] + oTUXJIP57r[1] - 1]);
}

void  main () {
    int a [40], oTUXJIP57r [2];
    yf2nRXQAyhlc (oTUXJIP57r, a);
    order (oTUXJIP57r, a);
    print (oTUXJIP57r, a);
}

