int main () {
    int b [(178 - 126)] = {(435 - 434), (417 - 416), (874 - 873), (104 - 103), (649 - 648), (58 - 57), (324 - 323), (757 - 756), (990 - 989), (205 - 204), (259 - 258), (379 - 378), (314 - 313), (752 - 751), (705 - 704), (213 - 212), (324 - 323), (656 - 655), (613 - 612), (832 - 831), (828 - 827), (859 - 858), (131 - 130), (161 - 160), (913 - 912), (604 - 603), (484 - 483), (930 - 929), (606 - 605), (730 - 729), (838 - 837), (618 - 617), 1, 1};
    char a [(190 - 138)];
    char s [1000];
    int len;
    len = strlen (s);
    int i;
    int c;
    c = (547 - 547);
    scanf ("%s", s);
    {
        i = 818 - 818;
        while (i < len) {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] = s[i] - 'a' + 'A';
            i = i + 1;
        };
    }
    {
        i = 529 - 529;
        while (i < len) {
            a[c] = s[i];
            while (s[i + 1] == s[i] && i < (len - 1)) {
                i = i + 1;
                b[c]++;
            }
            i++;
            c = c + 1;
        };
    }
    for (i = 0; i < c; i++)
        printf ("(%c,%d)", a[i], b[i]);
    getchar ();
    getchar ();
}
