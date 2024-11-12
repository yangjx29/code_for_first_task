int main () {
    char nPyR7g [80];
    gets (nPyR7g);
    int i;
    char RaucMhF [80];
    gets (RaucMhF);
    for (i = 0; nPyR7g[i] != '\0'; i = i + 1) {
        if (97 <= nPyR7g[i] && nPyR7g[i] <= 122)
            nPyR7g[i] = nPyR7g[i] - 32;
        if (RaucMhF[i] >= 97 && RaucMhF[i] <= 122)
            RaucMhF[i] = RaucMhF[i] - 32;
    }
    if (strcmp (nPyR7g, RaucMhF) == 0)
        ;
    if (strcmp (nPyR7g, RaucMhF) < 0)
        ;
    if (strcmp (nPyR7g, RaucMhF) > 0)
        ;
    return 0;
}

