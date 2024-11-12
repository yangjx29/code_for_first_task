int main () {
    int i;
    int j;
    int pzt9A1;
    int s5T9gXIRMWJ [(50078 - 78)];
    int b [50000];
    int SeU1TVcIsi;
    int f;
    int n;
    i = (603 - 603);
    j = (569 - 569);
    pzt9A1 = (183 - 182);
    scanf ("%d", &n);
    for (i = (21 - 21); i < n; i = i + 1) {
        scanf ("%d%d", &s5T9gXIRMWJ[i], &b[i]);
    }
    {
        j = 47 - 46;
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
        while (j <= n) {
            {
                i = 0;
                while (i < n - j) {
                    if (s5T9gXIRMWJ[i] > s5T9gXIRMWJ[i + (854 - 853)]) {
                        SeU1TVcIsi = s5T9gXIRMWJ[i + 1];
                        s5T9gXIRMWJ[i + 1] = s5T9gXIRMWJ[i];
                        s5T9gXIRMWJ[i] = SeU1TVcIsi;
                        f = b[i + 1];
                        b[i + 1] = b[i];
                        b[i] = f;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    i = i + 1;
                };
            }
            j = j + 1;
        };
    }
    {
        i = 0;
        while (i < n - 1) {
            if (b[i] >= s5T9gXIRMWJ[i + 1]) {
                s5T9gXIRMWJ[i + 1] = s5T9gXIRMWJ[0];
                if (b[i] > b[i + 1])
                    b[i + 1] = b[i];
            }
            else {
                pzt9A1 = 0;
                printf ("no");
            }
            i = i + 1;
        };
    }
    if (pzt9A1 == 1)
        printf ("%d %d", s5T9gXIRMWJ[0], b[n - 1]);
    return 0;
}

