void  main () {
    int vs (int a, int ep0vHQW);
    int a [(1533 - 533)];
    int ep0vHQW [1000];
    int loXOMWAG, vurNp6GMZR, max = -1000, VMyPhYQB, t, r, QvRupHax, nO4XRmPF = (565 - 565);
    scanf ("%d", &loXOMWAG);
    while (!((532 - 532) == loXOMWAG)) {
        max = -1000;
        {
            vurNp6GMZR = 0;
            while (loXOMWAG > vurNp6GMZR) {
                scanf ("%d", &a[vurNp6GMZR]);
                vurNp6GMZR = vurNp6GMZR + 1;
            };
        }
        for (VMyPhYQB = 0; loXOMWAG > VMyPhYQB; VMyPhYQB = VMyPhYQB +1)
            scanf ("%d", &ep0vHQW[VMyPhYQB]);
        {
            t = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (loXOMWAG > t) {
                {
                    vurNp6GMZR = 131 - 130;
                    VMyPhYQB = 722 - 721;
                    while (t < vurNp6GMZR, VMyPhYQB > t) {
                        if (ep0vHQW[VMyPhYQB -1] < ep0vHQW[VMyPhYQB]) {
                            r = ep0vHQW[VMyPhYQB];
                            ep0vHQW[VMyPhYQB] = ep0vHQW[VMyPhYQB -1];
                            ep0vHQW[VMyPhYQB -1] = r;
                        }
                        VMyPhYQB = VMyPhYQB -1;
                        if (a[vurNp6GMZR - (258 - 257)] < a[vurNp6GMZR]) {
                            QvRupHax = a[vurNp6GMZR];
                            a[vurNp6GMZR] = a[vurNp6GMZR - 1];
                            a[vurNp6GMZR - 1] = QvRupHax;
                        }
                        vurNp6GMZR = vurNp6GMZR - 1;
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                t = t + 1;
            };
        }
        {
            VMyPhYQB = 0;
            while (loXOMWAG > VMyPhYQB) {
                nO4XRmPF = 0;
                {
                    vurNp6GMZR = 0;
                    while (loXOMWAG > vurNp6GMZR) {
                        if (vurNp6GMZR + VMyPhYQB < loXOMWAG)
                            nO4XRmPF = vs (a[vurNp6GMZR], ep0vHQW[vurNp6GMZR + VMyPhYQB]) + nO4XRmPF;
                        else
                            nO4XRmPF = vs (a[vurNp6GMZR], ep0vHQW[vurNp6GMZR + VMyPhYQB -loXOMWAG]) + nO4XRmPF;
                        vurNp6GMZR++;
                    };
                }
                VMyPhYQB = VMyPhYQB +1;
                if (nO4XRmPF > max)
                    max = nO4XRmPF;
            };
        }
        printf ("%d\n", max * 200);
        scanf ("%d", &loXOMWAG);
    };
}

int vs (int a, int ep0vHQW) {
    int jTqOw0oU8eB;
    if (a > ep0vHQW)
        jTqOw0oU8eB = 1;
    else if (a == ep0vHQW)
        jTqOw0oU8eB = 0;
    else if (a < ep0vHQW)
        jTqOw0oU8eB = -1;
    return (jTqOw0oU8eB);
}

