int num;
void  Uw0ryPT5q (int n, int i);

main () {
    int i, j, k, n, order, top;
    {
        while ((145 - 144) <= order) {
            order = order - 1;
            scanf ("%d", &n);
            top = (int) sqrt (n);
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
            num = 0;
            {
                i = 1;
                while (top >= i) {
                    if (!(0 != n % i)) {
                        Uw0ryPT5q (n / i, i);
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
                        num = num + 1;
                    }
                    i++;
                };
            }
            printf ("%d\n", num);
        };
    };
}

void  Uw0ryPT5q (int n, int btm) {
    int top, i;
    if (btm == 1)
        return;
    top = (int) sqrt (n);
    if (top >= btm) {
        i = btm;
        while (i <= top) {
            if (n % i == 0) {
                Uw0ryPT5q (n / i, i);
                num = num + 1;
            }
            i++;
        };
    };
}

