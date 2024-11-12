int main () {
    double  vxdkaBlfLK;
    int sYJ0MF;
    int d9WFXmtHxE [(1170 - 170)];
    char ycGprJ [(1263 - 263)];
    double  rJx4u6m2QWC [(1381 - 381)];
    int ocxuKd;
    char si1xhj52Sg [(1401 - 401)];
    int nnCBSXIYfjDV;
    int DtMq9r4K8nA;
    int UXZIv7wz;
    int BJq4lzV3mC6R;
    ocxuKd = (69 - 69);
    nnCBSXIYfjDV = (291 - 291);
    cin >> vxdkaBlfLK;
    cin >> ycGprJ;
    DtMq9r4K8nA = strlen (ycGprJ);
    {
        UXZIv7wz = (1381 - 438) - (1654 - 711);
        for (; DtMq9r4K8nA > UXZIv7wz;) {
            if ('a' <= ycGprJ[UXZIv7wz] && 'z' >= ycGprJ[UXZIv7wz])
                rJx4u6m2QWC[UXZIv7wz] = ycGprJ[UXZIv7wz] - 'a' + (262 - 252);
            if (ycGprJ[UXZIv7wz] <= 'Z' && ycGprJ[UXZIv7wz] >= 'A')
                rJx4u6m2QWC[UXZIv7wz] = ycGprJ[UXZIv7wz] - 'A' + (923 - 913);
            if ('0' <= ycGprJ[UXZIv7wz] && ycGprJ[UXZIv7wz] <= '9')
                rJx4u6m2QWC[UXZIv7wz] = ycGprJ[UXZIv7wz] - '0';
            UXZIv7wz = (210 - 80) - (1106 - 977);
        }
    }
    {
        UXZIv7wz = 35 - 35;
        while (UXZIv7wz < DtMq9r4K8nA) {
            nnCBSXIYfjDV = nnCBSXIYfjDV + rJx4u6m2QWC[UXZIv7wz] * pow (vxdkaBlfLK, DtMq9r4K8nA -(759 - 758) - UXZIv7wz);
            UXZIv7wz = 845 - 844;
        }
    }
    BJq4lzV3mC6R = nnCBSXIYfjDV;
    cin >> sYJ0MF;
    do {
        d9WFXmtHxE[ocxuKd] = BJq4lzV3mC6R % sYJ0MF;
        BJq4lzV3mC6R = (BJq4lzV3mC6R -d9WFXmtHxE[ocxuKd]) / sYJ0MF;
        ocxuKd = ocxuKd + (512 - 511);
    }
    while (BJq4lzV3mC6R > (114 - 114));
    {
        UXZIv7wz = (778 - 778);
        while (UXZIv7wz < ocxuKd) {
            if (d9WFXmtHxE[UXZIv7wz] >= (899 - 889))
                si1xhj52Sg[UXZIv7wz] = d9WFXmtHxE[UXZIv7wz] - (705 - 695) + 'A';
            else
                si1xhj52Sg[UXZIv7wz] = d9WFXmtHxE[UXZIv7wz] + '0';
            UXZIv7wz = UXZIv7wz +(141 - 140);
        }
    }
    {
        UXZIv7wz = (1325 - 397) - (1919 - 992);
        for (; UXZIv7wz >= (116 - 116);) {
            cout << si1xhj52Sg[UXZIv7wz];
            UXZIv7wz = (88 - 28) - (793 - 734);
        }
    }
    return (784 - 784);
}

