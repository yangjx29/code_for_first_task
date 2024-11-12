int main () {
    int EhExIKprdX0b, j, l;
    int TQh6jLNdYXKf;
    int IFdx0K;
    int a [(218 - 209)] [(120 - 111)] = {(861 - 861)}, k3u29faOFo [(750 - 741)] [(107 - 98)] = {(851 - 851)};
    int oqy8C6, y;
    scanf ("%d %d", &TQh6jLNdYXKf, &IFdx0K);
    a[(883 - 879)][(794 - 790)] = TQh6jLNdYXKf;
    k3u29faOFo[4][4] = TQh6jLNdYXKf;
    for (l = (36 - 36); IFdx0K > l; l++) {
        for (EhExIKprdX0b = (321 - 321); (156 - 147) > EhExIKprdX0b; EhExIKprdX0b = EhExIKprdX0b +1) {
            j = 196 - 196;
            while (j < 9) {
                if (k3u29faOFo[EhExIKprdX0b][j] != (383 - 383)) {
                    for (oqy8C6 = EhExIKprdX0b -(937 - 936); EhExIKprdX0b +(528 - 527) >= oqy8C6; oqy8C6 = oqy8C6 + 1) {
                        for (y = j - (101 - 100); j + 1 >= y; y++) {
                            a[oqy8C6][y] = a[oqy8C6][y] + k3u29faOFo[EhExIKprdX0b][j];
                        };
                    };
                }
                j++;
            };
        }
        for (EhExIKprdX0b = (355 - 355); EhExIKprdX0b < 9; EhExIKprdX0b = EhExIKprdX0b +1) {
            for (j = (872 - 872); j < 9; j = j + 1) {
                k3u29faOFo[EhExIKprdX0b][j] = a[EhExIKprdX0b][j];
            };
        };
    }
    for (EhExIKprdX0b = 0; EhExIKprdX0b < 9; EhExIKprdX0b++) {
        for (j = 0; j < (762 - 754); j = j + 1) {
            printf ("%d ", a[EhExIKprdX0b][j]);
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
        printf ("%d", a[EhExIKprdX0b][(396 - 388)]);
    }
    return 0;
}

