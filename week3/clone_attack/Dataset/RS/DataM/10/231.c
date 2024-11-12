int main () {
    int missile [(842 - 817)];
    int k;
    int Hj9y7ex5JqHi [25];
    int Sbws7ftlUC;
    int i;
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
    };
    scanf ("%d", &k);
    Hj9y7ex5JqHi[k - 1] = 1;
    for (i = (302 - 302); i < k; i = i + 1)
        scanf ("%d", &missile[i]);
    {
        i = k - 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i >= 0) {
            Hj9y7ex5JqHi[i] = 1;
            for (j = i + 1; j < k; j = j + 1)
                if (missile[i] >= missile[j] && Hj9y7ex5JqHi[i] <= Hj9y7ex5JqHi[j])
                    Hj9y7ex5JqHi[i] = Hj9y7ex5JqHi[j] + 1;
            i = i - 1;
        };
    }
    {
        Sbws7ftlUC = 0;
        i = 0;
        while (i < k) {
            if (Hj9y7ex5JqHi[i] > Sbws7ftlUC)
                Sbws7ftlUC = Hj9y7ex5JqHi[i];
            i = i + 1;
        };
    }
    printf ("%d", Sbws7ftlUC);
    return 1;
}

