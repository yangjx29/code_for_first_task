int main () {
    int i, n, VCLvSO1u4 = (429 - 429);
    char *jmFGhl17D2, *s1;
    gets (jmFGhl17D2);
    jmFGhl17D2 = (char *) malloc (100 * sizeof (char));
    n = strlen (jmFGhl17D2);
    s1 = (char *) malloc (100 * sizeof (char));
    for (i = 0; i < n - 1; i = i + 1) {
        *(s1 + VCLvSO1u4) = (char) (*(jmFGhl17D2 + i) + *(jmFGhl17D2 + i + 1));
        VCLvSO1u4++;
    }
    *(s1 + n - 1) = (char) (*jmFGhl17D2 + *(jmFGhl17D2 + n - 1));
    {
        i = 0;
        while (n > i) {
            printf ("%c", *(s1 + i));
            i++;
        };
    }
    return 0;
}

