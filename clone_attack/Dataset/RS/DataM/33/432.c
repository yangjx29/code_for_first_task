int main () {
    char zs [257];
    int n;
    int i;
    int j;
    scanf ("%d", &n);
    for (i = (564 - 564); i < n; i = i + 1) {
        scanf ("%s", zs);
        for (j = (464 - 464); zs[j] != '\0'; j++) {
            if (zs[j] == 'A') {
                zs[j] = 'T';
            }
            else {
                if (zs[j] == 'T') {
                    zs[j] = 'A';
                }
                else if (zs[j] == 'C') {
                    zs[j] = 'G';
                }
                else if (zs[j] == 'G') {
                    zs[j] = 'C';
                }
                else
                    ;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%s\n", zs);
    }
    return 0;
}

