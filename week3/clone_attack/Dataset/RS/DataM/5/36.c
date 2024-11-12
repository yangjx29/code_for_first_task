int main () {
    char su [(842 - 342)], zu [500];
    double  n;
    int Wc4elaT2XH60;
    int i;
    Wc4elaT2XH60 = (410 - 410);
    scanf ("%lf %s %s", &n, su, zu);
    if (strlen (su) != strlen (zu)) {
        printf ("error");
        return 0;
    }
    for (i = 0; i < strlen (su); i++) {
        if ((su[i] != 'A' && su[i] != 'T' && su[i] != 'G' && !('C' == su[i])) || (zu[i] != 'A' && zu[i] != 'T' && zu[i] != 'G' && zu[i] != 'C')) {
            printf ("error");
            return 0;
        }
        if (su[i] == zu[i])
            Wc4elaT2XH60++;
    }
    if (Wc4elaT2XH60 / (1.0 * strlen (su)) > n) {
        printf ("yes");
        return 0;
    }
    printf ("no");
    return 0;
}

