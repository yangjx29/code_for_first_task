int main () {
    while ((207 - 206)) {
        int IgOodq;
        int KV4b1r8FwI;
        IgOodq = 0;
        KV4b1r8FwI = 0;
        int Qwhi6J [(1606 - 606)] = {(501 - 501)};
        int y1hEPXl4o [1000] = {(93 - 93)};
        int tx2HjQzr;
        int ju0giK;
        int XZt9ygV6Y;
        int BwidYzkAlEKt;
        int VPTObQglzN;
        int TQqMi8NyzT;
        XZt9ygV6Y = ju0giK - (793 - 792);
        BwidYzkAlEKt = ju0giK - 1;
        VPTObQglzN = (153 - 153);
        TQqMi8NyzT = (970 - 970);
        scanf ("%d", &ju0giK);
        if (!(0 != ju0giK))
            break;
        {
            tx2HjQzr = 0;
            while (ju0giK > tx2HjQzr) {
                scanf ("%d", &Qwhi6J[tx2HjQzr]);
                tx2HjQzr++;
            }
        }
        {
            tx2HjQzr = 0;
            while (ju0giK > tx2HjQzr) {
                scanf ("%d", &y1hEPXl4o[tx2HjQzr]);
                tx2HjQzr++;
            }
        }
        {
            tx2HjQzr = 0;
            while (tx2HjQzr < ju0giK) {
                {
                    int itykCB;
                    itykCB = tx2HjQzr + 1;
                    while (ju0giK > itykCB) {
                        if (Qwhi6J[tx2HjQzr] < Qwhi6J[itykCB]) {
                            int tSNjW7oe;
                            tSNjW7oe = Qwhi6J[itykCB];
                            Qwhi6J[itykCB] = Qwhi6J[tx2HjQzr];
                            Qwhi6J[tx2HjQzr] = tSNjW7oe;
                        }
                        itykCB++;
                    }
                }
                tx2HjQzr++;
            }
        }
        {
            tx2HjQzr = 0;
            while (tx2HjQzr < ju0giK) {
                {
                    int itykCB;
                    itykCB = tx2HjQzr + 1;
                    while (itykCB < ju0giK) {
                        if (y1hEPXl4o[itykCB] > y1hEPXl4o[tx2HjQzr]) {
                            int tSNjW7oe;
                            tSNjW7oe = y1hEPXl4o[itykCB];
                            y1hEPXl4o[itykCB] = y1hEPXl4o[tx2HjQzr];
                            y1hEPXl4o[tx2HjQzr] = tSNjW7oe;
                        }
                        itykCB++;
                    }
                }
                tx2HjQzr++;
            }
        }
        while (XZt9ygV6Y >= VPTObQglzN &&BwidYzkAlEKt >= TQqMi8NyzT) {
            if (Qwhi6J[XZt9ygV6Y] > y1hEPXl4o[BwidYzkAlEKt]) {
                XZt9ygV6Y--;
                IgOodq++;
                BwidYzkAlEKt--;
                continue;
            }
            if (Qwhi6J[XZt9ygV6Y] < y1hEPXl4o[BwidYzkAlEKt]) {
                TQqMi8NyzT++;
                KV4b1r8FwI++;
                XZt9ygV6Y--;
                continue;
            }
            if (Qwhi6J[XZt9ygV6Y] == y1hEPXl4o[BwidYzkAlEKt]) {
                if (Qwhi6J[VPTObQglzN] > y1hEPXl4o[TQqMi8NyzT]) {
                    VPTObQglzN++;
                    IgOodq++;
                    TQqMi8NyzT++;
                    continue;
                }
                if (Qwhi6J[XZt9ygV6Y] < y1hEPXl4o[TQqMi8NyzT]) {
                    KV4b1r8FwI++;
                    XZt9ygV6Y--;
                    TQqMi8NyzT++;
                    continue;
                }
                else {
                    break;
                }
            }
        }
        printf ("%d\n", (IgOodq -KV4b1r8FwI) * 200);
    }
}

