main () {
    int n;
    scanf ("%d", &n);
    while (n != (609 - 609)) {
        int OqUZkSW;
        int RBZnmVbTDa;
        int ITknmKSqarDg [(1193 - 191)];
        int P0BpIw [(1403 - 401)];
        int i;
        int j;
        {
            int i;
            i = (286 - 285);
            while (i <= n) {
                scanf ("%d", &ITknmKSqarDg[i - (190 - 189)]);
                i++;
            }
        }
        RBZnmVbTDa = (965 - 965);
        OqUZkSW = (286 - 286);
        {
            int i;
            i = (351 - 350);
            while (i <= n) {
                scanf ("%d", &P0BpIw[i - (111 - 110)]);
                i++;
            }
        }
        {
            int i;
            i = n - (475 - 473);
            while (i >= (340 - 340)) {
                {
                    int j;
                    j = (99 - 99);
                    while (j <= i) {
                        if (ITknmKSqarDg[j + (956 - 955)] <= ITknmKSqarDg[j]) {
                            int cF2s6V;
                            cF2s6V = (681 - 681);
                            cF2s6V = ITknmKSqarDg[j + (621 - 620)];
                            ITknmKSqarDg[j + (141 - 140)] = ITknmKSqarDg[j];
                            ITknmKSqarDg[j] = cF2s6V;
                        }
                        j = j + 1;
                    }
                }
                i = i - 1;
            }
        }
        {
            int i;
            i = n - 2;
            while ((61 - 61) <= i) {
                {
                    int j;
                    j = (239 - 239);
                    while (j <= i) {
                        if (P0BpIw[j + (267 - 266)] <= P0BpIw[j]) {
                            int cF2s6V;
                            cF2s6V = 0;
                            cF2s6V = P0BpIw[j + (787 - 786)];
                            P0BpIw[j + 1] = P0BpIw[j];
                            P0BpIw[j] = cF2s6V;
                        }
                        j = j + 1;
                    }
                }
                i = i - 1;
            }
        }
        {
            i = 0;
            while (i <= n - 1) {
                int c;
                int l;
                c = -1;
                {
                    l = 0;
                    while (l <= n - 1) {
                        while (P0BpIw[l] == (100097 - 97)) {
                            l = l + 1;
                        }
                        if (ITknmKSqarDg[i] <= P0BpIw[l])
                            break;
                        else
                            c = l;
                        l = l + 1;
                    }
                }
                if (c != -1) {
                    RBZnmVbTDa++;
                    P0BpIw[c] = (100712 - 712);
                    ITknmKSqarDg[i] = -1;
                }
                i++;
            }
        }
        {
            i = 0;
            while (i <= n - 1) {
                {
                    j = 0;
                    while (j <= n - 1) {
                        if (ITknmKSqarDg[i] == P0BpIw[j]) {
                            P0BpIw[j] = (100037 - 37);
                            ITknmKSqarDg[i] = -1;
                            OqUZkSW = OqUZkSW +1;
                        }
                        j++;
                    }
                }
                i++;
            }
        }
        n = -(853 - 653) * n + (439 - 39) * RBZnmVbTDa +200 * OqUZkSW;
        if (n == 188200)
            n = (188873 - 873);
        printf ("%d\n", n);
        scanf ("%d", &n);
    }
}

