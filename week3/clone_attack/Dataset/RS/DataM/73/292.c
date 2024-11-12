int main () {
    int DqBcMVQCEbI, znNqZY7c6, uXAkPa3zov, t = 0, x, ctTHf9g1l, a [5] [5] = {0};
    for (DqBcMVQCEbI = 0; 5 > DqBcMVQCEbI; DqBcMVQCEbI = DqBcMVQCEbI +1) {
        for (znNqZY7c6 = 0; 5 > znNqZY7c6; znNqZY7c6 = znNqZY7c6 + 1) {
            scanf ("%d", &a[DqBcMVQCEbI][znNqZY7c6]);
        };
    }
    for (DqBcMVQCEbI = 0; 5 > DqBcMVQCEbI; DqBcMVQCEbI = DqBcMVQCEbI +1) {
        x = a[DqBcMVQCEbI][0];
        ctTHf9g1l = 0;
        for (znNqZY7c6 = 0; znNqZY7c6 < 5; znNqZY7c6++) {
            if (a[DqBcMVQCEbI][znNqZY7c6] > x) {
                x = a[DqBcMVQCEbI][znNqZY7c6];
                ctTHf9g1l = znNqZY7c6;
            };
        }
        {
            uXAkPa3zov = 0;
            while (uXAkPa3zov < 5) {
                if (a[uXAkPa3zov][ctTHf9g1l] < x) {
                    x = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    break;
                }
                uXAkPa3zov++;
            };
        }
        if (x != 0) {
            printf ("%d %d %d", DqBcMVQCEbI +1, ctTHf9g1l + 1, x);
            t = 1;
        };
    }
    if (t == 0)
        ;
    getchar ();
    getchar ();
    getchar ();
    return 0;
}

