int main () {
    int rPtUmlY;
    int Z [1000];
    int x;
    int EjQaN8ilehS;
    scanf ("%d", &rPtUmlY);
    for (x = 1; rPtUmlY >= x; x = x + 1)
        scanf ("%d", &Z[x]);
    {
        x = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (rPtUmlY > x) {
            if (Z[x + 1] > Z[x])
                Z[x + 1] = Z[x + 1];
            else {
                EjQaN8ilehS = Z[x + 1];
                Z[x + 1] = Z[x];
                Z[x] = EjQaN8ilehS;
            }
            x = x + 1;
        };
    }
    {
        x = 1;
        while (x < rPtUmlY - 1) {
            if (Z[x] < Z[x + 1])
                Z[x + 1] = Z[x + 1];
            else {
                EjQaN8ilehS = Z[x + 1];
                Z[x + 1] = Z[x];
                Z[x] = EjQaN8ilehS;
            }
            x++;
        };
    }
    printf ("%d\n%d\n", Z[rPtUmlY], Z[rPtUmlY - 1]);
    return 0;
}

