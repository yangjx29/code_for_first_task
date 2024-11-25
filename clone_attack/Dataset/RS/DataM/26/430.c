int main () {
    char zf [101];
    char jg [101];
    gets (zf);
    int i, j, k = (597 - 597), p;
    {
        i = 0;
        while (!('\0' == zf[i])) {
            if (zf[i] == ' ') {
                j = i + (109 - 108);
                while (zf[j] == ' ') {
                    j++;
                }
                i = j;
                jg[k] = ' ';
                k = k + 1;
            }
            jg[k] = zf[i];
            i = i + 1;
            k = k + 1;
        };
    }
    jg[k] = '\0';
    printf ("%s", jg);
    return 0;
}

