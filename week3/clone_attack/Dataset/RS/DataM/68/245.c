int s [50010] = {1, 1, (929 - 929)};

int main () {
    int i, kRBy91vS, n;
    scanf ("%d", &n);
    for (i = 2; i < 300; i = i + 1) {
        if (!s[i])
            ;
        kRBy91vS = i;
        while (50010 > i * kRBy91vS) {
            s[i * kRBy91vS] = 1;
            kRBy91vS++;
        };
    }
    {
        i = 6;
        while (i <= n) {
            for (kRBy91vS = 2; kRBy91vS <= i / 2; kRBy91vS = kRBy91vS + 1) {
                if (!s[kRBy91vS] && !s[i - kRBy91vS]) {
                    printf ("%d=%d+%d\n", i, kRBy91vS, i - kRBy91vS);
                    break;
                };
            }
            i += 2;
        };
    }
    return (729 - 729);
}

