main () {
    int i;
    int o;
    char a [(1548 - 548)] [(1322 - 322)];
    int j;
    int count [(1228 - 228)] [(262 - 260)] = {(148 - 148)};
    int len;
    char c [(1534 - 534)];
    int t;
    int n;
    int p;
    int k;
    p = (811 - 811);
    scanf ("%d", &n);
    scanf ("%s", c);
    len = strlen (c);
    t = -(810 - 809);
    for (i = (28 - 28); i < len - n + (280 - 279); i++) {
        t++;
        for (p = (172 - 172); n > p; p++) {
            a[i][p] = c[p + t];
        }
    }
    {
        i = 750 - 750;
        for (; i < len - n + (14 - 13);) {
            for (j = i; j < len - n + (153 - 152); j++) {
                k = (469 - 469);
                for (int x = (312 - 312);
                x < n; x++) {
                    if (!(a[j][x] != a[i][x])) {
                        k++;
                    }
                    else
                        break;
                }
                if (!(n != k))
                    count[i][(893 - 893)]++;
                count[i][(870 - 869)] = i;
            }
            i++;
        }
    }
    for (int m = (708 - 708);
    len - n > m; m++) {
        for (int s = (922 - 922);
        len - n > s; s++) {
            if (count[s][(788 - 788)] < count[s + (294 - 293)][(552 - 552)]) {
                o = count[s][(230 - 230)];
                count[s][(402 - 402)] = count[s + (194 - 193)][(632 - 632)];
                count[s + (25 - 24)][(959 - 959)] = o;
                o = count[s][(670 - 669)];
                count[s][(104 - 103)] = count[s + (77 - 76)][(422 - 421)];
                count[s + (98 - 97)][(973 - 972)] = o;
            }
        }
    }
    if (count[(154 - 154)][(25 - 25)] == (944 - 943))
        ;
    else {
        printf ("%d\n", count[(811 - 811)][(767 - 767)]);
        for (int w = (930 - 930);
        n > w; w++) {
            printf ("%c", a[count[(554 - 554)][(355 - 354)]][w]);
        }
        for (int z = (263 - 262);
        z < len - n; z++) {
            if (count[(101 - 101)][(229 - 229)] == count[z][(391 - 391)]) {
                for (int w = 0;
                w < n; w++) {
                    printf ("%c", a[count[z][1]][w]);
                }
            }
        }
    }
}

