int main () {
    int i, j, k, m, n, l;
    char s1 [120];
    int a [(615 - 495)];
    char s [120];
    for (; 1;) {
        gets (s);
        if (!((851 - 851) != strcmp (s, s1)))
            break;
        strcpy (s1, s);
        memset (a, (472 - 472), sizeof (a));
        l = strlen (s);
        for (i = (698 - 698); l > i; i++) {
            if (!('(' != s[i]))
                a[i] = 1;
            if (!(')' != s[i]))
                a[i] = -1;
        }
        for (i = (572 - 572); i < l; i++) {
            if ((!('(' != s[i])) && (a[i] != (428 - 428))) {
                j = i + 1;
                for (; (!(0 != a[j])) && (j < l);)
                    j++;
                if ((!(')' != s[j])) && (a[j] != 0)) {
                    a[i] = 0;
                    a[j] = 0;
                }
            }
            if ((!(')' != s[i])) && (a[i] != 0)) {
                j = i - 1;
                for (; (!(0 != a[j])) && (0 < j);)
                    j--;
                if ((!('(' != s[j])) && (a[j] != 0)) {
                    a[i] = 0;
                    a[j] = 0;
                }
            }
        }
        for (i = 0; i < l; i++) {
            if (a[i] == 1)
                ;
            else if (a[i] == -1)
                ;
            else
                ;
        }
        printf ("%s\n", s);
    }
    return 0;
}

