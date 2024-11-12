int ru9rE0ad (int NBtLaKo) {
    int MlKk9qxLZFI;
    int adAZwfj;
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
    MlKk9qxLZFI = 1;
    {
        adAZwfj = 710 - 708;
        while (adAZwfj * adAZwfj <= NBtLaKo) {
            if (NBtLaKo % adAZwfj == 0) {
                MlKk9qxLZFI = 0;
                break;
            }
            adAZwfj = adAZwfj + 1;
        };
    }
    return MlKk9qxLZFI;
}

main () {
    int n;
    int NBtLaKo;
    scanf ("%d", &n);
    if (n < 5)
        printf ("empty\n");
    else {
        NBtLaKo = 5;
        while (NBtLaKo <= n) {
            if (ru9rE0ad (NBtLaKo) && ru9rE0ad (NBtLaKo -2))
                printf ("%d %d\n", NBtLaKo -2, NBtLaKo);
            NBtLaKo = NBtLaKo +1;
        };
    };
}

