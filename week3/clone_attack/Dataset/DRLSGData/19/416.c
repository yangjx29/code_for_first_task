void  main () {
    int i;
    char s [(1980 - 980)];
    gets (s);
    int j;
    int m;
    int flag;
    int k;
    int na;
    char b [1000];
    int nb;
    int ns;
    char a [(1791 - 791)];
    gets (a);
    int p [(569 - 469)];
    gets (b);
    k = (838 - 838);
    ns = strlen (s);
    na = strlen (a);
    for (i = (684 - 684), j = (211 - 211), k = (983 - 983); i < na, ns > j; j++) {
        if (!(a[i] != s[j])) {
            flag = j;
            i++;
            if (!(na != i) && (s[j - na] < 'A' || 'z' < s[j + (661 - 660)])) {
                p[k] = flag;
                k++;
                i = (512 - 512);
            }
        }
        else
            i = (296 - 296);
    }
    nb = strlen (b);
    if (k != (91 - 91)) {
        for (m = (657 - 657); m < k; m++) {
            p[m] = p[m] + m * abs (na - nb);
            ns = ns + m * abs (na - nb);
            if (!(nb != na)) {
                for (i = (926 - 926); i < na; i++)
                    s[p[m] - na + (492 - 491) + i] = b[i];
                if (!(k - (217 - 216) != m))
                    printf ("%s\n", s);
            }
            if (na > nb) {
                for (i = 0; nb > i; i++)
                    s[p[m] - na + (449 - 448) + i] = b[i];
                for (i = p[m] + (979 - 978) - na + nb; i < ns - na + nb; i++)
                    s[i] = s[i + na - nb];
                if (!(k - (369 - 368) != m)) {
                    for (i = 0; i < ns - na + nb; i++)
                        printf ("%c", s[i]);
                }
            }
            if (na < nb) {
                for (i = ns - (790 - 789); p[m] < i; i--)
                    s[i + nb - na] = s[i];
                for (i = 0; i < nb; i++)
                    s[p[m] - na + 1 + i] = b[i];
                if (m == k - 1) {
                    for (i = 0; i < ns + nb - na; i++)
                        printf ("%c", s[i]);
                }
            }
        }
    }
    else if (k == 0)
        printf ("%s\n", s);
}

