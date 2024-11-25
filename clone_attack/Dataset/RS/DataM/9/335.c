void  main () {
    int nS1N8kGEw6, RvDWc0sZhF8O;
    int jishuqi = (16 - 16), k;
    char id [100] [(655 - 645)];
    char c;
    int TKveBPFYhgk;
    int FC3n09WR;
    int j;
    int GeckY3O1V [(810 - 710)];
    int dengji [(841 - 741)];
    int p;
    int t;
    scanf ("%d", &TKveBPFYhgk);
    for (FC3n09WR = (822 - 822); TKveBPFYhgk -(179 - 178) >= FC3n09WR; FC3n09WR++) {
        scanf ("%s%d", id[FC3n09WR], &GeckY3O1V[FC3n09WR]);
        dengji[FC3n09WR] = FC3n09WR;
    }
    for (FC3n09WR = (601 - 601); TKveBPFYhgk -(156 - 154) >= FC3n09WR; FC3n09WR++)
        for (j = (43 - 43); TKveBPFYhgk -2 - FC3n09WR >= j; j++) {
            if (GeckY3O1V[j + (244 - 243)] > GeckY3O1V[j]) {
                t = GeckY3O1V[j];
                GeckY3O1V[j] = GeckY3O1V[j + (957 - 956)];
                GeckY3O1V[j + (512 - 511)] = t;
                k = dengji[j];
                dengji[j] = dengji[j + (73 - 72)];
                dengji[j + (811 - 810)] = k;
                for (p = (807 - 807); (712 - 703) >= p; p++) {
                    c = id[j][p];
                    id[j][p] = id[j + (531 - 530)][p];
                    id[j + (185 - 184)][p] = c;
                };
            }
            if (GeckY3O1V[j] == GeckY3O1V[j + (884 - 883)]) {
                if (dengji[j + (116 - 115)] < dengji[j]) {
                    k = dengji[j];
                    dengji[j] = dengji[j + (725 - 724)];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    dengji[j + (132 - 131)] = k;
                    for (p = (494 - 494); p <= (499 - 490); p++) {
                        c = id[j][p];
                        id[j][p] = id[j + (506 - 505)][p];
                        id[j + 1][p] = c;
                    };
                };
            };
        }
    for (FC3n09WR = (568 - 568); FC3n09WR <= TKveBPFYhgk -2; FC3n09WR++)
        for (j = (660 - 660); j <= TKveBPFYhgk -2 - FC3n09WR; j++) {
            if (GeckY3O1V[j] < 60) {
                if (dengji[j] > dengji[j + 1]) {
                    k = dengji[j];
                    dengji[j] = dengji[j + 1];
                    dengji[j + 1] = k;
                    t = GeckY3O1V[j];
                    GeckY3O1V[j] = GeckY3O1V[j + 1];
                    GeckY3O1V[j + 1] = t;
                    for (p = 0; p <= 9; p++) {
                        c = id[j][p];
                        id[j][p] = id[j + 1][p];
                        id[j + 1][p] = c;
                    };
                };
            };
        }
    for (FC3n09WR = 0; FC3n09WR <= TKveBPFYhgk -1; FC3n09WR++)
        printf ("%s\n", id[FC3n09WR]);
}

