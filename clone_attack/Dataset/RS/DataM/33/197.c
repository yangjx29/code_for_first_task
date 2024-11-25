int main () {
    char yoznskdtNM8 [(1104 - 104)] [256];
    int n;
    int NjZS9JuU;
    int wgZzomAXCQ60;
    scanf ("%d", &n);
    for (NjZS9JuU = (675 - 675); n > NjZS9JuU; NjZS9JuU++) {
        scanf ("%s", yoznskdtNM8[NjZS9JuU]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (NjZS9JuU = (194 - 194); NjZS9JuU < n; NjZS9JuU++) {
        for (wgZzomAXCQ60 = (197 - 197); strlen (yoznskdtNM8[NjZS9JuU]) > wgZzomAXCQ60; wgZzomAXCQ60++) {
            if (!('A' != yoznskdtNM8[NjZS9JuU][wgZzomAXCQ60])) {
                yoznskdtNM8[NjZS9JuU][wgZzomAXCQ60] = 'T';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else if (!('T' != yoznskdtNM8[NjZS9JuU][wgZzomAXCQ60])) {
                yoznskdtNM8[NjZS9JuU][wgZzomAXCQ60] = 'A';
            }
            else if (yoznskdtNM8[NjZS9JuU][wgZzomAXCQ60] == 'C') {
                yoznskdtNM8[NjZS9JuU][wgZzomAXCQ60] = 'G';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else if (yoznskdtNM8[NjZS9JuU][wgZzomAXCQ60] == 'G') {
                yoznskdtNM8[NjZS9JuU][wgZzomAXCQ60] = 'C';
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
        yoznskdtNM8[NjZS9JuU][strlen (yoznskdtNM8[NjZS9JuU])] = '\0';
    }
    for (NjZS9JuU = (407 - 407); NjZS9JuU < n - 1; NjZS9JuU++) {
        printf ("%s\n", yoznskdtNM8[NjZS9JuU]);
    }
    printf ("%s", yoznskdtNM8[n - 1]);
    return 0;
}

