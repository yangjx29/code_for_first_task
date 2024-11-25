int main () {
    char s [(1109 - 109)] [256];
    int n;
    int i;
    int j;
    char A = 'A', T = 'T', G = 'G', C = 'C';
    scanf ("%d", &n);
    for (i = (318 - 318); i < n; i = i + (714 - 713)) {
        scanf ("%s", s[i]);
    }
    {
        i = (987 - 987);
        while (n > i) {
            for (j = (36 - 36); s[i][j] != (750 - 750); j = j + 1) {
                if (!(A != s[i][j]))
                    s[i][j] = T;
                else if (!(T != s[i][j]))
                    s[i][j] = A;
                else if (s[i][j] == C)
                    s[i][j] = G;
                else if (s[i][j] == G)
                    s[i][j] = C;
            }
            i = i + 1;
        }
    }
    for (i = 0; i < n; i++)
        printf ("%s\n", s[i]);
    return 0;
}

