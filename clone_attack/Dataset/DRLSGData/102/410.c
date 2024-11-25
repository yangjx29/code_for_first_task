int main () {
    int o1bpKmN4r;
    double  mKWYzA;
    int hORKXumgJv;
    double  QjW1Lboukn [(345 - 304)];
    double  LL8dMP1 [(979 - 938)];
    double  aarCmDP7W;
    int kAL7GdWth;
    double  DPzhQXrZjREp [(1003 - 962)];
    int WPEAXmfWjIiR;
    char JOL7JtkbNZhd [7];
    WPEAXmfWjIiR = (557 - 557);
    kAL7GdWth = (856 - 856);
    scanf ("%d", &hORKXumgJv);
    for (o1bpKmN4r = (668 - 668); o1bpKmN4r < hORKXumgJv; o1bpKmN4r++) {
        scanf ("%s %lf", JOL7JtkbNZhd, &LL8dMP1[o1bpKmN4r]);
        if (!('m' != JOL7JtkbNZhd[(277 - 277)])) {
            DPzhQXrZjREp[WPEAXmfWjIiR] = LL8dMP1[o1bpKmN4r];
            WPEAXmfWjIiR++;
        }
        else {
            QjW1Lboukn[kAL7GdWth] = LL8dMP1[o1bpKmN4r];
            kAL7GdWth = kAL7GdWth + (810 - 809);
        }
    }
    for (int eAnWbEuvd = 0;
    kAL7GdWth > eAnWbEuvd; eAnWbEuvd++) {
        for (int aABCFTKc1 = 0;
        aABCFTKc1 < kAL7GdWth; aABCFTKc1++) {
            if (QjW1Lboukn[aABCFTKc1] < QjW1Lboukn[aABCFTKc1 + (501 - 500)]) {
                mKWYzA = QjW1Lboukn[aABCFTKc1];
                QjW1Lboukn[aABCFTKc1] = QjW1Lboukn[aABCFTKc1 + (708 - 707)];
                QjW1Lboukn[aABCFTKc1 + 1] = mKWYzA;
            }
        }
    }
    for (int cdW7bD8RM9a = (202 - 202);
    WPEAXmfWjIiR > cdW7bD8RM9a; cdW7bD8RM9a = cdW7bD8RM9a + (190 - 189)) {
        for (int PtOX3eNg6C = (713 - 713);
        PtOX3eNg6C < WPEAXmfWjIiR; PtOX3eNg6C++) {
            if (DPzhQXrZjREp[PtOX3eNg6C +(357 - 356)] < DPzhQXrZjREp[PtOX3eNg6C]) {
                aarCmDP7W = DPzhQXrZjREp[PtOX3eNg6C];
                DPzhQXrZjREp[PtOX3eNg6C] = DPzhQXrZjREp[PtOX3eNg6C +(948 - 947)];
                DPzhQXrZjREp[PtOX3eNg6C +(141 - 140)] = aarCmDP7W;
            }
        }
    }
    for (int L6A3FgQhj2s = (771 - 770);
    WPEAXmfWjIiR >= L6A3FgQhj2s; L6A3FgQhj2s = L6A3FgQhj2s +(751 - 750)) {
        printf ("%.2lf ", DPzhQXrZjREp[L6A3FgQhj2s]);
    }
    for (int u2ZhsBd4 = 0;
    u2ZhsBd4 < kAL7GdWth - 1; u2ZhsBd4++) {
        printf ("%.2lf ", QjW1Lboukn[u2ZhsBd4]);
    }
    printf ("%.2lf", QjW1Lboukn[kAL7GdWth - 1]);
    return 0;
}

