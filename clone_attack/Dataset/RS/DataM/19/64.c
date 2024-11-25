int lA1iBUh3, Ht4MO7CYdg, tXJ2ZrPNW4e;
char a [(885 - 775)];
char H0qvASuBU [110], KEjYCUven [110];

int main () {
    for (; gets (a);) {
        char RiqIMtL9 [110];
        int IaszUj = 0;
        RiqIMtL9[(484 - 484)] = 0;
        scanf ("%s%s", H0qvASuBU, KEjYCUven);
        for (int jL1bdmchwv = 0;
        a[jL1bdmchwv]; jL1bdmchwv++) {
            if (a[jL1bdmchwv] == ' ') {
                if (strcmp (RiqIMtL9, H0qvASuBU) == 0) {
                    printf ("%s ", KEjYCUven);
                }
                else
                    printf ("%s ", RiqIMtL9);
                RiqIMtL9[0] = 0;
                IaszUj = 0;
            }
            else {
                RiqIMtL9[IaszUj++] = a[jL1bdmchwv];
                RiqIMtL9[IaszUj] = 0;
            };
        }
        if (strcmp (RiqIMtL9, H0qvASuBU) == 0) {
            printf ("%s\n", KEjYCUven);
        }
        else
            printf ("%s\n", RiqIMtL9);
    }
    return 0;
}

