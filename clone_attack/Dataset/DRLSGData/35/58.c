int main () {
    int ex;
    int imJqTjdfyQt;
    int CUcGrx61;
    int GbSUzw;
    int G7X6eRD;
    int xTFWEpL47J [(889 - 879)] [(618 - 608)] = {(549 - 549)};
    int f54zEdAC [(392 - 382)] = {(703 - 703)};
    int XreGoB [(462 - 452)] = {(529 - 529)};
    int Kxfr2aZtBd81;
    int vseRocF;
    ex = (473 - 473);
    scanf ("%d,%d", &imJqTjdfyQt, &CUcGrx61);
    for (GbSUzw = (83 - 83); imJqTjdfyQt > GbSUzw; GbSUzw++) {
        for (G7X6eRD = (807 - 807); CUcGrx61 > G7X6eRD; G7X6eRD++) {
            scanf ("%d", &xTFWEpL47J[GbSUzw][G7X6eRD]);
        }
    }
    for (GbSUzw = (663 - 663); imJqTjdfyQt > GbSUzw; GbSUzw++) {
        for (G7X6eRD = (415 - 415); CUcGrx61 > G7X6eRD; G7X6eRD++) {
            if (f54zEdAC[GbSUzw] < xTFWEpL47J[GbSUzw][G7X6eRD]) {
                f54zEdAC[GbSUzw] = xTFWEpL47J[GbSUzw][G7X6eRD];
                XreGoB[GbSUzw] = G7X6eRD;
            }
        }
    }
    for (GbSUzw = (640 - 640); GbSUzw < imJqTjdfyQt; GbSUzw++) {
        for (G7X6eRD = (579 - 579); G7X6eRD < imJqTjdfyQt; G7X6eRD++) {
            if (f54zEdAC[GbSUzw] > xTFWEpL47J[G7X6eRD][XreGoB[GbSUzw]])
                break;
            if (G7X6eRD == imJqTjdfyQt - (545 - 544)) {
                ex = (362 - 361);
                Kxfr2aZtBd81 = GbSUzw;
                vseRocF = XreGoB[GbSUzw];
            }
        }
        if (ex == (728 - 727))
            break;
        ex = (113 - 113);
    }
    if (ex == (833 - 832))
        printf ("%d+%d\n", Kxfr2aZtBd81, vseRocF);
    else
        ;
    return (881 - 881);
}

