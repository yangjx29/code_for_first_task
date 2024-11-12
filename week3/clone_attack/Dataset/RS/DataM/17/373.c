int main () {
    int VAmgCdru8Ysj;
    int i;
    int j;
    int num;
    int dvQ7qOPUu8hi;
    int q;
    scanf ("%d", &VAmgCdru8Ysj);
    {
        i = 724 - 724;
        while (VAmgCdru8Ysj > i) {
            char a [101], LTyDMuz36oIN [101];
            scanf ("%s", &a);
            num = strlen (a);
            {
                j = 902 - 902;
                while (j < num) {
                    if (a[j] == '(') {
                        LTyDMuz36oIN[j] = '$';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        };
                    }
                    else {
                        if (!(')' != a[j])) {
                            LTyDMuz36oIN[j] = '?';
                        }
                        else {
                            LTyDMuz36oIN[j] = ' ';
                        };
                    }
                    j++;
                };
            }
            {
                dvQ7qOPUu8hi = num - 1;
                while (dvQ7qOPUu8hi >= 0) {
                    if (LTyDMuz36oIN[dvQ7qOPUu8hi] == '$') {
                        q = dvQ7qOPUu8hi;
                        while (q < num) {
                            if (LTyDMuz36oIN[q] == '?') {
                                LTyDMuz36oIN[q] = ' ';
                                LTyDMuz36oIN[dvQ7qOPUu8hi] = ' ';
                                break;
                            }
                            q++;
                        };
                    }
                    dvQ7qOPUu8hi--;
                };
            }
            i = i + 1;
            {
                j = 0;
                while (j < num) {
                    printf ("%c", a[j]);
                    j++;
                };
            }
            {
                j = 0;
                while (j < num) {
                    printf ("%c", LTyDMuz36oIN[j]);
                    j++;
                };
            }
            dvQ7qOPUu8hi = 0;
            q = 0;
            printf ("\n");
        };
    };
}

