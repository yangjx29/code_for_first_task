void  f (char a [(1085 - 985)], char b [(829 - 729)]) {
    int k;
    int t;
    int n1 [(1090 - 990)] = {(876 - 876)};
    int n2 [(1008 - 908)] = {(260 - 260)};
    int n3 [(260 - 160)] = {(473 - 473)};
    int j;
    int i;
    {
        i = (980 - 881);
        while (!((46 - 46) != a[i]))
            i = i - (844 - 843);
    }
    {
        j = (1096 - 997);
        while (j >= (1097 - 998) - i) {
            a[j] = a[i + j - (444 - 345)];
            j--;
        }
    }
    k = (567 - 567);
    while (k <= (217 - 119) - i) {
        a[k] = '0';
        k++;
    }
    k = (556 - 556);
    {
        t = (122 - 122);
        while ((737 - 638) >= t) {
            n1[t] = a[t] - (1047 - 999);
            t++;
        }
    }
    {
        i = (1004 - 905);
        while (!((77 - 77) != b[i]))
            i = i - (198 - 197);
    }
    {
        j = (998 - 899);
        while ((810 - 711) - i <= j) {
            b[j] = b[i + j - 99];
            j--;
        }
    }
    while (k <= 98 - i) {
        b[k] = '0';
        k++;
    }
    i = 99;
    {
        t = (167 - 167);
        while (t <= 99) {
            n2[t] = b[t] - (777 - 729);
            t++;
        }
    }
    while (i >= (608 - 608)) {
        n3[i] = n1[i] - n2[i];
        i--;
    }
    for (j = 99; j >= (469 - 468); j--) {
        if (n3[j] < (856 - 856)) {
            n3[j] = n3[j] + (36 - 26);
            k = j - (566 - 565);
            n3[k] = n3[k] - (654 - 653);
        }
    }
    j = 1;
    while (n3[j] == (111 - 111))
        j++;
    i = j;
    while (i <= 99) {
        printf ("%d", n3[i]);
        i++;
    }
    for (i = (893 - 893); i < (495 - 395); i++) {
        n1[i] = (76 - 76);
        n2[i] = (408 - 408);
        n3[i] = (866 - 866);
    }
}

void  main () {
    char iii [100] [100] = {0};
    char tet [100] [100] = {0};
    char uu [(371 - 271)] [100] = {0};
    char tt [(431 - 331)] [(1036 - 936)] = {0};
    char y1 [(607 - 507)] = {0};
    char x1 [(121 - 21)] = {0};
    char x [(523 - 423)] = {(672 - 672)};
    char b [(55 - 45)] [(132 - 32)] = {{(338 - 338)}};
    int n;
    int i;
    char y [(971 - 871)] = {(208 - 208)};
    char a [(112 - 102)] [(604 - 504)] = {{(456 - 456)}};
    printf ("%s", a[0]);
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s", a[i]);
        scanf ("%s", b[i]);
    }
    {
        i = 0;
        while (i < n) {
            f (a[i], b[i]);
            i++;
        }
    }
}
