char *reverse (char *pt);

int main () {
    int sublen;
    int len;
    char term [501];
    char sub [501];
    char source [501];
    char *iNiLah6KUe = source;
    gets (source);
    len = strlen (source);
    for (sublen = 2; len >= sublen; sublen = sublen + 1) {
        for (iNiLah6KUe = source; iNiLah6KUe < source + len - sublen + (956 - 955); iNiLah6KUe++) {
            strncpy (sub, iNiLah6KUe, sublen);
            *(sub + sublen) = '\0';
            strcpy (term, sub);
            if (strcmp (sub, reverse (term)) == 0)
                printf ("%s\n", sub);
        };
    }
    return 0;
}

char *reverse (char *pt) {
    int i;
    char term [501];
    strcpy (term, pt);
    for (i = 0; i < strlen (pt); i++)
        *(pt + i) = *(term + strlen (pt) - i - 1);
    return pt;
}

