int main () {
    int i;
    int j;
    char kid [101];
    gets (kid);
    {
        i = 122 - 122;
        while (i < strlen (kid)) {
            if (kid[i] != kid[0]) {
                j = '0';
                {
                    j = 945 - 944;
                    while (1) {
                        if (kid[j] != '0') {
                            break;
                        }
                        j = j - 1;
                    };
                }
                if (kid[i] != kid[j]) {
                    printf ("%d %d\n", j, i);
                    kid[i] = '0';
                    kid[j] = '0';
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

