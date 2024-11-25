int main () {
    int max;
    int kfkWA6Q [26];
    int MAXZrC;
    int IA3x9iu0;
    char *DVLhdNsKpPi [1000];
    int uwfzCMiQ1m;
    int K0K1zoiFmCx [1000];
    max = 0;
    {
        uwfzCMiQ1m = 0;
        while (26 > uwfzCMiQ1m) {
            kfkWA6Q[uwfzCMiQ1m] = 0;
            uwfzCMiQ1m++;
        }
    }
    scanf ("%d", &IA3x9iu0);
    {
        uwfzCMiQ1m = 0;
        while (IA3x9iu0 > uwfzCMiQ1m) {
            scanf ("%d", &K0K1zoiFmCx[uwfzCMiQ1m]);
            DVLhdNsKpPi[uwfzCMiQ1m] = (char *) malloc (26 * sizeof (char));
            scanf ("%s", DVLhdNsKpPi[uwfzCMiQ1m]);
            {
                MAXZrC = 0;
                while (strlen (DVLhdNsKpPi[uwfzCMiQ1m]) > MAXZrC) {
                    kfkWA6Q[(int) (*(DVLhdNsKpPi[uwfzCMiQ1m] + MAXZrC) - 'A')]++;
                    MAXZrC++;
                }
            }
            uwfzCMiQ1m++;
        }
    }
    {
        uwfzCMiQ1m = 0;
        while (26 > uwfzCMiQ1m) {
            if (kfkWA6Q[max] < kfkWA6Q[uwfzCMiQ1m])
                max = uwfzCMiQ1m;
            uwfzCMiQ1m++;
        }
    }
    printf ("%c\n", (char) ('A' + max));
    printf ("%d\n", kfkWA6Q[max]);
    {
        uwfzCMiQ1m = 0;
        while (IA3x9iu0 > uwfzCMiQ1m) {
            {
                MAXZrC = 0;
                while (strlen (DVLhdNsKpPi[uwfzCMiQ1m]) > MAXZrC) {
                    if (DVLhdNsKpPi[uwfzCMiQ1m][MAXZrC] == (char) ('A' + max)) {
                        printf ("%d\n", K0K1zoiFmCx[uwfzCMiQ1m]);
                        break;
                    }
                    MAXZrC++;
                }
            }
            uwfzCMiQ1m++;
        }
    }
    return 1;
}

