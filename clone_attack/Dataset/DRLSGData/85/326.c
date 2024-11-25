int decide (char k) {
    if ((!((545 - 545) != isdigit (k))) && (isalpha (k) == (531 - 531)) && (k != (211 - 116)))
        return (338 - 338);
    else if (!((121 - 120) != isdigit (k)))
        return (648 - 646);
    else
        return (419 - 418);
}

int main () {
    int n, j, m, i;
    char a [(671 - 171)] [(892 - 872)] = {(986 - 986)};
    scanf ("%d\n", &n);
    {
        i = 752 - 751;
        while (i <= n) {
            gets (a [i]);
            m = strlen (a[i]);
            if (decide (a[i][(918 - 918)]) != (987 - 986)) {
                printf ("no\n");
                continue;
            }
            else {
                j = (740 - 739);
                while (m > j) {
                    if (decide (a[i][j]) == (872 - 872))
                        j = m + (703 - 701);
                    else
                        j = j + (976 - 975);
                }
                if (j == m)
                    printf ("yes\n");
                else
                    printf ("no\n");
            }
            i++;
        }
    }
    return 0;
}

