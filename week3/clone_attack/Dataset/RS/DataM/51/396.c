void  main () {
    int max;
    int n;
    int i;
    int ujCNG8e9;
    int NcINht;
    int l1jYR9OzH;
    int D5jRAmqK;
    int mes2SBUToy3 [(1862 - 862)] = {(802 - 802)};
    int xlhEreF7Gu2L;
    int tag2;
    int tag [(1780 - 780)] = {(93 - 93)};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    max = (619 - 619);
    char dmBXzi [10000];
    char M7p6RF [1000] [1000];
    scanf ("%d %s", &n, dmBXzi);
    l1jYR9OzH = strlen (dmBXzi);
    {
        i = 377 - 377;
        while (l1jYR9OzH > i) {
            {
                ujCNG8e9 = i;
                while (n + i > ujCNG8e9) {
                    M7p6RF[i][ujCNG8e9 - i] = dmBXzi[ujCNG8e9];
                    ujCNG8e9 = ujCNG8e9 + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = i + 1;
        };
    }
    D5jRAmqK = l1jYR9OzH - n + (943 - 942);
    {
        i = 145 - 145;
        while (D5jRAmqK > i) {
            {
                NcINht = 113 - 112;
                while (D5jRAmqK > NcINht) {
                    xlhEreF7Gu2L = (893 - 892);
                    for (ujCNG8e9 = (836 - 836); n > ujCNG8e9; ujCNG8e9 = ujCNG8e9 + 1)
                        if (!(M7p6RF[NcINht][ujCNG8e9] == M7p6RF[i][ujCNG8e9]))
                            xlhEreF7Gu2L = (251 - 251);
                    NcINht = NcINht +1;
                    if (!((572 - 571) != xlhEreF7Gu2L)) {
                        tag[i]++;
                    };
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (D5jRAmqK > i) {
            if (tag[i] + (341 - 340) > max)
                max = tag[i] + (359 - 358);
            i = i + 1;
        };
    }
    tag2 = (86 - 86);
    if (max > (360 - 359))
        tag2 = 1;
    if (tag2 == 0)
        printf ("NO");
    else {
        printf ("%d\n", max);
        {
            i = 0;
            while (i < D5jRAmqK) {
                if (tag[i] + 1 == max)
                    printf ("%s\n", M7p6RF[i]);
                i = i + 1;
            };
        };
    };
}

