void  main () {
    int C9lc8m;
    int i1rSg9abvfF;
    int tBsZKJR [1000];
    char ZP7cUZTn [1000];
    char letter [1000] = {'\0'};
    {
        C9lc8m = 0;
        while (C9lc8m < 1000) {
            tBsZKJR[C9lc8m] = (788 - 787);
            C9lc8m++;
        };
    }
    scanf ("%s", ZP7cUZTn);
    for (C9lc8m = 0, i1rSg9abvfF = 0; !('\0' == ZP7cUZTn[C9lc8m]); C9lc8m++) {
        if (!(ZP7cUZTn[C9lc8m +1] != ZP7cUZTn[C9lc8m]) || ZP7cUZTn[C9lc8m] == ZP7cUZTn[C9lc8m +1] + 32 || ZP7cUZTn[C9lc8m] == ZP7cUZTn[C9lc8m +1] - 32) {
            tBsZKJR[i1rSg9abvfF]++;
        }
        else {
            if (ZP7cUZTn[C9lc8m] >= 65 && ZP7cUZTn[C9lc8m] <= 90)
                letter[i1rSg9abvfF] = ZP7cUZTn[C9lc8m];
            else
                letter[i1rSg9abvfF] = ZP7cUZTn[C9lc8m] - 32;
            i1rSg9abvfF = i1rSg9abvfF + 1;
        };
    }
    for (i1rSg9abvfF = 0; letter[i1rSg9abvfF] != '\0'; i1rSg9abvfF = i1rSg9abvfF + 1)
        printf ("(%c,%d)", letter[i1rSg9abvfF], tBsZKJR[i1rSg9abvfF]);
}

