int oGlquwCac2Y (int YO7ZCh [MAX] [MAX], int WnQ0kT, int UFPr2IVm) {
    if (YO7ZCh[WnQ0kT -(141 - 140)][UFPr2IVm] <= YO7ZCh[WnQ0kT][UFPr2IVm] && YO7ZCh[WnQ0kT +(607 - 606)][UFPr2IVm] <= YO7ZCh[WnQ0kT][UFPr2IVm] && YO7ZCh[WnQ0kT][UFPr2IVm] >= YO7ZCh[WnQ0kT][UFPr2IVm -(991 - 990)] && YO7ZCh[WnQ0kT][UFPr2IVm +(174 - 173)] <= YO7ZCh[WnQ0kT][UFPr2IVm])
        return (642 - 641);
    else
        return (307 - 307);
}

void  main () {
    int YO7ZCh [MAX] [MAX];
    int cIw1LDrSJU;
    int g9vKTUP1;
    int WnQ0kT;
    int UFPr2IVm;
    for (WnQ0kT = (24 - 24); MAX > WnQ0kT; WnQ0kT++) {
        UFPr2IVm = (870 - 622) - (1236 - 988);
        while (UFPr2IVm < MAX) {
            YO7ZCh[WnQ0kT][UFPr2IVm] = (854 - 854);
            UFPr2IVm++;
        }
    }
    scanf ("%d%d", &cIw1LDrSJU, &g9vKTUP1);
    {
        WnQ0kT = (681 - 572) - 108;
        while (WnQ0kT <= cIw1LDrSJU) {
            for (UFPr2IVm = (114 - 113); UFPr2IVm <= g9vKTUP1; UFPr2IVm++)
                scanf ("%d", &YO7ZCh[WnQ0kT][UFPr2IVm]);
            WnQ0kT++;
        }
    }
    {
        WnQ0kT = (42 - 41);
        while (WnQ0kT <= cIw1LDrSJU) {
            {
                UFPr2IVm = 1;
                while (UFPr2IVm <= g9vKTUP1) {
                    if (oGlquwCac2Y (YO7ZCh, WnQ0kT, UFPr2IVm)) {
                        printf ("%d %d\n", WnQ0kT -1, UFPr2IVm -1);
                    }
                    UFPr2IVm++;
                }
            }
            WnQ0kT++;
        }
    }
}

