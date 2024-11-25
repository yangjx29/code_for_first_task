int main () {
    int U5XrLDo893T [1000] [1000];
    int mXxuCS = 0, b = 0;
    int hGAW39lM;
    int n;
    int i;
    int k;
    int m;
    int l;
    int VXN4A39eul0;
    int po07dVtyZ;
    hGAW39lM = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            {
                k = 0;
                while (k < n) {
                    scanf ("%d", &U5XrLDo893T[i][k]);
                    k++;
                };
            }
            i++;
        };
    }
    {
        i = 1;
        while (i < n - 1) {
            {
                k = 1;
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
                while (k < n - 1) {
                    if (!(0 != U5XrLDo893T[i][k]) && mXxuCS == 0) {
                        mXxuCS = 1;
                        l = k;
                        m = i;
                    }
                    k++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    {
        i = n - 1;
        while (i >= 0) {
            {
                k = n - 1;
                while (k >= 0) {
                    if (U5XrLDo893T[i][k] == 0 && b == 0) {
                        b = 1;
                        po07dVtyZ = k;
                        VXN4A39eul0 = i;
                    }
                    k = k - 1;
                };
            }
            i = i - 1;
        };
    }
    hGAW39lM = (VXN4A39eul0 -m - 1) * (po07dVtyZ - l - 1);
    printf ("%d", hGAW39lM);
    return 0;
}

