int MIYvrZX5Bq (int HT2qaJ4m, int ppVd4fMR) {
    if (HT2qaJ4m == (242 - 241) && ppVd4fMR == (411 - 410))
        return (310 - 309);
    if (ppVd4fMR == 0)
        return 0;
    if (HT2qaJ4m == 0)
        return (557 - 556);
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
    if (HT2qaJ4m >= 1 && ppVd4fMR >= 1 && HT2qaJ4m >= ppVd4fMR)
        return MIYvrZX5Bq (HT2qaJ4m, ppVd4fMR - 1) + MIYvrZX5Bq (HT2qaJ4m -ppVd4fMR, ppVd4fMR);
    if (HT2qaJ4m >= 1 && ppVd4fMR >= 1 && HT2qaJ4m < ppVd4fMR)
        return MIYvrZX5Bq (HT2qaJ4m, ppVd4fMR - 1);
}

int main () {
    int HT2qaJ4m, ppVd4fMR, yXos6vQkqb, upm0YbnV, n;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d", &n);
    for (upm0YbnV = 0; upm0YbnV < n; upm0YbnV = upm0YbnV + 1) {
        scanf ("%d %d", &HT2qaJ4m, &ppVd4fMR);
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
        printf ("%d\n", MIYvrZX5Bq (HT2qaJ4m, ppVd4fMR));
    };
}

