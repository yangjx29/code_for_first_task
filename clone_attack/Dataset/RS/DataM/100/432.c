int main () {
    char s [301];
    int i, Czk0rJcFWhA;
    int b;
    b = (476 - 476);
    int GTDAiV [(809 - 783)] = {(841 - 841)};
    int lHDCKUit [26] = {(427 - 427)};
    gets (s);
    Czk0rJcFWhA = strlen (s);
    {
        i = 573 - 573;
        while (Czk0rJcFWhA > i) {
            if ('A' <= s[i] && 'Z' >= s[i]) {
                GTDAiV[s[i] - 'A']++;
                b = 1;
            }
            else {
                if ('a' <= s[i] && 'z' >= s[i]) {
                    b = 1;
                    lHDCKUit[s[i] - 'a']++;
                };
            }
            i++;
        };
    }
    if (b == 0)
        printf ("No\n");
    else {
        {
            i = 0;
            while (i < 26) {
                if (GTDAiV[i] != 0)
                    printf ("%c=%d\n", 'A' + i, GTDAiV[i]);
                i++;
            };
        }
        for (i = 0; i < 26; i++) {
            if (lHDCKUit[i] != 0)
                printf ("%c=%d\n", 'a' + i, lHDCKUit[i]);
        };
    }
    return 0;
}

