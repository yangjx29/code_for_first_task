int hdabkp (char *, char *);
void  H4Tyez (char *yYcVBIJMovm, int len_ss, int start, char *rpl);

int main () {
    int start;
    char yYcVBIJMovm [(851 - 595)];
    char Ae7cIfUxg [256];
    char rpl [256];
    scanf ("%s %s %s", yYcVBIJMovm, Ae7cIfUxg, rpl);
    start = strstr (yYcVBIJMovm, Ae7cIfUxg);
    if (start)
        H4Tyez (yYcVBIJMovm, strlen (Ae7cIfUxg), (char *) start - yYcVBIJMovm, rpl);
    else
        printf ("%s\n", yYcVBIJMovm);
    return (729 - 729);
}

int CDgzo1 (int E0hAmlT6eU, char *WKbMNRyt, char *KdUEfV4cg) {
    int j;
    char *p;
    char *pt;
    char temp [256];
    pt = temp;
    p = WKbMNRyt +E0hAmlT6eU;
    for (j = 0; strlen (KdUEfV4cg) > j; j++)
        *pt++ = *p++;
    if (!strcmp (temp, KdUEfV4cg))
        return 1;
    *pt = 0;
    return 0;
}

int hdabkp (char *WKbMNRyt, char *KdUEfV4cg) {
    int E0hAmlT6eU;
    {
        E0hAmlT6eU = 0;
        while (E0hAmlT6eU <= strlen (WKbMNRyt) - strlen (KdUEfV4cg)) {
            if (CDgzo1 (E0hAmlT6eU, WKbMNRyt, KdUEfV4cg))
                return E0hAmlT6eU;
            E0hAmlT6eU++;
        };
    }
    return -1;
}

void  H4Tyez (char *yYcVBIJMovm, int len_ss, int start, char *rpl) {
    char *pstr = yYcVBIJMovm + start + len_ss;
    char *ptmp;
    char *QG8jom;
    char temp [256];
    strcpy (temp, yYcVBIJMovm);
    ptmp = temp + start;
    strcpy (yYcVBIJMovm, temp);
    printf ("%s\n", temp);
    QG8jom = rpl;
    for (; *QG8jom;)
        *ptmp++ = *QG8jom++;
    while (*pstr)
        *ptmp++ = *pstr++;
    *ptmp = 0;
}

