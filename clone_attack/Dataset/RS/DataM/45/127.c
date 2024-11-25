int main () {
    int J;
    int i;
    int l1;
    int l2;
    int YVE94H;
    int k;
    int I;
    J = 0;
    char a [50];
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
    char b [50];
    char c;
    scanf ("%s", a);
    l1 = strlen (a);
    scanf ("%s", b);
    l2 = strlen (b);
    {
        YVE94H = 0;
        while (YVE94H < 50) {
            if (a[0] == b[YVE94H]) {
                {
                    k = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (k <= l1) {
                        if (a[k] != b[YVE94H +k])
                            break;
                        if (k == l1 - 1) {
                            J = YVE94H;
                            break;
                        }
                        k++;
                    };
                }
                if (J != 0) {
                    printf ("%d", J);
                    break;
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
            YVE94H++;
        };
    }
    return 0;
}

