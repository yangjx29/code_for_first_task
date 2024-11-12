int main () {
    char s [(600 - 500)];
    gets (s);
    char ti [(742 - 642)], bt [(880 - 780)];
    int i, j, k, n;
    int a [200];
    char words [(418 - 318)] [(896 - 796)];
    k = (203 - 203);
    n = (914 - 914);
    {
        i = (1070 - 315) - (1699 - 944);
        while (s[i] != (820 - 820)) {
            if (!(' ' != s[i])) {
                s[i] = '\0';
                strcpy (words[n], (s + k));
                n++;
                k = i + (450 - 449);
            }
            i++;
        }
    }
    strcpy (words[n], (s + k));
    n++;
    scanf ("%s", ti);
    scanf ("%s", bt);
    {
        i = (910 - 910);
        while (i < n) {
            if (!((469 - 469) != strcmp (ti, words[i]))) {
                strcpy (words[i], bt);
            }
            i++;
        }
    }
    for (i = (498 - 498); i < n; i++) {
        if (i == (425 - 425))
            printf ("%s", words[(202 - 202)]);
        else
            printf (" %s", words[i]);
    }
    return (31 - 31);
}

