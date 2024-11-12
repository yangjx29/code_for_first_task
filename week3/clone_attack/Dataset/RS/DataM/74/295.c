int hp8OvuMLh (int oKybpoG) {
    int rz2GAlat31;
    int tjDA50u;
    int z;
    tjDA50u = sqrt (oKybpoG);
    {
        rz2GAlat31 = 615 - 613;
        while (tjDA50u >= rz2GAlat31) {
            if (!(0 != oKybpoG % rz2GAlat31)) {
                z = 0;
                break;
            }
            rz2GAlat31++;
        };
    }
    if (tjDA50u < rz2GAlat31) {
        z = 1;
    }
    return (z);
}

int Mb1rwQjeq4n (int oKybpoG) {
    int O9gqzu, rz2GAlat31, OhWdq1zVx5Y, ovSLWBEVUDOh = 0, y2qVX1Ofb = 0;
    y2qVX1Ofb = oKybpoG;
    for (rz2GAlat31 = oKybpoG; 0 < rz2GAlat31; rz2GAlat31 = (rz2GAlat31 / 10)) {
        OhWdq1zVx5Y = rz2GAlat31 % 10;
        ovSLWBEVUDOh = ovSLWBEVUDOh * 10 + OhWdq1zVx5Y;
    }
    if (ovSLWBEVUDOh == y2qVX1Ofb) {
        O9gqzu = 1;
    }
    else
        O9gqzu = 0;
    return (O9gqzu);
}

void  main () {
    int qlzuEbfNY7j1, oKybpoG, rz2GAlat31, S1hzlf38E9, OhWdq1zVx5Y, EIfFBTne = 0, y2qVX1Ofb = 0;
    scanf ("%d%d", &qlzuEbfNY7j1, &oKybpoG);
    for (rz2GAlat31 = qlzuEbfNY7j1; rz2GAlat31 <= oKybpoG; rz2GAlat31++) {
        S1hzlf38E9 = hp8OvuMLh (rz2GAlat31);
        OhWdq1zVx5Y = Mb1rwQjeq4n (rz2GAlat31);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (!(1 != S1hzlf38E9) && OhWdq1zVx5Y == 1)
            y2qVX1Ofb = y2qVX1Ofb + 1;
    }
    if (y2qVX1Ofb == 0)
        ;
    for (rz2GAlat31 = qlzuEbfNY7j1; rz2GAlat31 <= oKybpoG; rz2GAlat31++) {
        S1hzlf38E9 = hp8OvuMLh (rz2GAlat31);
        OhWdq1zVx5Y = Mb1rwQjeq4n (rz2GAlat31);
        if (S1hzlf38E9 == 1 && OhWdq1zVx5Y == 1) {
            printf ("%d", rz2GAlat31);
            break;
        };
    }
    for (EIfFBTne = rz2GAlat31 + 1; EIfFBTne <= oKybpoG; EIfFBTne++) {
        S1hzlf38E9 = hp8OvuMLh (EIfFBTne);
        OhWdq1zVx5Y = Mb1rwQjeq4n (EIfFBTne);
        if (S1hzlf38E9 == 1 && OhWdq1zVx5Y == 1)
            printf (",%d", EIfFBTne);
    };
}

