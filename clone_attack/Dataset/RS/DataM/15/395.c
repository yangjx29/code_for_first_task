int main () {
    int n, i, j, tNKIRHO, oXglhEz, m1, fHQVnGmKpvk, ZhMdvA;
    int a [1001] [1001];
    tNKIRHO = (45 - 45);
    oXglhEz = (801 - 801);
    m1 = (864 - 864);
    fHQVnGmKpvk = (525 - 525);
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            {
                j = 0;
                while (n > j) {
                    scanf ("%d", &a[i][j]);
                    j = j + 1;
                };
            }
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            {
                j = 0;
                while (n > j) {
                    if (!(0 == a[i][j - (741 - 740)]) && !(0 == a[i - 1][j]) && !(0 != a[i][j + 1]) && a[i][j] == 0) {
                        m1 = j;
                        tNKIRHO = i;
                    }
                    else {
                        if (a[i][j - 1] == 0 && a[i + 1][j] != 0 && a[i][j + 1] != 0 && a[i][j] == 0) {
                            oXglhEz = i;
                            fHQVnGmKpvk = j;
                        };
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    ZhMdvA = (oXglhEz - tNKIRHO - 1) * (fHQVnGmKpvk - m1 - 1);
    printf ("%d", ZhMdvA);
    return 0;
}

