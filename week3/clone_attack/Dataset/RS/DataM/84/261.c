int main () {
    int kHnT6eYtj, AKFXgNLxriuv, ZQhF2T, max, imax;
    scanf ("%d", &kHnT6eYtj);
    {
        AKFXgNLxriuv = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (kHnT6eYtj >= AKFXgNLxriuv) {
            if (AKFXgNLxriuv == 1) {
                scanf ("%d", &imax);
            }
            else if (AKFXgNLxriuv == (155 - 153)) {
                scanf ("%d", &ZQhF2T);
                if (ZQhF2T > imax) {
                    max = imax;
                    ZQhF2T = imax;
                }
                else
                    max = ZQhF2T;
            }
            else {
                scanf ("%d", &ZQhF2T);
                if (ZQhF2T >= imax) {
                    max = imax;
                    imax = ZQhF2T;
                }
                else {
                    if (ZQhF2T < imax && ZQhF2T >= max) {
                        max = ZQhF2T;
                    };
                };
            }
            AKFXgNLxriuv++;
        };
    }
    printf ("%d\n%d\n", imax, max);
    return 0;
}

