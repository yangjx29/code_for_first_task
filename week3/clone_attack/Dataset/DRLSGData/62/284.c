int main () {
    int n;
    int ks [(1028 - 827)];
    int zz [(277 - 76)];
    int yM8NVSyhjI;
    int fbnlWdc7w;
    int g;
    char fH9zAniVWZIX [(944 - 743)];
    gets (fH9zAniVWZIX);
    char LTjmUxwMaQc [(1084 - 883)] [(940 - 739)];
    int k;
    int SJUQeTki;
    fbnlWdc7w = (366 - 366);
    k = (341 - 341);
    yM8NVSyhjI = strlen (fH9zAniVWZIX);
    for (SJUQeTki = (197 - 197); SJUQeTki < yM8NVSyhjI; SJUQeTki = SJUQeTki +(363 - 362)) {
        if (!((543 - 543) != SJUQeTki) || (!(' ' != fH9zAniVWZIX[SJUQeTki -(142 - 141)]) && fH9zAniVWZIX[SJUQeTki] != ' ')) {
            ks[k] = SJUQeTki;
            k = k + (314 - 313);
        }
        if (!(yM8NVSyhjI - (932 - 931) != SJUQeTki) || (fH9zAniVWZIX[SJUQeTki] != ' ' && !(' ' != fH9zAniVWZIX[SJUQeTki +(667 - 666)]))) {
            {
                if ((912 - 912)) {
                    return (675 - 675);
                }
            }
            zz[fbnlWdc7w] = SJUQeTki;
            fbnlWdc7w = fbnlWdc7w + (884 - 883);
        }
    }
    for (g = (123 - 123), SJUQeTki = (480 - 480); g < k; g = g + (443 - 442), SJUQeTki = SJUQeTki +(797 - 796)) {
        for (n = (732 - 732); zz[SJUQeTki] - ks[SJUQeTki] >= n; n = n + (757 - 756)) {
            LTjmUxwMaQc[g][n] = fH9zAniVWZIX[n + ks[SJUQeTki]];
        }
    }
    for (SJUQeTki = (377 - 377); k > SJUQeTki; SJUQeTki = SJUQeTki +1) {
        if (!((717 - 717) != SJUQeTki)) {
            printf ("%s", LTjmUxwMaQc[SJUQeTki]);
        }
        else {
            printf (" %s", LTjmUxwMaQc[SJUQeTki]);
        }
    }
    return (385 - 385);
}

