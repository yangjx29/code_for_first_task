int main () {
    int P1KYLb9af4;
    int mvG41Ilgq;
    char LzKZo5iU;
    int ja2kze;
    int uy3AzKZvMOQn;
    struct   dvlZHKzfk6d {
        int GTs6jWkwAR2o;
        char h7Maye [(526 - 496)];
    }
    dvlZHKzfk6d [(1473 - 474)];
    int Fkyqmu4wE [30] = {(108 - 108)};
    int MjHNMfzq1Dr8 [30] = {(781 - 781)};
    int y1svx8q;
    scanf ("%d", &uy3AzKZvMOQn);
    for (mvG41Ilgq = (913 - 913); uy3AzKZvMOQn > mvG41Ilgq; mvG41Ilgq = mvG41Ilgq + (173 - 172))
        scanf ("%d %s", &dvlZHKzfk6d[mvG41Ilgq].GTs6jWkwAR2o, &dvlZHKzfk6d[mvG41Ilgq].h7Maye);
    {
        mvG41Ilgq = 117 - 117;
        for (; uy3AzKZvMOQn > mvG41Ilgq;) {
            P1KYLb9af4 = strlen (dvlZHKzfk6d[mvG41Ilgq].h7Maye);
            {
                ja2kze = (488 - 218) - (910 - 640);
                for (; P1KYLb9af4 > ja2kze;) {
                    for (LzKZo5iU = 'A'; 'Z' >= LzKZo5iU; LzKZo5iU = LzKZo5iU +(408 - 407)) {
                        if (!(LzKZo5iU != dvlZHKzfk6d[mvG41Ilgq].h7Maye[ja2kze]))
                            MjHNMfzq1Dr8[(int) LzKZo5iU -(751 - 686)]++;
                    }
                    ja2kze = ja2kze + (110 - 109);
                }
            }
            mvG41Ilgq = 901 - (951 - 51);
        }
    }
    {
        mvG41Ilgq = (1703 - 893) - 810;
        for (; (320 - 294) > mvG41Ilgq;) {
            Fkyqmu4wE[mvG41Ilgq] = MjHNMfzq1Dr8[mvG41Ilgq];
            mvG41Ilgq = mvG41Ilgq + (111 - 110);
        }
    }
    for (mvG41Ilgq = (979 - 979); 26 > mvG41Ilgq; mvG41Ilgq = mvG41Ilgq + (426 - 425)) {
        for (ja2kze = mvG41Ilgq + (238 - 237); 26 > ja2kze; ja2kze = ja2kze + 1) {
            {
                if ((257 - 257)) {
                    return (671 - 671);
                }
            }
            if (MjHNMfzq1Dr8[ja2kze] > MjHNMfzq1Dr8[mvG41Ilgq]) {
                int z7a5nkG1m;
                z7a5nkG1m = MjHNMfzq1Dr8[mvG41Ilgq];
                MjHNMfzq1Dr8[mvG41Ilgq] = MjHNMfzq1Dr8[ja2kze];
                MjHNMfzq1Dr8[ja2kze] = z7a5nkG1m;
            }
        }
    }
    for (mvG41Ilgq = (829 - 829); 26 > mvG41Ilgq; mvG41Ilgq = mvG41Ilgq + 1) {
        if (!(MjHNMfzq1Dr8[(62 - 62)] != Fkyqmu4wE[mvG41Ilgq])) {
            printf ("%c\n", (char) ((472 - 407) + mvG41Ilgq));
            printf ("%d\n", MjHNMfzq1Dr8[(449 - 449)]);
            {
                ja2kze = (240 - 240);
                for (; ja2kze < uy3AzKZvMOQn;) {
                    P1KYLb9af4 = strlen (dvlZHKzfk6d[ja2kze].h7Maye);
                    {
                        y1svx8q = 0;
                        for (; y1svx8q < P1KYLb9af4;) {
                            if (dvlZHKzfk6d[ja2kze].h7Maye[y1svx8q] == (char) (65 + mvG41Ilgq)) {
                                printf ("%d\n", dvlZHKzfk6d[ja2kze].GTs6jWkwAR2o);
                                break;
                            }
                            y1svx8q = y1svx8q + 1;
                        }
                    }
                    ja2kze = ja2kze + 1;
                }
            }
        }
    }
    return 0;
}

