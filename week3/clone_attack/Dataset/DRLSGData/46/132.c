void  main () {
    int f [10] [2];
    int Ase0dj95 [200] [200] = {0};
    int OxlGIPJLQb1y;
    int i;
    int OxiCoOW5Ttl8;
    int nczOKBm;
    int e3aJzpmufeY;
    int QpQoI1amk5D;
    int y;
    int LsCg87TEV [200] [200];
    QpQoI1amk5D = 1;
    f[0][0] = 0;
    f[0][1] = 1;
    f[1][0] = 1;
    f[1][1] = 0;
    f[2][0] = 0;
    f[2][1] = -1;
    f[3][0] = -1;
    f[3][1] = 0;
    scanf ("%d%d", &OxiCoOW5Ttl8, &nczOKBm);
    {
        i = 1;
        while (OxiCoOW5Ttl8 >= i) {
            e3aJzpmufeY = 1;
            while (e3aJzpmufeY <= nczOKBm) {
                Ase0dj95[i][e3aJzpmufeY] = 1;
                scanf ("%d", &LsCg87TEV[i][e3aJzpmufeY]);
                e3aJzpmufeY++;
            }
            i++;
        }
    }
    y = 1;
    OxlGIPJLQb1y = 0;
    {
        i = 1;
        while (i <= OxiCoOW5Ttl8 *nczOKBm) {
            printf ("%d\n", LsCg87TEV[QpQoI1amk5D][y]);
            Ase0dj95[QpQoI1amk5D][y] = 0;
            if (!Ase0dj95[QpQoI1amk5D +f[OxlGIPJLQb1y][0]][y + f[OxlGIPJLQb1y][1]])
                OxlGIPJLQb1y = (OxlGIPJLQb1y +1) % 4;
            QpQoI1amk5D = QpQoI1amk5D +f[OxlGIPJLQb1y][0];
            y = y + f[OxlGIPJLQb1y][1];
            i++;
        }
    }
}

