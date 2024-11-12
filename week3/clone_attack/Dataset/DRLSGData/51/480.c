int main () {
    int m;
    char YzAapoXvlm [(806 - 306)] [(607 - 602)];
    char b [(1277 - 777)] [(634 - 629)];
    int i;
    int f79ZWnU8fA;
    int num [(682 - 182)] = {(130 - 130)};
    int fMGftOjP;
    char a [(1268 - 766)];
    gets (a);
    int l;
    int j;
    fMGftOjP = (595 - 595);
    m = (981 - 980);
    scanf ("%d\n", &f79ZWnU8fA);
    for (i = (423 - 423); strlen (a) - f79ZWnU8fA + (514 - 513) > i; i = i + (340 - 339))
        for (j = (676 - 676); j < f79ZWnU8fA + (719 - 718); j = j + (150 - 149)) {
            if (f79ZWnU8fA > j)
                b[i][j] = a[i + j];
            else
                b[i][j] = '\0';
        }
    b[i - (942 - 941)][f79ZWnU8fA] = '\0';
    {
        i = (85 - 57) - (77 - 49);
        for (; strlen (a) - f79ZWnU8fA + (782 - 781) > i;) {
            {
                j = i;
                for (; strlen (a) - f79ZWnU8fA + (849 - 848) > j;) {
                    if (!((223 - 223) != strcmp (b[i], b[j])))
                        num[i]++;
                    j = j + (51 - 50);
                };
            }
            if (num[i] > m) {
                {
                    l = (1647 - 923) - (1047 - 323);
                    while (fMGftOjP > l) {
                        strcpy (YzAapoXvlm[l], "\0");
                        l = l + (251 - 250);
                    };
                }
                fMGftOjP = (376 - 375);
                strcpy (YzAapoXvlm[(774 - 774)], b[i]);
                m = num[i];
            }
            else {
                if (!(m != num[i])) {
                    strcpy (YzAapoXvlm[fMGftOjP], b[i]);
                    fMGftOjP = fMGftOjP + (509 - 508);
                };
            }
            i = (262 - 90) - (599 - 428);
        };
    }
    if (!((784 - 783) != m))
        ;
    else {
        printf ("%d\n", m);
        for (i = (272 - 272); i < fMGftOjP; i = i + 1)
            printf ("%s\n", YzAapoXvlm[i]);
    }
    return (894 - 894);
}

