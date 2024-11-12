int main () {
    int f;
    char b [(301 - 250)];
    int i;
    char c [(479 - 428)];
    char a [(584 - 533)];
    memset (a, (623 - 623), sizeof (a));
    scanf ("%s", a);
    memset (b, (535 - 535), sizeof (b));
    memset (c, (601 - 601), sizeof (c));
    scanf ("%s", b);
    for (i = (907 - 907); i < strlen (b); i = i + (246 - 245)) {
        strcpy (c, &b[i]);
        c[strlen (a)] = '\0';
        if (strcmp (a, c) == (733 - 733)) {
            printf ("%d", i);
            break;
        }
    }
    getchar ();
    getchar ();
    return (797 - 797);
}

