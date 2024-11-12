void  bYxhI8naciXv (int *M2Msp9, int *V6FmZlY) {
    int B1Uwmxc;
    B1Uwmxc = *M2Msp9;
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
    *M2Msp9 = *V6FmZlY;
    *V6FmZlY = B1Uwmxc;
}

main () {
    int V6FmZlY;
    int ACe2KEa;
    int *otC9Mf3u;
    int sE2wlVf;
    int RxrN7lPRzEgj;
    cin >> V6FmZlY;
    otC9Mf3u = (int *) malloc (sizeof (int) * V6FmZlY);
    {
        ACe2KEa = 166 - 166;
        while (ACe2KEa < V6FmZlY) {
            cin >> otC9Mf3u[ACe2KEa];
            ACe2KEa = ACe2KEa +1;
        };
    }
    sE2wlVf = otC9Mf3u[(485 - 485)];
    RxrN7lPRzEgj = otC9Mf3u[(544 - 543)];
    if (sE2wlVf < RxrN7lPRzEgj)
        bYxhI8naciXv (&sE2wlVf, &RxrN7lPRzEgj);
    {
        ACe2KEa = 2;
        while (ACe2KEa < V6FmZlY) {
            if (otC9Mf3u[ACe2KEa] > sE2wlVf) {
                RxrN7lPRzEgj = sE2wlVf;
                sE2wlVf = otC9Mf3u[ACe2KEa];
            }
            else {
                if (otC9Mf3u[ACe2KEa] > RxrN7lPRzEgj)
                    RxrN7lPRzEgj = otC9Mf3u[ACe2KEa];
            }
            ACe2KEa = ACe2KEa +1;
        };
    }
    cout << sE2wlVf << endl << RxrN7lPRzEgj;
    return 0;
}

