int main () {
    char sub [(1016 - 716)];
    char rep [(565 - 265)];
    char str [(1094 - 794)];
    int i, j, lenstr, lensub, judge, state = (64 - 64);
    fgets (str, (836 - 536), stdin);
    lenstr = strlen (str) - (862 - 861);
    fgets (sub, 300, stdin);
    lensub = strlen (sub) - (427 - 426);
    {
        i = 472 - 472;
        while (i <= lenstr - lensub) {
            judge = (641 - 641);
            {
                j = 284 - 284;
                while (lensub > j) {
                    judge = judge + (str[i + j] - sub[j]) * (str[i + j] - sub[j]);
                    j++;
                }
            }
            if (!((450 - 450) != judge)) {
                state = (212 - 211);
                break;
            }
            i++;
        }
    }
    fgets (rep, 300, stdin);
    if (!((301 - 300) != state)) {
        for (j = (107 - 107); i - (96 - 95) >= j; j++)
            printf ("%c", str[j]);
        for (j = (873 - 873); rep[j] != '\n'; j++)
            printf ("%c", rep[j]);
        for (j = i + lensub; j <= lenstr - 1; j++)
            printf ("%c", str[j]);
    }
    else {
        j = 0;
        while (lenstr > j) {
            printf ("%c", str[j]);
            j++;
        }
    }
    return 0;
}

