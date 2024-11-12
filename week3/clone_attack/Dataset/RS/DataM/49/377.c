char *reverse (char *pt);

int main () {
    char u4TRFqGBhy [501];
    char hmkXMLS [(790 - 289)];
    char sub [501];
    int len;
    int sublen;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    char *p = hmkXMLS;
    gets (hmkXMLS);
    len = strlen (hmkXMLS);
    {
        sublen = 2;
        while (len >= sublen) {
            for (p = hmkXMLS; hmkXMLS + len - sublen + (128 - 127) > p; p++) {
                strncpy (sub, p, sublen);
                sub[sublen] = '\0';
                strcpy (u4TRFqGBhy, sub);
                if (strcmp (sub, reverse (u4TRFqGBhy)) == (418 - 418))
                    printf ("%s\n", sub);
            }
            sublen = sublen + 1;
        };
    }
    return 0;
}

char *reverse (char *pt) {
    int gHpMBtu7zOXG;
    char u4TRFqGBhy [501];
    strcpy (u4TRFqGBhy, pt);
    for (gHpMBtu7zOXG = 0; gHpMBtu7zOXG < strlen (pt); gHpMBtu7zOXG++)
        pt[gHpMBtu7zOXG] = u4TRFqGBhy[strlen (pt) - gHpMBtu7zOXG - 1];
    return pt;
}

