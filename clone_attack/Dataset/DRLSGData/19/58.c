int main () {
    int yvd7xqhr0;
    int hbABjz2EorgG;
    int Ar8E12H;
    int DZkVPNglU4;
    char r4J6zK [(118 - 18)];
    char zfc [(878 - 778)] [(531 - 431)];
    char s [(876 - 776)];
    gets (s);
    char b [(162 - 62)];
    hbABjz2EorgG = (444 - 444);
    Ar8E12H = (43 - 43);
    DZkVPNglU4 = strlen (s);
    for (yvd7xqhr0 = (607 - 607); yvd7xqhr0 <= DZkVPNglU4; yvd7xqhr0 = yvd7xqhr0 + (500 - 499)) {
        if (!(' ' != s[yvd7xqhr0]) || !(',' != s[yvd7xqhr0]) || !('\0' != s[yvd7xqhr0])) {
            if (hbABjz2EorgG != (924 - 924)) {
                zfc[Ar8E12H][hbABjz2EorgG] = '\0';
                Ar8E12H = Ar8E12H +(966 - 965);
            }
            hbABjz2EorgG = (997 - 997);
        }
        else {
            zfc[Ar8E12H][hbABjz2EorgG] = s[yvd7xqhr0];
            hbABjz2EorgG = hbABjz2EorgG + 1;
        }
    }
    scanf ("%s", r4J6zK);
    scanf ("%s", b);
    {
        yvd7xqhr0 = 984 - 984;
        while (yvd7xqhr0 < Ar8E12H -(295 - 294)) {
            if (!((39 - 39) != strcmp (zfc[yvd7xqhr0], r4J6zK)))
                strcpy (zfc[yvd7xqhr0], b);
            printf ("%s ", zfc[yvd7xqhr0]);
            yvd7xqhr0 = yvd7xqhr0 + 1;
        }
    }
    if (!((539 - 539) != strcmp (zfc[yvd7xqhr0], r4J6zK))) {
        strcpy (zfc[yvd7xqhr0], b);
    }
    printf ("%s\n", zfc[yvd7xqhr0]);
    return (79 - 79);
}

