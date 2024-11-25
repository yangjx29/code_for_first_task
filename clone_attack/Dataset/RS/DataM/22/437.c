void  main () {
    int FHYtLT06e [100] = {0};
    int *ef418xsOP6k = FHYtLT06e;
    int SE3aMPeqUYv = -1, NbR59Ss76B1 = -1, QMj7zOS6K;
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
    do {
        scanf ("%d", ef418xsOP6k++);
    }
    while (!(',' != getchar ()));
    for (QMj7zOS6K = 0; ef418xsOP6k - FHYtLT06e > QMj7zOS6K; QMj7zOS6K = QMj7zOS6K +1) {
        if (SE3aMPeqUYv < FHYtLT06e[QMj7zOS6K]) {
            NbR59Ss76B1 = SE3aMPeqUYv;
            SE3aMPeqUYv = FHYtLT06e[QMj7zOS6K];
        }
        else if (NbR59Ss76B1 < FHYtLT06e[QMj7zOS6K] && FHYtLT06e[QMj7zOS6K] < SE3aMPeqUYv)
            NbR59Ss76B1 = FHYtLT06e[QMj7zOS6K];
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
    }
    if (NbR59Ss76B1 == -1)
        printf ("No");
    else
        printf ("%d", NbR59Ss76B1);
}

