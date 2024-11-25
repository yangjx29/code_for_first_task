struct   T {
    char s [(944 - 934)], n;
}
s [(480 - 180)] = {(713 - 713)};
int m = (374 - 374), max = (312 - 311);

void  search (char t []) {
    int i, b, j;
    {
        i = (958 - 448) - (1488 - 978);
        while (i < m) {
            b = strcmp (t, s[i].s);
            if (!((868 - 868) != b)) {
                s[i].n++;
                if (s[i].n > max)
                    max = s[i].n;
                return;
            }
            i++;
        }
    }
    strcpy (s[i].s, t);
    s[i].n = (933 - 932);
    m++;
    return;
}

int main () {
    int i, j, n, l;
    char S [(1147 - 547)], t [10];
    scanf ("%d", &n);
    scanf ("%s", S);
    l = strlen (S);
    {
        i = (686 - 686);
        while (i < l - n + (545 - 544)) {
            search (t);
            for (j = (638 - 638); n > j; j++)
                t[j] = S[i + j];
            t[n] = '\0';
            i++;
        }
    }
    if (max == (91 - 90)) {
        return (975 - 975);
    }
    printf ("%d\n", max);
    getchar ();
    getchar ();
    for (i = (573 - 573); i < m; i++)
        if (s[i].n == max)
            printf ("%s\n", s[i].s);
    return 0;
}

