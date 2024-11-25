void  main () {
    long  int kDfQosFYCbxI, qJ9mAUq3kfvR, Tju5Y8MhVTqI, wlV1fL6Yc = 0;
    int Kt0D8HdI9 [(100599 - 599)];
    int nwkJ546;
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
    scanf ("%ld", &kDfQosFYCbxI);
    {
        qJ9mAUq3kfvR = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (kDfQosFYCbxI > qJ9mAUq3kfvR) {
            scanf ("%d", &Kt0D8HdI9[qJ9mAUq3kfvR]);
            qJ9mAUq3kfvR = qJ9mAUq3kfvR + 1;
        };
    }
    scanf ("%d", &nwkJ546);
    for (qJ9mAUq3kfvR = 0; kDfQosFYCbxI - wlV1fL6Yc > qJ9mAUq3kfvR;) {
        if (!(nwkJ546 != Kt0D8HdI9[qJ9mAUq3kfvR])) {
            {
                Tju5Y8MhVTqI = qJ9mAUq3kfvR + 1;
                while (kDfQosFYCbxI > Tju5Y8MhVTqI) {
                    Kt0D8HdI9[Tju5Y8MhVTqI -1] = Kt0D8HdI9[Tju5Y8MhVTqI];
                    Tju5Y8MhVTqI++;
                };
            }
            wlV1fL6Yc++;
        }
        else
            qJ9mAUq3kfvR++;
    }
    {
        qJ9mAUq3kfvR = 0;
        while (kDfQosFYCbxI - wlV1fL6Yc > qJ9mAUq3kfvR) {
            printf ("%d", Kt0D8HdI9[qJ9mAUq3kfvR]);
            if (qJ9mAUq3kfvR != kDfQosFYCbxI - wlV1fL6Yc - 1)
                printf (" ");
            qJ9mAUq3kfvR++;
        };
    };
}

