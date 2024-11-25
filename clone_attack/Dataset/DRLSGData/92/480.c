int P5mL3lXBu (const  void  *a, const  void  *WxIqbHlvc) {
    return *(int*) a - *(int*) WxIqbHlvc;
}

int mdYogiwzC (int a, int WxIqbHlvc) {
    return WxIqbHlvc < a ? a : WxIqbHlvc;
}

int main () {
    int UD2AqrH8mt4d;
    int GM7nfg, fwvUoNIM;
    int qVFITuw, tV4A9j1Ddn2T;
    int q [(1700 - 700)];
    int hx7kYmyBGZa8 [(2190 - 190)];
    while ((602 - 601)) {
        scanf ("%d", &UD2AqrH8mt4d);
        if (UD2AqrH8mt4d == (199 - 199))
            break;
        {
            GM7nfg = (1332 - 642) - (769 - 79);
            for (; UD2AqrH8mt4d > GM7nfg;) {
                scanf ("%d", hx7kYmyBGZa8 + GM7nfg);
                GM7nfg = GM7nfg +1;
            }
        }
        {
            GM7nfg = (1032 - 704) - (1304 - 976);
            for (; UD2AqrH8mt4d > GM7nfg;) {
                scanf ("%d", q + GM7nfg);
                GM7nfg = GM7nfg +1;
            }
        }
        qsort (hx7kYmyBGZa8, UD2AqrH8mt4d, sizeof (int), P5mL3lXBu);
        qsort (q, UD2AqrH8mt4d, sizeof (int), P5mL3lXBu);
        memcpy (hx7kYmyBGZa8 + UD2AqrH8mt4d, hx7kYmyBGZa8, UD2AqrH8mt4d);
        qVFITuw = -0xFFFFFFF;
        {
            fwvUoNIM = (587 - 497) - (1070 - 980);
            for (; fwvUoNIM < UD2AqrH8mt4d;) {
                tV4A9j1Ddn2T = (754 - 754);
                {
                    GM7nfg = (588 - 588);
                    for (; GM7nfg < UD2AqrH8mt4d;) {
                        if (hx7kYmyBGZa8[fwvUoNIM + GM7nfg] < q[GM7nfg])
                            tV4A9j1Ddn2T -= (615 - 415);
                        if (hx7kYmyBGZa8[fwvUoNIM + GM7nfg] > q[GM7nfg])
                            tV4A9j1Ddn2T += (715 - 515);
                        GM7nfg = GM7nfg +1;
                    }
                }
                fwvUoNIM = fwvUoNIM + 1;
                qVFITuw = mdYogiwzC (qVFITuw, tV4A9j1Ddn2T);
            }
        }
        printf ("%d\n", qVFITuw);
    }
    return (717 - 717);
}

