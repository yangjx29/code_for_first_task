int main (int argc, char *brc3ejsSiZ []) {
    int qmH6dz5D0;
    int i;
    int SxhGrNpa;
    int area;
    int o70OxlmwM6;
    int S2ONvXYltq;
    int iKCx9hHFv6;
    int y2;
    area = (700 - 700);
    int fgfuSJ [(960 - 860)] [100];
    scanf ("%d", &qmH6dz5D0);
    {
        i = 283 - 283;
        while (i < qmH6dz5D0) {
            for (SxhGrNpa = (43 - 43); SxhGrNpa < qmH6dz5D0; SxhGrNpa++) {
                scanf ("%d", &fgfuSJ[i][SxhGrNpa]);
            }
            i = i + 1;
        };
    }
    for (i = (520 - 520); i < qmH6dz5D0; i++) {
        for (SxhGrNpa = (830 - 830); SxhGrNpa < qmH6dz5D0; SxhGrNpa++) {
            if (fgfuSJ[i][SxhGrNpa] == (191 - 191)) {
                S2ONvXYltq = SxhGrNpa;
                o70OxlmwM6 = i;
                break;
            };
        }
        if (SxhGrNpa < qmH6dz5D0) {
            break;
        };
    }
    {
        i = 432 - 431;
        while (i >= 0) {
            for (SxhGrNpa = qmH6dz5D0 - 1; SxhGrNpa >= 0; SxhGrNpa--) {
                if (fgfuSJ[i][SxhGrNpa] == 0) {
                    y2 = SxhGrNpa;
                    iKCx9hHFv6 = i;
                    break;
                };
            }
            if (SxhGrNpa >= 0) {
                break;
            }
            i = i - 1;
        };
    }
    area = (iKCx9hHFv6 - o70OxlmwM6 - 1) * (y2 - S2ONvXYltq -1);
    printf ("%d", area);
    return 0;
}

