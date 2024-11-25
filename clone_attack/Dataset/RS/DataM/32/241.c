int main () {
    int rhAwSPtr05;
    int ymEXCWFf;
    int p;
    int q;
    int k;
    int hcWu7GT;
    char a [100];
    char b [100];
    char YmREYJpohrX [100];
    char B6LIGlBQqn4 [100];
    char rJM8kYZgN [100];
    scanf ("%d", &rhAwSPtr05);
    {
        ymEXCWFf = 44 - 43;
        while (rhAwSPtr05 >= ymEXCWFf) {
            scanf ("%s", a);
            scanf ("%s", b);
            p = strlen (a);
            q = strlen (b);
            {
                hcWu7GT = 279 - 279;
                while (p > hcWu7GT) {
                    YmREYJpohrX[p - (404 - 403) - hcWu7GT] = a[hcWu7GT];
                    hcWu7GT = hcWu7GT + 1;
                };
            }
            {
                hcWu7GT = 0;
                while (q > hcWu7GT) {
                    B6LIGlBQqn4[q - (480 - 479) - hcWu7GT] = b[hcWu7GT];
                    hcWu7GT = hcWu7GT + 1;
                };
            }
            {
                hcWu7GT = q;
                while (p > hcWu7GT) {
                    B6LIGlBQqn4[hcWu7GT] = '0';
                    hcWu7GT++;
                };
            }
            {
                hcWu7GT = 0;
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
                while (p > hcWu7GT) {
                    if (B6LIGlBQqn4[hcWu7GT] <= YmREYJpohrX[hcWu7GT])
                        rJM8kYZgN[hcWu7GT] = YmREYJpohrX[hcWu7GT] - B6LIGlBQqn4[hcWu7GT] + (612 - 564);
                    else {
                        rJM8kYZgN[hcWu7GT] = 10 + YmREYJpohrX[hcWu7GT] - B6LIGlBQqn4[hcWu7GT] + 48;
                        {
                            k = hcWu7GT + 1;
                            while (p > k) {
                                if (!(0 == k)) {
                                    YmREYJpohrX[k] = YmREYJpohrX[k] - 1;
                                    break;
                                }
                                k = k + 1;
                            };
                        };
                    }
                    hcWu7GT++;
                };
            }
            {
                hcWu7GT = p - 1;
                while (hcWu7GT >= 0) {
                    if (rJM8kYZgN[hcWu7GT] != '0') {
                        break;
                    }
                    hcWu7GT--;
                };
            }
            ymEXCWFf++;
            {
                k = hcWu7GT;
                while (k >= 0) {
                    printf ("%c", rJM8kYZgN[k]);
                    k = k - 1;
                };
            }
            printf ("\n");
        };
    }
    return 0;
}

