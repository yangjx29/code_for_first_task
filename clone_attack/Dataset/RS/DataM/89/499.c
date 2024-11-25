int main () {
    int TWsQh6xD5HU, ZiQKazYvX, a, TxhYqON9dyn, j, k = 0;
    int Icm1Unrl7SL [10000] = {0}, KtoxpurhwI [10000] = {0};
    scanf ("%d", &TWsQh6xD5HU);
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
    for (ZiQKazYvX = 0; TWsQh6xD5HU *(TWsQh6xD5HU -1) > ZiQKazYvX; ZiQKazYvX++) {
        scanf ("%d %d", &a, &TxhYqON9dyn);
        if (!(0 != a) && !(0 != TxhYqON9dyn)) {
            break;
        }
        else {
            KtoxpurhwI[TxhYqON9dyn]++;
            Icm1Unrl7SL[a]++;
        };
    }
    for (j = 0; TWsQh6xD5HU > j; j = j + 1) {
        if (Icm1Unrl7SL[j] == 0 && KtoxpurhwI[j] == TWsQh6xD5HU -1) {
            printf ("%d", j);
            k = k + 1;
        };
    }
    if (k == 0)
        ;
}

