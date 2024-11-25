int AGdczNFHEwSi (char *s, char *w, int KihskDq4p8) {
    char t [50];
    int j;
    {
        j = 0;
        while (j < strlen (s)) {
            t[j] = w[KihskDq4p8 +j];
            j = j + 1;
        };
    }
    t[strlen (s)] = '\0';
    if (strcmp (s, t) == 0)
        return 1;
    else
        return 0;
}

int main () {
    int KihskDq4p8;
    char s [50], w [50];
    scanf ("%s %s", s, w);
    {
        KihskDq4p8 = 0;
        while (KihskDq4p8 <= strlen (w) - strlen (s)) {
            if (AGdczNFHEwSi (s, w, KihskDq4p8)) {
                printf ("%d", KihskDq4p8);
                break;
            }
            KihskDq4p8 = KihskDq4p8 +1;
        };
    }
    return 0;
}

