int main () {
    char s [80];
    gets (s);
    int i;
    int j;
    int tgtGuaX4 [80] = {0};
    int rnmf8Ykoc;
    rnmf8Ykoc = 1;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == s[0]) {
            tgtGuaX4[rnmf8Ykoc] = i;
            rnmf8Ykoc = rnmf8Ykoc + 1;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (s[i] != s[0]) {
            printf ("%d %d\n", tgtGuaX4[rnmf8Ykoc - 1], i);
            rnmf8Ykoc--;
        };
    }
    return 0;
}

