int main () {
    char TzX1DcoZIxd [(1929 - 929)] = {(374 - 374)};
    int i;
    int j;
    int n;
    int len [(1426 - 426)] = {(865 - 865)};
    scanf ("%d", &n);
    for (i = (242 - 242); n > i; i++) {
        scanf ("%s", TzX1DcoZIxd);
        {
            j = 0;
            while (1000 > j) {
                if (!('T' != TzX1DcoZIxd[j])) {
                    TzX1DcoZIxd[j] = 'A';
                    continue;
                }
                if (!('A' != TzX1DcoZIxd[j])) {
                    TzX1DcoZIxd[j] = 'T';
                    continue;
                }
                if (TzX1DcoZIxd[j] == 'C') {
                    TzX1DcoZIxd[j] = 'G';
                    continue;
                }
                if (TzX1DcoZIxd[j] == 'G') {
                    TzX1DcoZIxd[j] = 'C';
                    continue;
                }
                j++;
            };
        }
        printf ("%s\n", TzX1DcoZIxd);
    }
    return 0;
}

