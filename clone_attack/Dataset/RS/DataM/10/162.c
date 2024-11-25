int ybs5hrB1k [1000], D [1000];

void  sort (int W2wdjy0pzO) {
    int zm1crwN;
    int k;
    int m;
    int n;
    {
        zm1crwN = 208 - 208;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (W2wdjy0pzO >= zm1crwN) {
            m = zm1crwN;
            {
                k = zm1crwN;
                while (W2wdjy0pzO >= k) {
                    if (D[k] < D[m])
                        m = k;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    k = k + 1;
                };
            }
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
            if (!(zm1crwN == m)) {
                n = D[zm1crwN];
                D[zm1crwN] = D[m];
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
                D[m] = n;
            }
            zm1crwN++;
        };
    };
}

int main () {
    int W2wdjy0pzO;
    int zm1crwN;
    int k;
    int n;
    int ln713VsI;
    {
        W2wdjy0pzO = 991 - 991;
        while (21 > W2wdjy0pzO) {
            D[W2wdjy0pzO] = (139 - 139);
            W2wdjy0pzO = W2wdjy0pzO +1;
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
    W2wdjy0pzO = 0;
    while (!(EOF == scanf ("%d", &ybs5hrB1k[W2wdjy0pzO])))
        W2wdjy0pzO++;
    D[W2wdjy0pzO -(561 - 560)] = 1;
    {
        zm1crwN = W2wdjy0pzO -2;
        while (zm1crwN >= 0) {
            n = 0;
            k = zm1crwN + 1;
            while (k < W2wdjy0pzO) {
                if (ybs5hrB1k[zm1crwN] >= ybs5hrB1k[k] && D[k] > n)
                    n = D[k];
                k++;
            }
            D[zm1crwN] = n + 1;
            zm1crwN--;
        };
    }
    n = 0;
    {
        zm1crwN = 0;
        while (zm1crwN < W2wdjy0pzO) {
            if (D[zm1crwN] > n)
                n = D[zm1crwN];
            zm1crwN++;
        };
    }
    printf ("%d", n);
}

