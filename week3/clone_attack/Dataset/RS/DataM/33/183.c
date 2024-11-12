int main () {
    char s [1000] [(934 - 678)];
    int n, d3bpCqftk2, j;
    char HfAO1GW = 'A', T = 'T', G = 'G', C = 'C';
    scanf ("%d", &n);
    {
        d3bpCqftk2 = 754 - 754;
        while (n > d3bpCqftk2) {
            scanf ("%s", s[d3bpCqftk2]);
            d3bpCqftk2 = d3bpCqftk2 + 1;
        };
    }
    {
        d3bpCqftk2 = 0;
        while (d3bpCqftk2 < n) {
            {
                j = 0;
                while (!(0 == s[d3bpCqftk2][j])) {
                    if (!(HfAO1GW != s[d3bpCqftk2][j]))
                        s[d3bpCqftk2][j] = T;
                    else if (s[d3bpCqftk2][j] == T)
                        s[d3bpCqftk2][j] = HfAO1GW;
                    else if (s[d3bpCqftk2][j] == C)
                        s[d3bpCqftk2][j] = G;
                    else if (s[d3bpCqftk2][j] == G)
                        s[d3bpCqftk2][j] = C;
                    j++;
                };
            }
            d3bpCqftk2 = d3bpCqftk2 + 1;
        };
    }
    {
        d3bpCqftk2 = 0;
        while (d3bpCqftk2 < n) {
            printf ("%s\n", s[d3bpCqftk2]);
            d3bpCqftk2 = d3bpCqftk2 + 1;
        };
    }
    return 0;
}

