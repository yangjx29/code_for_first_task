main () {
    int i;
    int fFZOoamG;
    int x;
    int k;
    int m;
    int QkJKxLyFzOY [fFZOoamG];
    scanf ("%d", &fFZOoamG);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (fFZOoamG > i) {
            QkJKxLyFzOY[i] = i + 1;
            i++;
        };
    }
    if (fFZOoamG < 5)
        ;
    else {
        if (5 <= fFZOoamG) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (i = (743 - 741); i < fFZOoamG; i = i + 1) {
                {
                    x = 2;
                    while (QkJKxLyFzOY[i] >= x) {
                        if (!(0 != QkJKxLyFzOY[i] % x))
                            break;
                        x = x + 1;
                    };
                }
                k = x;
                for (x = 2; x <= QkJKxLyFzOY[i - 2]; x++) {
                    if (QkJKxLyFzOY[i - 2] % x == 0)
                        break;
                }
                m = x;
                if (k == QkJKxLyFzOY[i] && m == QkJKxLyFzOY[i - 2])
                    printf ("%d %d\n", QkJKxLyFzOY[i - 2], QkJKxLyFzOY[i]);
            };
        };
    };
}

