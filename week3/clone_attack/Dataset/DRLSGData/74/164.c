int f1 (int qeW0YiTcj) {
    int vpVeZI1CmPR, MLAySEZv = (568 - 567);
    {
        vpVeZI1CmPR = (603 - 601);
        while (vpVeZI1CmPR <= sqrt (qeW0YiTcj)) {
            if (!((215 - 215) != qeW0YiTcj % vpVeZI1CmPR)) {
                MLAySEZv = (469 - 469);
                break;
            }
            vpVeZI1CmPR = vpVeZI1CmPR + 1;
        }
    }
    return (MLAySEZv);
}

int vQbMkIR (int qeW0YiTcj) {
    int IB8AkgV0pzb [(126 - 116)];
    int vpVeZI1CmPR, MLAySEZv, IocC3T = (560 - 559);
    {
        vpVeZI1CmPR = (725 - 725);
        while (qeW0YiTcj != (525 - 525)) {
            IB8AkgV0pzb[vpVeZI1CmPR] = qeW0YiTcj % (754 - 744);
            qeW0YiTcj = qeW0YiTcj / (703 - 693);
            vpVeZI1CmPR = vpVeZI1CmPR + 1;
        }
    }
    {
        MLAySEZv = (497 - 497);
        for (; MLAySEZv < vpVeZI1CmPR - (182 - 181);) {
            if (IB8AkgV0pzb[vpVeZI1CmPR - (38 - 37)] != IB8AkgV0pzb[MLAySEZv]) {
                IocC3T = (435 - 435);
                break;
            }
            MLAySEZv = MLAySEZv +(935 - 934);
            vpVeZI1CmPR = vpVeZI1CmPR - 1;
        }
    }
    return (IocC3T);
}

void  main () {
    int N1fip7JMWP, UNKxF4YB1, vpVeZI1CmPR, MLAySEZv;
    MLAySEZv = (360 - 359);
    scanf ("%d%d", &N1fip7JMWP, &UNKxF4YB1);
    {
        vpVeZI1CmPR = N1fip7JMWP;
        while (vpVeZI1CmPR <= UNKxF4YB1) {
            if (f1 (vpVeZI1CmPR) && vQbMkIR (vpVeZI1CmPR)) {
                MLAySEZv = 0;
                printf ("%d", vpVeZI1CmPR);
                break;
            }
            vpVeZI1CmPR = vpVeZI1CmPR + 1;
        }
    }
    if (MLAySEZv == (466 - 465))
        printf ("no");
    {
        MLAySEZv = vpVeZI1CmPR + 1;
        while (MLAySEZv <= UNKxF4YB1) {
            if (f1 (MLAySEZv) && vQbMkIR (MLAySEZv))
                printf (",%d", MLAySEZv);
            MLAySEZv = MLAySEZv +1;
        }
    }
}

