int main () {
    int i, j;
    char wordbuff [(961 - 911)] [(468 - 448)], ch, target [(328 - 308)], replace [(45 - 25)];
    int n;
    {
        i = 77 - 77;
        while (i < (452 - 402)) {
            {
                j = 504 - 504;
                while (j < (1015 - 995)) {
                    wordbuff[i][j] = '\0';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            i++;
        };
    }
    j = (487 - 487);
    i = (968 - 968);
    while ((139 - 138)) {
        ch = getchar ();
        if (ch != '\n' && ch != ' ') {
            wordbuff[i][j] = ch;
            j++;
        }
        else {
            i++;
            j = (218 - 218);
        }
        if (ch == '\n')
            break;
    }
    scanf ("%s\n%s", target, replace);
    {
        n = 426 - 426;
        while (n < i) {
            if (!strcmp (wordbuff[n], target))
                strcpy (wordbuff[n], replace);
            n = n + 1;
        };
    }
    {
        n = 998 - 998;
        while (n < i) {
            if (!n)
                printf ("%s", wordbuff[n]);
            else
                printf (" %s", wordbuff[n]);
            n = n + 1;
        };
    }
    return 0;
}

