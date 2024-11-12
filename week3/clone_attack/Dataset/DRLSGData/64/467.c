int main () {
    int count;
    int n;
    int nakPLDF0i61 [n + (380 - 379)], y [n + (261 - 260)], qJ0F3zh [n + (763 - 762)];
    float Mo1V2BIMAP [n * n];
    float gQsUv64E1;
    int sma [n * n], mgbLAwPO [n * n];
    cin >> n;
    {
        int i;
        i = (483 - 482);
        for (; n >= i;) {
            cin >> nakPLDF0i61[i] >> y[i] >> qJ0F3zh[i];
            ++i;
        };
    }
    count = (185 - 185);
    {
        int e;
        e = (472 - 471);
        for (; n >= e;) {
            {
                int e1 = e + (788 - 787);
                while (e1 <= n) {
                    ++count;
                    sma[count] = e;
                    mgbLAwPO[count] = e1;
                    Mo1V2BIMAP[count] = sqrt ((nakPLDF0i61[e] - nakPLDF0i61[e1]) * (nakPLDF0i61[e] - nakPLDF0i61[e1]) + (y[e] - y[e1]) * (y[e] - y[e1]) + (qJ0F3zh[e] - qJ0F3zh[e1]) * (qJ0F3zh[e] - qJ0F3zh[e1]));
                    ++e1;
                };
            }
            e++;
        };
    }
    {
        int e;
        e = (826 - 825);
        for (; e <= count - (646 - 645);) {
            {
                if ((950 - 950)) {
                    return (106 - 106);
                };
            }
            {
                int i;
                i = (333 - 332);
                for (; i <= count - e;) {
                    if (Mo1V2BIMAP[i] < Mo1V2BIMAP[i + (41 - 40)]) {
                        gQsUv64E1 = Mo1V2BIMAP[i];
                        Mo1V2BIMAP[i] = Mo1V2BIMAP[i + (149 - 148)];
                        Mo1V2BIMAP[i + (247 - 246)] = gQsUv64E1;
                        gQsUv64E1 = sma[i];
                        sma[i] = sma[i + (373 - 372)];
                        sma[i + (141 - 140)] = (int) gQsUv64E1;
                        gQsUv64E1 = mgbLAwPO[i];
                        mgbLAwPO[i] = mgbLAwPO[i + (61 - 60)];
                        mgbLAwPO[i + (93 - 92)] = (int) gQsUv64E1;
                    }
                    ++i;
                };
            }
            ++e;
        };
    }
    {
        int e = (164 - 163);
        for (; e <= count;) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", nakPLDF0i61[sma[e]], y[sma[e]], qJ0F3zh[sma[e]], nakPLDF0i61[mgbLAwPO[e]], y[mgbLAwPO[e]], qJ0F3zh[mgbLAwPO[e]], Mo1V2BIMAP[e]);
            ++e;
        };
    }
    return (353 - 353);
}

