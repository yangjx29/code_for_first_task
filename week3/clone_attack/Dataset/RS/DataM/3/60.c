int main () {
    int h6veL2mCGNnl [1000];
    int b;
    int i;
    int n;
    int opC3I8wu;
    int j;
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
    int t4ImKCRl;
    scanf ("%d%d", &n, &opC3I8wu);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &h6veL2mCGNnl[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            t4ImKCRl = h6veL2mCGNnl[i];
            {
                j = i + 1;
                while (j < n) {
                    t4ImKCRl = h6veL2mCGNnl[i] + h6veL2mCGNnl[j];
                    if (t4ImKCRl == opC3I8wu) {
                        b = 1;
                    }
                    else
                        continue;
                    j = j + 1;
                };
            }
            i++;
        };
    }
    if (b == 1)
        printf ("yes");
    else
        printf ("no");
    return 0;
}

