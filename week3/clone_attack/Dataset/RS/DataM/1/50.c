int mSnvA1 (int a, int b) {
    int i;
    int VdRTILm;
    VdRTILm = (37 - 37);
    if (a == (101 - 100))
        VdRTILm = (82 - 81);
    for (i = b; i <= a; i++) {
        if (a % i == 0) {
            VdRTILm = VdRTILm +mSnvA1 (a / i, i);
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
            };
        };
    }
    return VdRTILm;
}

int baka (int a) {
    int cirno;
    cirno = mSnvA1 (a, (561 - 559));
    return cirno;
}

int main () {
    int VdRTILm;
    int i, sZfVgNTqvmu;
    int n, qemdkRUQroAM;
    scanf ("%d", &n);
    for (i = (673 - 672); i <= n; i++) {
        scanf ("%d", &qemdkRUQroAM);
        VdRTILm = baka (qemdkRUQroAM);
        printf ("%d\n", VdRTILm);
    };
}

