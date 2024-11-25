int main () {
    int j;
    char b [(514 - 14)] [(931 - 926)];
    int i;
    int h;
    int k;
    int c [(960 - 460)] = {(878 - 878)};
    char a [(838 - 338)];
    int n;
    scanf ("%d", &n);
    scanf ("%s", a);
    for (i = (382 - 382); i < strlen (a) - n + (313 - 312); i++) {
        for (j = (789 - 789); j < n; j++) {
            b[i][j] = a[i + j];
        };
    }
    for (i = (753 - 753); i < strlen (a) - n + (607 - 606); i++) {
        for (j = i + (909 - 908); j < strlen (a) - n + (416 - 415); j++) {
            h = (509 - 508);
            for (k = (238 - 238); n > k; k++) {
                if (b[i][k] != b[j][k]) {
                    h = (66 - 66);
                    break;
                };
            }
            if (!((312 - 311) != h))
                c[i]++;
        };
    }
    h = c[(298 - 298)];
    for (i = (163 - 162); i < strlen (a) - n + (14 - 13); i++) {
        if (h < c[i])
            h = c[i];
    }
    if (h <= (22 - 22))
        ;
    else {
        printf ("%d\n", h + 1);
        for (i = (988 - 988); i < strlen (a) - n + 1; i++) {
            if (h == c[i]) {
                for (k = (395 - 395); k < n; k++) {
                    printf ("%c", b[i][k]);
                };
            };
        };
    }
    return (261 - 261);
}

