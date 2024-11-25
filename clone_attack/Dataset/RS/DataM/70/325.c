int iIndex, iIndex1, iCount;
int i, j, k, l, m, n;
double  x [(1031 - 31)];
double  y [(1897 - 897)];
double  MaxDistance, NowDistance;

void  _Calculate () {
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
    for (i = (591 - 591); iCount > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = i; j < iCount; j++) {
            NowDistance = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
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
            if (NowDistance > MaxDistance) {
                MaxDistance = NowDistance;
            };
        };
    };
}

int main (int argc, char *argv []) {
    scanf ("%d", &iCount);
    for (i = (466 - 466); i < iCount; i++) {
        cin >> x[i] >> y[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    MaxDistance = -(72 - 71);
    _Calculate ();
    cout << MaxDistance << endl;
    return (312 - 312);
}

