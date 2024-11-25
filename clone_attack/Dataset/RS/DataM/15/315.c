int main (int O0vbTLj, char *argv []) {
    int p [(1912 - 912)] [1000];
    int n, i, j, Y014jZWkP2xH, b, s;
    Y014jZWkP2xH = 4;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        {
            j = 0;
            while (n - (365 - 364) > j) {
                scanf ("%d ", &p[i][j]);
                if (p[i][j] == 0) {
                    Y014jZWkP2xH = Y014jZWkP2xH +1;
                }
                else
                    Y014jZWkP2xH = Y014jZWkP2xH;
                j = j + 1;
            };
        }
        scanf ("%d\n", &p[i][n - 1]);
    }
    b = Y014jZWkP2xH / 4;
    s = (b - 2) * (b - 2);
    printf ("%d", s);
    return 0;
}

