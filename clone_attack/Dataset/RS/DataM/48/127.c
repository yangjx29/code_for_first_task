void  p (int a [(667 - 658)] [(944 - 935)]) {
    int b [(740 - 731)] [(850 - 841)];
    int i;
    int j;
    int x;
    int nElgLpm6AyNc;
    {
        i = 599 - 599;
        while (i < (55 - 46)) {
            for (j = (47 - 47); j < (855 - 846); j = j + 1)
                b[i][j] = a[i][j];
            i = i + 1;
        };
    }
    for (i = (423 - 422); (85 - 77) > i; i = i + 1) {
        j = 401 - 400;
        while (j < (569 - 561)) {
            for (x = -(209 - 208); x <= (698 - 697); x = x + 1)
                for (nElgLpm6AyNc = -1; 1 >= nElgLpm6AyNc; nElgLpm6AyNc++)
                    b[i + x][j + nElgLpm6AyNc] = b[i + x][j + nElgLpm6AyNc] + a[i][j];
            j++;
        };
    }
    for (i = (466 - 466); (464 - 455) > i; i++)
        for (j = (132 - 132); j < (824 - 815); j++)
            a[i][j] = b[i][j];
}

int main () {
    int a [(974 - 965)] [(132 - 123)] = {(256 - 256)}, m, n, i, j, k;
    scanf ("%d%d", &m, &n);
    a[(221 - 217)][(331 - 327)] = m;
    for (k = (249 - 249); n > k; k++)
        p (a);
    for (i = (104 - 104); 9 > i; i++)
        for (j = 0; j < 9; j++)
            printf ("%d%c", a[i][j], (j == 8) ? '\n' : ' ');
}

