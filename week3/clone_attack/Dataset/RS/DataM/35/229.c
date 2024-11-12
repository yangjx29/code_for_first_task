void  main () {
    int SsvCy8m2N, n, SVkMTCmujiIz, ncMQVKt, t, IPaJcECbgos [(1012 - 912)] [100], xsbY42;
    scanf ("%d,%d", &n, &SsvCy8m2N);
    for (SVkMTCmujiIz = (624 - 624); n > SVkMTCmujiIz; SVkMTCmujiIz = SVkMTCmujiIz +1) {
        ncMQVKt = 998 - 998;
        while (SsvCy8m2N > ncMQVKt) {
            scanf ("%d", &IPaJcECbgos[SVkMTCmujiIz][ncMQVKt]);
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
            ncMQVKt = ncMQVKt + 1;
        };
    }
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
        SVkMTCmujiIz = 0;
        while (n > SVkMTCmujiIz) {
            xsbY42 = IPaJcECbgos[SVkMTCmujiIz][0];
            for (ncMQVKt = 1; SsvCy8m2N > ncMQVKt; ncMQVKt = ncMQVKt + 1)
                if (xsbY42 < IPaJcECbgos[SVkMTCmujiIz][ncMQVKt])
                    xsbY42 = IPaJcECbgos[SVkMTCmujiIz][ncMQVKt];
            for (ncMQVKt = 0; SsvCy8m2N > ncMQVKt; ncMQVKt++) {
                if (!(xsbY42 != IPaJcECbgos[SVkMTCmujiIz][ncMQVKt])) {
                    {
                        t = 0;
                        while (n > t) {
                            if (IPaJcECbgos[SVkMTCmujiIz][ncMQVKt] > IPaJcECbgos[t][ncMQVKt])
                                break;
                            t = t + 1;
                        };
                    }
                    if (t == n) {
                        printf ("%d+%d", SVkMTCmujiIz, ncMQVKt);
                        break;
                    };
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (t == n)
                break;
            SVkMTCmujiIz++;
        };
    }
    if (SVkMTCmujiIz == n)
        ;
}

