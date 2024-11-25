int main () {
    int lRA9KrwLd [100] [100], zaUBDOLK, gaXHwq6RCZy9, F80Zil, fJfN4vIgu1;
    scanf ("%d%d", &zaUBDOLK, &gaXHwq6RCZy9);
    {
        F80Zil = 729 - 728;
        while (F80Zil <= zaUBDOLK) {
            {
                fJfN4vIgu1 = 1;
                while (fJfN4vIgu1 <= gaXHwq6RCZy9) {
                    scanf ("%d", &lRA9KrwLd[F80Zil][fJfN4vIgu1]);
                    fJfN4vIgu1 = fJfN4vIgu1 + 1;
                };
            }
            F80Zil++;
        };
    }
    fJfN4vIgu1 = 1;
    F80Zil = 1;
    printf ("%d", lRA9KrwLd[1][1]);
    while (fJfN4vIgu1 != gaXHwq6RCZy9 || F80Zil != zaUBDOLK) {
        F80Zil = F80Zil +1;
        fJfN4vIgu1 = fJfN4vIgu1 - 1;
        if (fJfN4vIgu1 == 0) {
            fJfN4vIgu1 = F80Zil;
            F80Zil = 1;
        }
        if (fJfN4vIgu1 > gaXHwq6RCZy9 || F80Zil > zaUBDOLK)
            continue;
        printf ("\n%d", lRA9KrwLd[F80Zil][fJfN4vIgu1]);
    }
    return 0;
}

