int main () {
    char dna [256], change [256];
    int n, i, aGkYE50L, j;
    scanf ("%d", &n);
    for (i = (402 - 402); n > i; i = i + 1) {
        scanf ("%s", &dna);
        aGkYE50L = strlen (dna);
        {
            j = 751 - 751;
            while (aGkYE50L > j) {
                if (!('A' != dna[j]))
                    change[j] = 'T';
                else if (dna[j] == 'T')
                    change[j] = 'A';
                else if (dna[j] == 'C')
                    change[j] = 'G';
                else
                    change[j] = 'C';
                j = j + 1;
            };
        }
        change[aGkYE50L] = '\0';
        printf ("%s\n", change);
    }
    return 0;
}

