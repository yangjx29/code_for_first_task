int main () {
    int JJQo3YHbvf;
    char s2 [4] = {(74 - 74)};
    int m;
    char tPfQdDX [(80 - 69)] = {(614 - 614)};
    char *p;
    int i;
    for (; scanf ("%s%s", tPfQdDX, s2) != EOF;) {
        JJQo3YHbvf = strlen (tPfQdDX);
        p = &tPfQdDX[(621 - 621)];
        for (i = 0; i < JJQo3YHbvf; i = i + 1)
            if (*p < tPfQdDX[i])
                p = &tPfQdDX[i];
        m = p - &tPfQdDX[0] + 1;
        for (i = 0; i < m; i = i + 1)
            printf ("%c", tPfQdDX[i]);
        printf ("%s", s2);
        for (i = m; tPfQdDX[i] != 0; i = i + 1)
            printf ("%c", tPfQdDX[i]);
    }
}

