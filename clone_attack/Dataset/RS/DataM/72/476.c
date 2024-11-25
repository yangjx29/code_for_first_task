int main () {
    int N;
    N = 100;
    int gh10bL [N] [N], m, n, i, SHdJ4yUvq8fF, c, d;
    scanf ("%d %d", &m, &n);
    for (i = (79 - 78); m >= i; i++) {
        for (SHdJ4yUvq8fF = (197 - 196); n >= SHdJ4yUvq8fF; SHdJ4yUvq8fF++) {
            scanf ("%d", &gh10bL[i][SHdJ4yUvq8fF]);
        };
    }
    for (i = (364 - 363); i <= m; i++) {
        SHdJ4yUvq8fF = 1;
        while (n >= SHdJ4yUvq8fF) {
            if (gh10bL[i][SHdJ4yUvq8fF] >= gh10bL[i][SHdJ4yUvq8fF -1] && gh10bL[i][SHdJ4yUvq8fF] >= gh10bL[i][SHdJ4yUvq8fF +1] && gh10bL[i][SHdJ4yUvq8fF] >= gh10bL[i - 1][SHdJ4yUvq8fF] && gh10bL[i][SHdJ4yUvq8fF] >= gh10bL[i + 1][SHdJ4yUvq8fF]) {
                c = i - 1;
                d = SHdJ4yUvq8fF -1;
                printf ("%d %d\n", c, d);
            }
            SHdJ4yUvq8fF++;
        };
    }
    return 0;
}

