int main (int nVy32uYpCUe, char *YsAO37FvyMo []) {
    int Vxp7wRlk [100];
    int m0kPAVNT5M, j, qPTliRj, vSJ5CIweBRx;
    for (m0kPAVNT5M = 0; m0kPAVNT5M < 100; m0kPAVNT5M++)
        Vxp7wRlk[m0kPAVNT5M] = 0;
    scanf ("%d\n", &qPTliRj);
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
    for (m0kPAVNT5M = 0; m0kPAVNT5M < qPTliRj; m0kPAVNT5M++)
        scanf ("%d", &Vxp7wRlk[m0kPAVNT5M]);
    for (j = 0; qPTliRj > j; j++) {
        m0kPAVNT5M = 0;
        while (m0kPAVNT5M < qPTliRj - j) {
            if (Vxp7wRlk[m0kPAVNT5M + 1] > Vxp7wRlk[m0kPAVNT5M]) {
                vSJ5CIweBRx = Vxp7wRlk[m0kPAVNT5M];
                Vxp7wRlk[m0kPAVNT5M] = Vxp7wRlk[m0kPAVNT5M + 1];
                Vxp7wRlk[m0kPAVNT5M + 1] = vSJ5CIweBRx;
            }
            m0kPAVNT5M = m0kPAVNT5M + 1;
        };
    }
    for (m0kPAVNT5M = 0; m0kPAVNT5M < 2; m0kPAVNT5M++)
        printf ("%d\n", Vxp7wRlk[m0kPAVNT5M]);
    return 0;
}

