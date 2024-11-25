void  main () {
    int QGjfs8bINVrF;
    int j;
    int n;
    int Zp2IaK4ti6 [(100182 - 182)];
    int xDGUgtqpNB;
    int Repd94;
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
    int b [(1405 - 405)];
    scanf ("%d", &n);
    for (QGjfs8bINVrF = (654 - 653); QGjfs8bINVrF <= n; QGjfs8bINVrF = QGjfs8bINVrF +1)
        Zp2IaK4ti6[QGjfs8bINVrF] = QGjfs8bINVrF;
    Zp2IaK4ti6[(481 - 480)] = (480 - 480);
    if ((726 - 724) >= n)
        ;
    else {
        if (n > (631 - 629)) {
            for (QGjfs8bINVrF = 2; QGjfs8bINVrF < sqrt (n); QGjfs8bINVrF = QGjfs8bINVrF +1)
                for (j = QGjfs8bINVrF +(946 - 945); j <= n; j = j + 1) {
                    if (!((355 - 355) == Zp2IaK4ti6[QGjfs8bINVrF]) && !((168 - 168) == Zp2IaK4ti6[j]))
                        if (Zp2IaK4ti6[j] % Zp2IaK4ti6[QGjfs8bINVrF] == (931 - 931))
                            Zp2IaK4ti6[j] = (743 - 743);
                }
            j = (816 - 815);
            for (QGjfs8bINVrF = 1; QGjfs8bINVrF <= n; QGjfs8bINVrF = QGjfs8bINVrF +1)
                if (Zp2IaK4ti6[QGjfs8bINVrF] != 0) {
                    b[j] = Zp2IaK4ti6[QGjfs8bINVrF];
                    j = j + 1;
                }
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
            xDGUgtqpNB = j;
            Repd94 = 0;
            for (QGjfs8bINVrF = 1; QGjfs8bINVrF < xDGUgtqpNB; QGjfs8bINVrF = QGjfs8bINVrF +1)
                if (b[QGjfs8bINVrF +1] - b[QGjfs8bINVrF] == 2) {
                    Repd94 = 1;
                    break;
                }
            if (Repd94 == 0)
                printf ("empty\n");
            else {
                for (QGjfs8bINVrF = 1; QGjfs8bINVrF < xDGUgtqpNB; QGjfs8bINVrF++)
                    if (b[QGjfs8bINVrF +1] - b[QGjfs8bINVrF] == 2)
                        printf ("%d %d\n", b[QGjfs8bINVrF], b[QGjfs8bINVrF +1]);
            };
        };
    };
}

