int main () {
    int jg [100];
    int p5OkoNMi76F [200] [2];
    int n;
    int i;
    int j;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        {
            j = 0;
            while (j < 2) {
                scanf ("%d", &p5OkoNMi76F[i][j]);
                j++;
            };
        }
        jg[i] = p5OkoNMi76F[i][1] * 100 / p5OkoNMi76F[i][0];
    }
    {
        i = 1;
        while (i < n) {
            if (jg[i] - jg[0] >= 5)
                printf ("better\n");
            else if (jg[0] - jg[i] >= 5)
                printf ("worse\n");
            else
                ;
            i++;
        };
    }
    return 0;
}

