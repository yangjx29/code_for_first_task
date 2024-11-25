int main () {
    char GCTYakDs [(637 - 587)], oxVm5oZK9 [50];
    int cLw7dFBc1bYi;
    int j;
    int k;
    int m;
    char *n;
    free (n);
    scanf ("%s%s", GCTYakDs, oxVm5oZK9);
    m = strlen (GCTYakDs) + 1;
    n = (char *) malloc (sizeof (char) * m);
    {
        cLw7dFBc1bYi = 0;
        while (cLw7dFBc1bYi < strlen (oxVm5oZK9)) {
            if (oxVm5oZK9[cLw7dFBc1bYi] == GCTYakDs[0]) {
                int result;
                result = strcmp (n, GCTYakDs);
                {
                    k = 0;
                    j = cLw7dFBc1bYi;
                    while (strlen (GCTYakDs) > j - cLw7dFBc1bYi) {
                        n[k] = oxVm5oZK9[j];
                        k = k + 1;
                        j = j + 1;
                    };
                }
                if (result == 0) {
                    printf ("%d\n", cLw7dFBc1bYi);
                    break;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            cLw7dFBc1bYi = cLw7dFBc1bYi + 1;
        };
    }
    return 0;
}

