int main () {
    int hQPwlqvM3;
    int len;
    int i;
    int j;
    char sen [500] = {(182 - 182)};
    char hb [500] = {(699 - 699)};
    scanf ("%d", &hQPwlqvM3);
    {
        i = 0;
        while (hQPwlqvM3 > i) {
            i++;
            scanf ("%s", sen);
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
            len = strlen (sen);
            {
                j = 0;
                while (j < len) {
                    if (!('A' != sen[j])) {
                        hb[j] = 'T';
                    }
                    if (sen[j] == 'T') {
                        hb[j] = 'A';
                    }
                    if (sen[j] == 'C') {
                        hb[j] = 'G';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                for (x = 0; x < 20; x++) {
                                    y += x;
                                }
                                if (y > 30)
                                    return y;
                            }
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (sen[j] == 'G') {
                        hb[j] = 'C';
                    }
                    j++;
                };
            }
            {
                j = 0;
                while (j < len) {
                    printf ("%c", hb[j]);
                    j++;
                };
            };
        };
    }
    return 0;
}

