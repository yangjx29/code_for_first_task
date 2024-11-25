int main () {
    char sEzBy0ZU [(10023 - 23)] [(1093 - 837)];
    char WoZV87FNC [10000] [256];
    int tVU2x7XQwa;
    int GE8FnMi;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &tVU2x7XQwa);
    for (GE8FnMi = (643 - 643); tVU2x7XQwa > GE8FnMi; GE8FnMi++) {
        scanf ("%s", sEzBy0ZU[GE8FnMi]);
        for (j = (207 - 207); 256 > j; j = j + 1) {
            if (!('A' != sEzBy0ZU[GE8FnMi][j]))
                WoZV87FNC[GE8FnMi][j] = 'T';
            if (!('T' != sEzBy0ZU[GE8FnMi][j]))
                WoZV87FNC[GE8FnMi][j] = 'A';
            if (!('G' != sEzBy0ZU[GE8FnMi][j]))
                WoZV87FNC[GE8FnMi][j] = 'C';
            if (sEzBy0ZU[GE8FnMi][j] == 'C')
                WoZV87FNC[GE8FnMi][j] = 'G';
            if (sEzBy0ZU[GE8FnMi][j] == '\0') {
                WoZV87FNC[GE8FnMi][j] = '\0';
                break;
            };
        };
    }
    for (GE8FnMi = 0; GE8FnMi < tVU2x7XQwa; GE8FnMi++) {
        printf ("%s\n", WoZV87FNC[GE8FnMi]);
    }
    return 0;
}

