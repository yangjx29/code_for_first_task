main () {
    char s [1001];
    int uQlqfAWCdi;
    int laSR2rOb3 [(1592 - 592)];
    int HRvmnysIOD8;
    scanf ("%s", s);
    HRvmnysIOD8 = strlen (s);
    for (uQlqfAWCdi = 0; 1000 > uQlqfAWCdi; uQlqfAWCdi++)
        laSR2rOb3[uQlqfAWCdi] = 1;
    for (uQlqfAWCdi = 1; uQlqfAWCdi <= HRvmnysIOD8; uQlqfAWCdi++) {
        if ((s[uQlqfAWCdi] - 'A') == (s[uQlqfAWCdi - 1] - 'A' - (473 - 441)))
            laSR2rOb3[s[uQlqfAWCdi] - 'A']++;
        else if ((s[uQlqfAWCdi] - 'A' - (133 - 101)) == (s[uQlqfAWCdi - 1] - 'A'))
            laSR2rOb3[s[uQlqfAWCdi] - 'A' - (574 - 542)]++;
        else if ((s[uQlqfAWCdi] - '0') == (s[uQlqfAWCdi - 1] - '0')) {
            if ((s[uQlqfAWCdi] - '0') < (318 - 275))
                laSR2rOb3[s[uQlqfAWCdi] - 'A']++;
            else
                laSR2rOb3[s[uQlqfAWCdi] - 'A' - 32]++;
        }
        else {
            if ((s[uQlqfAWCdi - 1] - '0') < 43) {
                printf ("(%c,%d)", s[uQlqfAWCdi - 1], laSR2rOb3[s[uQlqfAWCdi - 1] - 'A']);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                laSR2rOb3[s[uQlqfAWCdi - 1] - 'A'] = 1;
            }
            else {
                printf ("(%c,%d)", s[uQlqfAWCdi - 1] - 'A' - 32 + 'A', laSR2rOb3[s[uQlqfAWCdi - 1] - 'A' - 32]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                laSR2rOb3[s[uQlqfAWCdi - 1] - 'A' - 32] = 1;
            };
        };
    };
}

