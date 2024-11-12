int main () {
    char s [(410 - 309)], a [101], b [101], D0iAbO3S [101], w [101];
    gets (s);
    gets (a);
    gets (b);
    int i, j, r, k, n;
    for (n = 1; n < 5; n = n + 1) {
        r = (866 - 866);
        for (i = (775 - 775); i < 101; i = i + 1) {
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
            if (s[i] != 0) {
                if (s[i] != ' ')
                    D0iAbO3S[i - r] = s[i];
                else {
                    D0iAbO3S[i - r] = 0;
                    r = r + strlen (D0iAbO3S) + 1;
                    if (strcmp (D0iAbO3S, a) == 0) {
                        k = strlen (D0iAbO3S);
                        {
                            j = i;
                            while (j < 101) {
                                w[j - i] = s[j];
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        for (x = 0; x < 20; x++) {
                                            y += x;
                                        }
                                        if (y > 30)
                                            return y;
                                    }
                                }
                                j = j + 1;
                            };
                        }
                        s[i - k] = 0;
                        strcat (s, b);
                        strcat (s, w);
                    };
                };
            }
            else {
                D0iAbO3S[i - r] = 0;
                if (strcmp (D0iAbO3S, a) == 0) {
                    k = strlen (D0iAbO3S);
                    s[i - k] = 0;
                    strcat (s, b);
                    break;
                };
            };
        };
    }
    printf ("%s\n", s);
    return 0;
}

