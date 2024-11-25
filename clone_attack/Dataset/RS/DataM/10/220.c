void  main () {
    int lU6bpci [(514 - 488)], E7Zi5LQABb4W, M8A50kM, KdouVk5JT, kgnMfQjsq = 25, gcpr3a = 0, qfv3ILa20n, pd6cEgAjXul [26], QsSjNRci [26];
    scanf ("%d", &kgnMfQjsq);
    {
        E7Zi5LQABb4W = 573 - 572;
        while (E7Zi5LQABb4W <= kgnMfQjsq) {
            scanf ("%d", &lU6bpci[E7Zi5LQABb4W]);
            pd6cEgAjXul[E7Zi5LQABb4W] = 1;
            QsSjNRci[E7Zi5LQABb4W] = 1;
            E7Zi5LQABb4W++;
        };
    }
    {
        E7Zi5LQABb4W = kgnMfQjsq - 1;
        while (E7Zi5LQABb4W > 0) {
            {
                KdouVk5JT = E7Zi5LQABb4W +1;
                while (kgnMfQjsq >= KdouVk5JT) {
                    if (lU6bpci[KdouVk5JT] <= lU6bpci[E7Zi5LQABb4W]) {
                        {
                            M8A50kM = E7Zi5LQABb4W +1;
                            while (M8A50kM < kgnMfQjsq) {
                                if (lU6bpci[E7Zi5LQABb4W] >= lU6bpci[M8A50kM] && pd6cEgAjXul[M8A50kM] > QsSjNRci[KdouVk5JT])
                                    QsSjNRci[KdouVk5JT] = pd6cEgAjXul[M8A50kM];
                                M8A50kM = M8A50kM +1;
                            };
                        }
                        pd6cEgAjXul[E7Zi5LQABb4W] = pd6cEgAjXul[E7Zi5LQABb4W] + QsSjNRci[KdouVk5JT];
                        break;
                    }
                    KdouVk5JT++;
                };
            }
            E7Zi5LQABb4W--;
        };
    }
    {
        E7Zi5LQABb4W = kgnMfQjsq;
        while (E7Zi5LQABb4W > 0) {
            if (pd6cEgAjXul[E7Zi5LQABb4W] > gcpr3a)
                gcpr3a = pd6cEgAjXul[E7Zi5LQABb4W];
            E7Zi5LQABb4W--;
        };
    }
    printf ("%d", gcpr3a);
}

