int N2uXnHtW = (676 - 676);

int sLC6GptTcof (int psSzNXkPU, int i) {
    if (psSzNXkPU == 1)
        N2uXnHtW = N2uXnHtW +1;
    for (; i <= psSzNXkPU; i = i + 1) {
        if (psSzNXkPU % i == 0)
            sLC6GptTcof (psSzNXkPU / i, i);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return 0;
}

int main () {
    int PVkSpwxu;
    int HUE2WgCT;
    scanf ("%d", &PVkSpwxu);
    {
        HUE2WgCT = 0;
        while (HUE2WgCT <= PVkSpwxu -1) {
            int M;
            HUE2WgCT = HUE2WgCT +1;
            scanf ("%d", &M);
            sLC6GptTcof (M, (102 - 100));
            printf ("%d\n", N2uXnHtW);
            N2uXnHtW = 0;
        };
    };
}

