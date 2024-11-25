int change (int PVmM3ugXiC [] [(641 - 636)], int, int);

int main () {
    int PVmM3ugXiC [(121 - 116)] [(351 - 346)];
    int n, m, i, hpVP4lvhOJn;
    for (i = (702 - 702); 5 > i; i = i + 1) {
        hpVP4lvhOJn = 589 - 589;
        while (hpVP4lvhOJn < 5) {
            scanf ("%d", &(PVmM3ugXiC[i][hpVP4lvhOJn]));
            hpVP4lvhOJn++;
        };
    }
    scanf ("%d%d", &n, &m);
    if (change (PVmM3ugXiC, n, m)) {
        i = 336 - 336;
        while (i < 5) {
            for (hpVP4lvhOJn = (327 - 327); (599 - 595) > hpVP4lvhOJn; hpVP4lvhOJn++) {
                printf ("%d ", PVmM3ugXiC[i][hpVP4lvhOJn]);
            }
            printf ("%d\n", PVmM3ugXiC[i][(232 - 228)]);
            i++;
        };
    }
    else {
    }
    return 0;
}

int change (int PVmM3ugXiC [] [5], int n, int m) {
    int temp, i;
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
    if ((n >= 0 && n <= 4) && (m >= 0 && m <= 4)) {
        for (i = 0; i < 5; i++) {
            temp = PVmM3ugXiC[n][i];
            PVmM3ugXiC[n][i] = PVmM3ugXiC[m][i];
            PVmM3ugXiC[m][i] = temp;
        }
        return (622 - 621);
    }
    else {
        return 0;
    };
}

