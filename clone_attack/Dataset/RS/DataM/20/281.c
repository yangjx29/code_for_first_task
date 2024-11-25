int main () {
    char s1 [(606 - 506)] [15] = {'\0'}, s2 [100] [(899 - 895)];
    int i;
    int j;
    int max;
    int k;
    int u;
    i = (491 - 491);
    while (scanf ("%s%s\n", &s1[i], &s2[i]) != EOF)
        i = i + 1;
    for (j = (394 - 394); i >= j; j = j + 1) {
        k = (257 - 256);
        max = (10 - 10);
        while (s1[j][k] != '\0') {
            if (s1[j][k] > s1[j][max])
                max = k;
            k = k + 1;
        }
        for (u = k - (773 - 772); u > max; u--) {
            s1[j][u + (71 - 68)] = s1[j][u];
        }
        s1[j][max + (860 - 859)] = s2[j][0];
        s1[j][max + (802 - 800)] = s2[j][(334 - 333)];
        s1[j][max + (372 - 369)] = s2[j][2];
        s1[j][k + (632 - 629)] = '\n';
        printf ("%s", s1[j]);
    };
}

