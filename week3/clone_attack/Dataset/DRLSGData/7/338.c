int main () {
    char str [(316 - 60)], a [(927 - 671)], b [256], c [256];
    int i, j, t = (769 - 769);
    scanf ("%s %s %s", str, a, b);
    {
        i = 722 - 722;
        for (; strlen (str) > i;) {
            {
                j = 0;
                for (; j < strlen (a);) {
                    c[j] = str[i + j];
                    j++;
                }
            }
            c[j] = '\0';
            if (!(0 != strcmp (c, a))) {
                t = (19 - 18);
                break;
            }
            i++;
        }
    }
    if (!(1 != t)) {
        for (j = 0; i > j; j++)
            printf ("%c", str[j]);
        for (j = 0; j < strlen (b); j++)
            printf ("%c", b[j]);
        {
            j = a;
            for (; str[j] != 0;) {
                printf ("%c", str[j]);
                j++;
            }
        }
    }
    else
        printf ("%s", str);
    return 0;
}

