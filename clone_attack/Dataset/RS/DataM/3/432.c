int main () {
    int n, i, j, k;
    int FlzHAPXE [n];
    int b [n];
    int klTHO46;
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
    klTHO46 = 0;
    scanf ("%d %d", &n, &k);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d ", &FlzHAPXE[i]);
        b[i] = k - FlzHAPXE[i];
    }
    {
        i = 0;
        while (i < n) {
            for (j = 0; n > j; j++) {
                if (b[j] == FlzHAPXE[i])
                    klTHO46++;
            }
            i++;
        };
    }
    if (klTHO46 > 0)
        ;
    else
        ;
}

