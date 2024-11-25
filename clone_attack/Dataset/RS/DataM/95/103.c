int main (int BmNsapkeA, char *Brz0MaLf []) {
    char Vezjdxol2s7 [80];
    char m [80];
    gets (Vezjdxol2s7);
    gets (m);
    int jl1mJjwV, gEP4DKdplT7I, DDrqdxpEXg2, EhvJeW = 0;
    jl1mJjwV = strlen (Vezjdxol2s7);
    for (DDrqdxpEXg2 = 0; Vezjdxol2s7[DDrqdxpEXg2] != '\0'; DDrqdxpEXg2++) {
        if (Vezjdxol2s7[DDrqdxpEXg2] >= 'A' && Vezjdxol2s7[DDrqdxpEXg2] <= 'Z') {
            Vezjdxol2s7[DDrqdxpEXg2] = Vezjdxol2s7[DDrqdxpEXg2] + 32;
        };
    }
    for (DDrqdxpEXg2 = 0; !('\0' == m[DDrqdxpEXg2]); DDrqdxpEXg2++) {
        if (m[DDrqdxpEXg2] >= 'A' && m[DDrqdxpEXg2] <= 'Z') {
            m[DDrqdxpEXg2] = m[DDrqdxpEXg2] + 32;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (DDrqdxpEXg2 = 0; Vezjdxol2s7[DDrqdxpEXg2] != '\0'; DDrqdxpEXg2++) {
        if (Vezjdxol2s7[DDrqdxpEXg2] == m[DDrqdxpEXg2])
            EhvJeW++;
        if (Vezjdxol2s7[DDrqdxpEXg2] > m[DDrqdxpEXg2]) {
            break;
            printf (">\n");
        }
        if (Vezjdxol2s7[DDrqdxpEXg2] < m[DDrqdxpEXg2]) {
            break;
            printf ("<\n");
        };
    }
    if (EhvJeW == jl1mJjwV)
        ;
    return 0;
}

