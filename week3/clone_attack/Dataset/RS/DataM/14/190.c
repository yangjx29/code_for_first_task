int main (int argc, char *I4odmurAT []) {
    struct   point {
        int pRTQJDFY, u0qB967tp5VL, pfRFgG;
    }
    i6bWn31hG7a [(100840 - 840)];
    struct   point {
        int pRTQJDFY, u0qB967tp5VL, pfRFgG;
    }
    ha3sUTfhzPn;
    int gRheoK, xw6PmHv, n;
    scanf ("%d", &n);
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
        gRheoK = 0;
        while (n > gRheoK) {
            scanf ("%d%d%d", &i6bWn31hG7a[gRheoK].pRTQJDFY, &i6bWn31hG7a[gRheoK].u0qB967tp5VL, &i6bWn31hG7a[gRheoK].pfRFgG);
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
            gRheoK++;
        };
    }
    for (gRheoK = 0; gRheoK < 3; gRheoK++) {
        xw6PmHv = gRheoK + 1;
        while (xw6PmHv < n) {
            if ((i6bWn31hG7a[gRheoK].u0qB967tp5VL + i6bWn31hG7a[gRheoK].pfRFgG) < (i6bWn31hG7a[xw6PmHv].u0qB967tp5VL + i6bWn31hG7a[xw6PmHv].pfRFgG)) {
                ha3sUTfhzPn = i6bWn31hG7a[xw6PmHv];
                i6bWn31hG7a[xw6PmHv] = i6bWn31hG7a[gRheoK];
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
                i6bWn31hG7a[gRheoK] = ha3sUTfhzPn;
            }
            xw6PmHv++;
        };
    }
    {
        gRheoK = 0;
        while (gRheoK < 3) {
            printf ("%d %d\n", i6bWn31hG7a[gRheoK].pRTQJDFY, (i6bWn31hG7a[gRheoK].u0qB967tp5VL + i6bWn31hG7a[gRheoK].pfRFgG));
            gRheoK++;
        };
    }
    return 0;
}

