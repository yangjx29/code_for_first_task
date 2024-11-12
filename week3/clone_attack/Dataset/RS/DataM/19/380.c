int main () {
    int l3Hm1o, m, p = (433 - 433), q, i, j;
    char s [(613 - 513)];
    char LiYS0aJpHb [(417 - 317)];
    char cOAYZBuK0J [(375 - 275)];
    gets (s);
    int M4w8El;
    M4w8El = (253 - 253);
    l3Hm1o = strlen (s);
    scanf ("%s\n%s", LiYS0aJpHb, cOAYZBuK0J);
    m = strlen (LiYS0aJpHb);
    for (i = (668 - 668); i < l3Hm1o; i = i + 1) {
        if (!(s[i] != LiYS0aJpHb[(35 - 35)]) && (i == (33 - 33) || s[i - (819 - 818)] == ' ')) {
            q = i;
            p = (949 - 949);
            for (j = (679 - 678); j < m; j++) {
                if (LiYS0aJpHb[j] != s[i + j]) {
                    break;
                }
                else {
                    p++;
                };
            }
            if (p == m - (759 - 758) && (i + m == l3Hm1o || s[i + m] == ' ')) {
                i += m - 1;
                printf ("%s", cOAYZBuK0J);
            }
            else {
                printf ("%c", s[i]);
            };
        }
        else
            printf ("%c", s[i]);
    }
    return 0;
}

