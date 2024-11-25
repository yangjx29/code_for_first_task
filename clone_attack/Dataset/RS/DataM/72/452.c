int main () {
    int c;
    int i;
    int j;
    int n;
    int zNpH0ZUo;
    int CLgXqp;
    c = -(249 - 248);
    int sz [N +2] [N +2] = {0}, W5ugyEo2OWA6 [N *N], Hj [N *N];
    scanf ("%d %d", &zNpH0ZUo, &n);
    for (i = 1; zNpH0ZUo >= i; i = i + 1) {
        for (j = 1; n >= j; j = j + 1) {
            scanf ("%d", &sz[i][j]);
        };
    }
    for (i = 1; zNpH0ZUo >= i; i = i + 1) {
        for (j = 1; n >= j; j = j + 1) {
            if (sz[i][j] >= sz[i + 1][j] && sz[i][j] >= sz[i - 1][j] && sz[i][j] >= sz[i][j + 1] && sz[i][j] >= sz[i][j - 1]) {
                c = c + 1;
                W5ugyEo2OWA6[c] = i - 1;
                Hj[c] = j - 1;
            };
        };
    }
    for (CLgXqp = 0; CLgXqp < c; CLgXqp = CLgXqp +1) {
        printf ("%d %d\n", W5ugyEo2OWA6[CLgXqp], Hj[CLgXqp]);
    }
    printf ("%d %d", W5ugyEo2OWA6[c], Hj[c]);
    return 0;
}

