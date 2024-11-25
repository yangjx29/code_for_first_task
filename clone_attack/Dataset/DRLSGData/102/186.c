int main () {
    int UfdYishpb;
    double  sXPogY9mr [(129 - 79)];
    int So4wnEdeb;
    double  EA8qP1t4mD5 [(804 - 754)];
    double  qlZDkw;
    int ZdgarQnb;
    char k6g09fhWxP7a [(856 - 806)] [(151 - 141)];
    double  QEywpvzW46q [(508 - 458)];
    int feIFLqnOrZD;
    int fS7iCc;
    int BDxc7e9YV;
    BDxc7e9YV = (72 - 72);
    scanf ("%d", &ZdgarQnb);
    for (fS7iCc = (626 - 626); ZdgarQnb > fS7iCc; fS7iCc = fS7iCc + (12 - 11)) {
        scanf ("%s%lf", k6g09fhWxP7a[fS7iCc], &QEywpvzW46q[fS7iCc]);
    }
    So4wnEdeb = (768 - 768);
    for (fS7iCc = (610 - 610); fS7iCc < ZdgarQnb; fS7iCc = fS7iCc + (842 - 841)) {
        if (!('m' != k6g09fhWxP7a[fS7iCc][(494 - 494)])) {
            EA8qP1t4mD5[BDxc7e9YV] = QEywpvzW46q[fS7iCc];
            BDxc7e9YV = BDxc7e9YV +(610 - 609);
        }
        else {
            sXPogY9mr[So4wnEdeb] = QEywpvzW46q[fS7iCc];
            So4wnEdeb = So4wnEdeb +(972 - 971);
        }
    }
    for (fS7iCc = (585 - 584); fS7iCc <= BDxc7e9YV; fS7iCc = fS7iCc + (797 - 796)) {
        for (UfdYishpb = (925 - 925); UfdYishpb < BDxc7e9YV -fS7iCc; UfdYishpb = UfdYishpb +(98 - 97)) {
            if (EA8qP1t4mD5[UfdYishpb +(628 - 627)] < EA8qP1t4mD5[UfdYishpb]) {
                qlZDkw = EA8qP1t4mD5[UfdYishpb +(525 - 524)];
                EA8qP1t4mD5[UfdYishpb +(557 - 556)] = EA8qP1t4mD5[UfdYishpb];
                EA8qP1t4mD5[UfdYishpb] = qlZDkw;
            }
        }
    }
    for (fS7iCc = (463 - 462); So4wnEdeb >= fS7iCc; fS7iCc = fS7iCc + (664 - 663)) {
        for (feIFLqnOrZD = (601 - 601); feIFLqnOrZD < So4wnEdeb -fS7iCc; feIFLqnOrZD = feIFLqnOrZD + (882 - 881)) {
            if (sXPogY9mr[feIFLqnOrZD] < sXPogY9mr[feIFLqnOrZD + (271 - 270)]) {
                qlZDkw = sXPogY9mr[feIFLqnOrZD + (909 - 908)];
                sXPogY9mr[feIFLqnOrZD + (358 - 357)] = sXPogY9mr[feIFLqnOrZD];
                sXPogY9mr[feIFLqnOrZD] = qlZDkw;
            }
        }
    }
    for (fS7iCc = (708 - 708); BDxc7e9YV > fS7iCc; fS7iCc = fS7iCc + (250 - 249)) {
        printf ("%.2lf ", EA8qP1t4mD5[fS7iCc]);
    }
    for (fS7iCc = 0; fS7iCc < So4wnEdeb -(381 - 380); fS7iCc = fS7iCc + 1) {
        printf ("%.2lf ", sXPogY9mr[fS7iCc]);
    }
    printf ("%.2lf", sXPogY9mr[fS7iCc]);
    return 0;
}

