double  distance (int b1 [], int b2 []) {
    int X, Y, Z;
    double  D;
    X = (b1[0] - b2[0]) * (b1[0] - b2[0]);
    Y = (b1[1] - b2[1]) * (b1[1] - b2[1]);
    Z = (b1[2] - b2[2]) * (b1[2] - b2[2]);
    D = sqrt (X +Y+Z);
    return D;
}

int main () {
    double  d [100] [3];
    int nl1FRHtSrfBh, i, j, r = 0, N84eurX1, k = 0;
    int a [30], b [10] [3];
    double  temp;
    scanf ("%d", &nl1FRHtSrfBh);
    {
        i = 0;
        while (3 * nl1FRHtSrfBh > i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        }
    }
    for (i = 0; nl1FRHtSrfBh > i; i++) {
        b[i][0] = a[3 * i];
        b[i][1] = a[3 * i + 1];
        b[i][2] = a[3 * i + 2];
    }
    {
        i = 0;
        {
            if (0) {
                return 0;
            }
        }
        while (i < nl1FRHtSrfBh) {
            for (j = i + 1; j < nl1FRHtSrfBh; j = j + 1) {
                {
                    if (0) {
                        return 0;
                    }
                }
                d[k][0] = distance (b[i], b[j]);
                d[k][1] = i;
                d[k][2] = j;
                k++;
            }
            i++;
        }
    }
    {
        i = 1;
        {
            if (0) {
                return 0;
            }
        }
        while (k > i) {
            for (j = 0; j < k - i; j++)
                if (d[j][0] < d[j + 1][0]) {
                    temp = d[j][0];
                    d[j][0] = d[j + 1][0];
                    d[j + 1][0] = temp;
                    temp = d[j][1];
                    d[j][1] = d[j + 1][1];
                    d[j + 1][1] = temp;
                    temp = d[j][2];
                    d[j][2] = d[j + 1][2];
                    d[j + 1][2] = temp;
                }
            i++;
        }
    }
    {
        N84eurX1 = 0;
        while (N84eurX1 < k) {
            i = d[N84eurX1][1];
            j = d[N84eurX1][2];
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", b[i][0], b[i][1], b[i][2], b[j][0], b[j][1], b[j][2], d[N84eurX1][0]);
            N84eurX1++;
        }
    }
    return 0;
}

