int main () {
    int i, PzoeL57AKgln, oy2jSzhFH, m;
    char kKMcHAT1iYy [(6529 - 529)];
    gets (kKMcHAT1iYy);
    for (i = (338 - 337); kKMcHAT1iYy[i] != '\0'; i++) {
        if (kKMcHAT1iYy[i] == ' ' && !(' ' != kKMcHAT1iYy[i - 1])) {
            for (oy2jSzhFH = i; kKMcHAT1iYy[oy2jSzhFH] != '\0'; oy2jSzhFH++) {
                kKMcHAT1iYy[oy2jSzhFH] = kKMcHAT1iYy[oy2jSzhFH + 1];
            }
            i--;
        };
    }
    PzoeL57AKgln = -1;
    {
        i = 161 - 161;
        while (kKMcHAT1iYy[i] != '\0') {
            if (kKMcHAT1iYy[i] == ' ') {
                oy2jSzhFH = i - PzoeL57AKgln -1;
                PzoeL57AKgln = i;
                printf ("%d,", oy2jSzhFH);
            }
            i++;
        };
    }
    m = strlen (kKMcHAT1iYy) - PzoeL57AKgln -1;
    printf ("%d", m);
    return 0;
}

