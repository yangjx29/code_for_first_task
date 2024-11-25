int tian [1010], qi [1010], n;

int main () {
    int TI9cXCA;
    int i;
    int Ns0e8qHP;
    int headt;
    int tailt;
    int headq;
    int uRWUrJA;
    int ans;
    TI9cXCA = 0;
    while (in (n) && n) {
        tailt = uRWUrJA = n;
        for (i = 0; i < n; i = i + 1)
            in (tian[i]);
        for (i = 0; i < n; i = i + 1)
            in (qi[i]);
        sort (tian, tian + n);
        headt = headq = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        ans = 0;
        sort (qi, qi + n);
        while (!(tailt == headt)) {
            if (tian[headt] < qi[headq]) {
                uRWUrJA = uRWUrJA - 1;
                headt = headt + 1;
                ans = ans - 1;
                continue;
            }
            if (qi[headq] < tian[headt]) {
                headq = headq + 1;
                ans = ans + 1;
                headt = headt + 1;
                continue;
            }
            if (tian[tailt - 1] > qi[uRWUrJA - 1]) {
                uRWUrJA = uRWUrJA - 1;
                tailt--;
                ans = ans + 1;
                continue;
            }
            if (tian[tailt - 1] < qi[uRWUrJA - 1]) {
                ans--;
                headt = headt + 1;
                uRWUrJA = uRWUrJA - 1;
                continue;
            }
            if (tian[headt] < qi[uRWUrJA - 1])
                ans--;
            uRWUrJA--;
            headt = headt + 1;
        }
        printf ("%d\n", ans * 200);
    };
}

