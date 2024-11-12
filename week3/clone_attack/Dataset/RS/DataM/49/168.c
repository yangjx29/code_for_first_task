int main () {
    char AHZ5IiVw4C0 [501];
    char DYIWGESycz [501];
    int Z8H2L7bIaOr;
    int n;
    int k6N4rCe;
    int hdoGWUTp7wQ;
    int YAO2zdm;
    int c;
    int d;
    int wPJpqeQFva;
    Z8H2L7bIaOr = (862 - 862);
    n = (885 - 885);
    scanf ("%s", AHZ5IiVw4C0);
    YAO2zdm = strlen (AHZ5IiVw4C0);
    {
        k6N4rCe = 1;
        while (YAO2zdm >= k6N4rCe) {
            {
                hdoGWUTp7wQ = 0;
                while (hdoGWUTp7wQ < YAO2zdm -k6N4rCe) {
                    d = hdoGWUTp7wQ + k6N4rCe;
                    c = hdoGWUTp7wQ;
                    while (c < d) {
                        if (AHZ5IiVw4C0[c] == AHZ5IiVw4C0[d]) {
                            c = c + 1;
                            d = d - 1;
                        }
                        else {
                            Z8H2L7bIaOr = 1;
                            break;
                        };
                    }
                    if (Z8H2L7bIaOr == 0) {
                        {
                            wPJpqeQFva = hdoGWUTp7wQ;
                            while (wPJpqeQFva <= hdoGWUTp7wQ + k6N4rCe) {
                                DYIWGESycz[n] = AHZ5IiVw4C0[wPJpqeQFva];
                                wPJpqeQFva++;
                                DYIWGESycz[n + 1] = '\0';
                                n = n + 1;
                            };
                        }
                        n = 0;
                        printf ("%s\n", DYIWGESycz);
                    }
                    Z8H2L7bIaOr = 0;
                    hdoGWUTp7wQ = hdoGWUTp7wQ + 1;
                };
            }
            k6N4rCe++;
        };
    }
    return 0;
}

