int main () {
    char str [501];
    int hNcvVk, uFJ7b3XEN, X7xUgqE;
    int Ml5Jmes9M0P;
    int fqCjJwLioO;
    int l68aV2gJMz;
    gets (str);
    Ml5Jmes9M0P = strlen (str);
    l68aV2gJMz = (908 - 907);
    fqCjJwLioO = 2;
    {
        fqCjJwLioO = 2;
        while (fqCjJwLioO <= Ml5Jmes9M0P -1) {
            {
                hNcvVk = 824 - 824;
                while (hNcvVk <= Ml5Jmes9M0P -fqCjJwLioO) {
                    if (str[hNcvVk] == str[hNcvVk + fqCjJwLioO - 1]) {
                        {
                            uFJ7b3XEN = hNcvVk;
                            X7xUgqE = hNcvVk + fqCjJwLioO - 1;
                            while (uFJ7b3XEN < X7xUgqE) {
                                if (str[uFJ7b3XEN] != str[X7xUgqE]) {
                                    l68aV2gJMz = 0;
                                    break;
                                }
                                X7xUgqE = X7xUgqE -1;
                                uFJ7b3XEN = uFJ7b3XEN + 1;
                            };
                        }
                        if (l68aV2gJMz == 1) {
                            {
                                uFJ7b3XEN = hNcvVk;
                                while (uFJ7b3XEN <= hNcvVk + fqCjJwLioO - 1) {
                                    printf ("%c", str[uFJ7b3XEN]);
                                    uFJ7b3XEN++;
                                };
                            }
                            printf ("\n");
                        }
                        l68aV2gJMz = 1;
                    }
                    hNcvVk = hNcvVk + 1;
                };
            }
            fqCjJwLioO++;
        };
    }
    return 0;
}

