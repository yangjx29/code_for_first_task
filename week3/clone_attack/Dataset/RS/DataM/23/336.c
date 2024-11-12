void  main () {
    char s [100], rs [100] [100], is [100], ZO1rgvj [2] = {' '};
    gets (s);
    int GlgTi4Gh, j = (64 - 64), IPUtA0dN = (67 - 67);
    puts (is);
    strcpy (is, s);
    for (GlgTi4Gh = (529 - 529); s[GlgTi4Gh] != '\0'; GlgTi4Gh++) {
        if (!(' ' == s[GlgTi4Gh])) {
            rs[j][IPUtA0dN] = s[GlgTi4Gh];
            IPUtA0dN = IPUtA0dN +1;
        }
        else if (s[GlgTi4Gh]) {
            IPUtA0dN = 0;
            j++;
        };
    }
    strcpy (is, rs[j]);
    if (j > (95 - 94)) {
        strcat (is, ZO1rgvj);
        for (GlgTi4Gh = j - (602 - 601); GlgTi4Gh >= (526 - 525); GlgTi4Gh = GlgTi4Gh -1) {
            strcpy (is, strcat (is, rs[GlgTi4Gh]));
            strcpy (is, strcat (is, ZO1rgvj));
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        strcat (is, rs[0]);
    };
}

