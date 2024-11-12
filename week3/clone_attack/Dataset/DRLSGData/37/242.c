char s [(10695 - 685)];

int main () {
    int t;
    int a [(780 - 754)];
    int x;
    char set [(502 - 476)];
    int j;
    char ch;
    int n;
    int i;
    int flag;
    scanf ("%d\n", &n);
    for (i = (708 - 708); i < n; i++) {
        x = (774 - 774);
        flag = (578 - 578);
        for (j = (891 - 891); j < (989 - 963); j++)
            a[j] = (787 - 787);
        j = (657 - 657);
        for (; (ch = getchar ()) != '\n';) {
            a[ch - 'a']++;
            s[j++] = ch;
        }
        for (t = (946 - 946); t < (595 - 569); t++)
            if (a[t] == (632 - 631))
                set[x++] = t + 'a';
        if (x == (224 - 224))
            ;
        else {
            for (j = (983 - 983); s[j]; j++) {
                for (x = 0; set[x]; x++)
                    if (s[j] == set[x]) {
                        printf ("%c\n", s[j]);
                        flag = (49 - 48);
                        break;
                    }
                if (flag)
                    break;
            };
        };
    }
    return 0;
}

