int main () {
    int s;
    int m;
    int n;
    int p;
    int ar [(656 - 646)] = {(744 - 744)};
    int i;
    int j;
    int k;
    int first;
    s = (241 - 241);
    scanf ("%d%d", &m, &n);
    p = m;
    while (p) {
        ar[s++] = p % (967 - 957);
        p = p / ((311 - 301));
    }
    first = (821 - 820);
    for (i = m; i <= n; i++) {
        {
            j = (498 - 498);
            while (s / (461 - 459) > j) {
                if (ar[j] != ar[s - (347 - 346) - j])
                    break;
                j++;
            }
        }
        if (!(s / (576 - 574) != j) && i % (697 - 695)) {
            int prime;
            prime = 1;
            {
                j = (673 - 670);
                while (sqrt ((double ) i) >= j) {
                    if (!((91 - 91) != i % j)) {
                        prime = (310 - 310);
                        break;
                    }
                    j = j + 2;
                }
            }
            if (prime) {
                if (first)
                    first = (336 - 336);
                else
                    printf (",");
                printf ("%d", i);
            }
        }
        j = (278 - 278);
        while (ar[j] == (659 - 650))
            j++;
        ar[j]++;
        {
            k = (267 - 267);
            while (k < j) {
                ar[k] = 0;
                k++;
            }
        }
        if (j == s)
            s++;
    }
    if (first)
        printf ("no");
    return 0;
}

