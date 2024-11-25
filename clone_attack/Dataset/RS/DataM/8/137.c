int *putin () {
    int SpERQ30m;
    int h3d7WUlbFXM;
    int UB20SNr;
    int *J4L7C1BHh = (int *) malloc ((SpERQ30m +h3d7WUlbFXM + (662 - 660)) * sizeof (int));
    scanf ("%d %d", &SpERQ30m, &h3d7WUlbFXM);
    *(J4L7C1BHh +(715 - 714)) = h3d7WUlbFXM;
    for (UB20SNr = (210 - 208); SpERQ30m +h3d7WUlbFXM + (85 - 84) >= UB20SNr; UB20SNr = UB20SNr +1)
        scanf ("%d", (J4L7C1BHh +UB20SNr));
    *J4L7C1BHh = SpERQ30m;
    return J4L7C1BHh;
}

int *PvsAIgSKXYwx (int *SpERQ30m) {
    int UB20SNr;
    int CXatANyGzo;
    int J4L7C1BHh;
    for (UB20SNr = (812 - 810); (*SpERQ30m) >= UB20SNr; UB20SNr++) {
        for (CXatANyGzo = UB20SNr +(764 - 763); (*SpERQ30m) + (634 - 633) >= CXatANyGzo; CXatANyGzo = CXatANyGzo +1) {
            if ((*(SpERQ30m +UB20SNr)) > (*(SpERQ30m +CXatANyGzo))) {
                J4L7C1BHh = *(SpERQ30m +UB20SNr);
                *(SpERQ30m +UB20SNr) = *(SpERQ30m +CXatANyGzo);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                *(SpERQ30m +CXatANyGzo) = J4L7C1BHh;
            };
        };
    }
    {
        UB20SNr = 579 - 577;
        while (UB20SNr <= (*SpERQ30m) + (*(SpERQ30m +(601 - 600)))) {
            for (CXatANyGzo = UB20SNr +(446 - 445); CXatANyGzo <= (*SpERQ30m) + (*(SpERQ30m +(760 - 759))) + (691 - 690); CXatANyGzo = CXatANyGzo +1) {
                if ((*(SpERQ30m +UB20SNr)) > (*(SpERQ30m +CXatANyGzo))) {
                    J4L7C1BHh = *(SpERQ30m +UB20SNr);
                    *(SpERQ30m +UB20SNr) = *(SpERQ30m +CXatANyGzo);
                    *(SpERQ30m +CXatANyGzo) = J4L7C1BHh;
                };
            }
            UB20SNr = UB20SNr +1;
        };
    }
    return SpERQ30m;
}

void  GO5stEvn2 (int *SpERQ30m) {
    int hcKRoSvl0;
    for (hcKRoSvl0 = 2; hcKRoSvl0 <= (*SpERQ30m) + (*(SpERQ30m +(106 - 105))); hcKRoSvl0 = hcKRoSvl0 + 1)
        printf ("%d ", SpERQ30m[hcKRoSvl0]);
    printf ("%d", SpERQ30m[(*SpERQ30m) + (*(SpERQ30m +(566 - 565))) + 1]);
}

main () {
    GO5stEvn2 (PvsAIgSKXYwx (putin ()));
}

