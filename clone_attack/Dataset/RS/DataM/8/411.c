void  zyzLRVMqZ5C (int a [(985 - 885)], int QBLGDW3UnRsH);

void  prin (int a [(969 - 869)], int QBLGDW3UnRsH, int S6rmtbRq [(1005 - 905)], int GoLZKWSpM) {
    int ohjP8r;
    char FkDXcOoWVS = '\0';
    zyzLRVMqZ5C (a, QBLGDW3UnRsH);
    zyzLRVMqZ5C (S6rmtbRq, GoLZKWSpM);
    for (ohjP8r = (488 - 488); QBLGDW3UnRsH > ohjP8r; ohjP8r = ohjP8r + 1)
        printf ("%d ", a[ohjP8r]);
    for (ohjP8r = 0; GoLZKWSpM > ohjP8r; ohjP8r = ohjP8r + 1) {
        if (GoLZKWSpM -1 > ohjP8r)
            FkDXcOoWVS = ' ';
        else
            FkDXcOoWVS = '\n';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d%c", S6rmtbRq[ohjP8r], FkDXcOoWVS);
    };
}

void  zyzLRVMqZ5C (int a [(342 - 242)], int QBLGDW3UnRsH) {
    int ohjP8r;
    int M5J3k8d6QeM1;
    int S6rmtbRq;
    for (ohjP8r = 0; QBLGDW3UnRsH > ohjP8r; ohjP8r = ohjP8r + 1) {
        for (M5J3k8d6QeM1 = ohjP8r; M5J3k8d6QeM1 < QBLGDW3UnRsH; M5J3k8d6QeM1 = M5J3k8d6QeM1 +1) {
            if (a[ohjP8r] > a[M5J3k8d6QeM1]) {
                S6rmtbRq = a[ohjP8r];
                a[ohjP8r] = a[M5J3k8d6QeM1];
                a[M5J3k8d6QeM1] = S6rmtbRq;
            };
        };
    };
}

int main () {
    int a [100], S6rmtbRq [100];
    int QBLGDW3UnRsH, GoLZKWSpM, ohjP8r;
    scanf ("%d%d", &QBLGDW3UnRsH, &GoLZKWSpM);
    for (ohjP8r = 0; ohjP8r < QBLGDW3UnRsH; ohjP8r++)
        scanf ("%d", &a[ohjP8r]);
    for (ohjP8r = 0; ohjP8r < GoLZKWSpM; ohjP8r++)
        scanf ("%d", &S6rmtbRq[ohjP8r]);
    prin (a, QBLGDW3UnRsH, S6rmtbRq, GoLZKWSpM);
    return 0;
}

