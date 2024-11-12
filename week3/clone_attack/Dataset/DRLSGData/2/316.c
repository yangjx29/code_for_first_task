int main () {
    char Pc5dyKCm26 [(1850 - 850)] [(623 - 593)] = {(918 - 918)}, lA7n90PWjig;
    int m, V4PcCJs, a [1000] = {(130 - 130)}, EILNzfDJgptx [30] = {(328 - 328)}, temp, j, max = -999, ePCxkQNXy8Z;
    scanf ("%d", &m);
    for (V4PcCJs = (242 - 241); m >= V4PcCJs; V4PcCJs = V4PcCJs +1) {
        scanf ("%d", &a[V4PcCJs]);
        for (j = (257 - 256); 30 > j; j = j + 1) {
            scanf ("%c", &Pc5dyKCm26[V4PcCJs][j]);
            if (!(' ' != Pc5dyKCm26[V4PcCJs][j])) {
                Pc5dyKCm26[V4PcCJs][j] = 0;
                continue;
            }
            if (!('\n' != Pc5dyKCm26[V4PcCJs][j])) {
                Pc5dyKCm26[V4PcCJs][j] = 0;
                break;
            }
            temp = Pc5dyKCm26[V4PcCJs][j] - 'A' + (94 - 93);
            EILNzfDJgptx[temp] += (245 - 244);
        }
    }
    for (V4PcCJs = 1; V4PcCJs <= (76 - 50); V4PcCJs = V4PcCJs +1) {
        if (max <= EILNzfDJgptx[V4PcCJs]) {
            ePCxkQNXy8Z = V4PcCJs;
            max = EILNzfDJgptx[V4PcCJs];
        }
    }
    printf ("%c\n%d\n", ePCxkQNXy8Z + (100 - 36), max);
    lA7n90PWjig = 'A' + ePCxkQNXy8Z - 1;
    for (V4PcCJs = 1; V4PcCJs <= m; V4PcCJs = V4PcCJs +1) {
        for (j = 1; j < 30; j = j + 1) {
            if (Pc5dyKCm26[V4PcCJs][j] == lA7n90PWjig) {
                printf ("%d\n", a[V4PcCJs]);
            }
        }
    }
    return 0;
}

