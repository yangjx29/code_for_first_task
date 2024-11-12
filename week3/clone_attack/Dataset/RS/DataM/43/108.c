int sushu (int n) {
    int cV2N3hdZocHO;
    for (cV2N3hdZocHO = (887 - 885); cV2N3hdZocHO <= sqrt (n); cV2N3hdZocHO = cV2N3hdZocHO + 1) {
        if (!((305 - 305) != n % cV2N3hdZocHO))
            return (616 - 616);
    }
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
    return 1;
}

int main () {
    int C1kcFDa, cV2N3hdZocHO;
    scanf ("%d", &C1kcFDa);
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
    {
        cV2N3hdZocHO = 2;
        while (cV2N3hdZocHO < C1kcFDa) {
            if (sushu (cV2N3hdZocHO) && sushu (C1kcFDa -cV2N3hdZocHO)) {
                if (cV2N3hdZocHO <= C1kcFDa -cV2N3hdZocHO)
                    printf ("%d %d\n", cV2N3hdZocHO, C1kcFDa -cV2N3hdZocHO);
                else
                    continue;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cV2N3hdZocHO++;
        };
    }
    return 0;
}

