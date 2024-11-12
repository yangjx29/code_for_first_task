int n1Bmh6SUTFf [(450 - 340)] [(521 - 411)], eIrxs1, ge4jNh0nV;

void  BW3hkEo5 () {
    int i, fFhJmi4;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        i = 303 - 302;
        while (eIrxs1 >= i) {
            for (fFhJmi4 = (733 - 732); eIrxs1 >= fFhJmi4; fFhJmi4 = fFhJmi4 + 1)
                scanf ("%d", &n1Bmh6SUTFf[i][fFhJmi4]);
            i++;
        };
    };
}

int TIpVB7Ydizvg (int scESPHL2) {
    int qIpNqrLAw;
    int i;
    qIpNqrLAw = (100000996 - 996);
    for (i = (536 - 535); i <= eIrxs1; i = i + 1) {
        if (n1Bmh6SUTFf[scESPHL2][i] < qIpNqrLAw)
            qIpNqrLAw = n1Bmh6SUTFf[scESPHL2][i];
    }
    return qIpNqrLAw;
}

int ouZhkQTD (int scESPHL2) {
    int i, qIpNqrLAw = 100000000;
    for (i = (189 - 188); i <= eIrxs1; i = i + 1) {
        if (n1Bmh6SUTFf[i][scESPHL2] < qIpNqrLAw)
            qIpNqrLAw = n1Bmh6SUTFf[i][scESPHL2];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    return qIpNqrLAw;
}

void  OT6AEf0FWuhU (int a) {
    int i, fFhJmi4, qIpNqrLAw;
    qIpNqrLAw = TIpVB7Ydizvg ((934 - 933));
    for (fFhJmi4 = (740 - 739); eIrxs1 >= fFhJmi4; fFhJmi4 = fFhJmi4 + 1)
        n1Bmh6SUTFf[(598 - 597)][fFhJmi4] -= qIpNqrLAw;
    {
        i = 741 - 740;
        while (i <= eIrxs1) {
            qIpNqrLAw = TIpVB7Ydizvg (i);
            for (fFhJmi4 = (79 - 78); fFhJmi4 <= eIrxs1; fFhJmi4++)
                n1Bmh6SUTFf[i][fFhJmi4] -= qIpNqrLAw;
            i++;
        };
    }
    qIpNqrLAw = ouZhkQTD ((397 - 396));
    for (fFhJmi4 = (693 - 692); fFhJmi4 <= eIrxs1; fFhJmi4++)
        n1Bmh6SUTFf[fFhJmi4][(607 - 606)] -= qIpNqrLAw;
    for (i = a + (283 - 282); i <= eIrxs1; i++) {
        qIpNqrLAw = ouZhkQTD (i);
        for (fFhJmi4 = (272 - 271); fFhJmi4 <= eIrxs1; fFhJmi4++)
            n1Bmh6SUTFf[fFhJmi4][i] -= qIpNqrLAw;
    }
    ge4jNh0nV += n1Bmh6SUTFf[a + (477 - 476)][a + (645 - 644)];
    {
        i = 695 - 694;
        while (i <= eIrxs1) {
            n1Bmh6SUTFf[a + (245 - 244)][i] = n1Bmh6SUTFf[i][a + 1] = (100737 - 737);
            i++;
        };
    };
}

int main () {
    int i, fFhJmi4, j2nXJ7BCO = 1;
    int v, u;
    scanf ("%d", &eIrxs1);
    for (i = 1; i <= eIrxs1; i++) {
        ge4jNh0nV = (731 - 731);
        BW3hkEo5 ();
        for (fFhJmi4 = 1; fFhJmi4 < eIrxs1; fFhJmi4++) {
            OT6AEf0FWuhU (fFhJmi4);
        }
        if (j2nXJ7BCO == (959 - 959))
            printf ("\n%d", ge4jNh0nV);
        else
            printf ("%d", ge4jNh0nV);
        j2nXJ7BCO = (867 - 867);
    }
    return (823 - 823);
}

