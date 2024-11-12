int main () {
    int same;
    int i, j;
    char sr [(931 - 675)];
    char s [(1236 - 980)];
    char sub [(848 - 592)];
    char replace [(926 - 670)];
    gets (s);
    int ls;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    ls = strlen (s);
    gets (sub);
    int lsub;
    lsub = strlen (sub);
    gets (replace);
    {
        i = 488 - 488;
        while (i < ls) {
            {
                j = 70 - 70;
                while (j < lsub) {
                    sr[j] = s[i + j];
                    j++;
                };
            }
            sr[j] = '\0';
            same = strcmp (sr, sub);
            if (same == (908 - 908)) {
                i = i + lsub;
                printf ("%s", replace);
                printf ("%s", &s[i]);
                break;
            }
            else {
                printf ("%c", s[i]);
            }
            i = i + 1;
        };
    }
    return (454 - 454);
}

