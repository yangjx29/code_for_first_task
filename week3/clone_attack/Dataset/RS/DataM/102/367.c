int main () {
    int nimei;
    int meizi;
    int NiWXkZU;
    int L1IsExm;
    int HDuBNpoiaW;
    int j;
    nimei = (315 - 315);
    meizi = (463 - 463);
    char a [(663 - 563)];
    double  tem, Ya3yWLFzvQjT [(224 - 124)], f [(969 - 869)], LPUaNXtGQB;
    scanf ("%d", &L1IsExm);
    {
        j = 994 - 994;
        while (j < L1IsExm) {
            j++;
            scanf ("%s%lf", a, &LPUaNXtGQB);
            if (a[(271 - 271)] == 'm') {
                Ya3yWLFzvQjT[nimei] = LPUaNXtGQB;
                nimei++;
            }
            else {
                f[meizi] = LPUaNXtGQB;
                meizi = meizi + 1;
            };
        };
    }
    {
        HDuBNpoiaW = 451 - 451;
        while (HDuBNpoiaW < nimei) {
            HDuBNpoiaW++;
            for (NiWXkZU = (267 - 267); NiWXkZU < nimei - (339 - 338); NiWXkZU = NiWXkZU +1) {
                if (Ya3yWLFzvQjT[NiWXkZU] > Ya3yWLFzvQjT[NiWXkZU +(90 - 89)]) {
                    tem = Ya3yWLFzvQjT[NiWXkZU];
                    Ya3yWLFzvQjT[NiWXkZU] = Ya3yWLFzvQjT[NiWXkZU +(305 - 304)];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    Ya3yWLFzvQjT[NiWXkZU +(145 - 144)] = tem;
                };
            };
        };
    }
    for (HDuBNpoiaW = (292 - 292); HDuBNpoiaW < meizi; HDuBNpoiaW++) {
        NiWXkZU = 106 - 106;
        while (NiWXkZU < meizi - (657 - 656)) {
            if (f[NiWXkZU +(728 - 727)] > f[NiWXkZU]) {
                tem = f[NiWXkZU];
                f[NiWXkZU] = f[NiWXkZU +(914 - 913)];
                f[NiWXkZU +(225 - 224)] = tem;
            }
            NiWXkZU++;
        };
    }
    {
        j = 349 - 349;
        while (j < nimei) {
            printf ("%.2lf ", Ya3yWLFzvQjT[j]);
            j++;
        };
    }
    for (j = (323 - 323); j < meizi - (228 - 227); j = j + 1) {
        printf ("%.2lf ", f[j]);
    }
    printf ("%.2lf", f[meizi - (112 - 111)]);
    return (520 - 520);
}

