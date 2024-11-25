void  change (int *a, int Ont7QKoDThs) {
    int meD78r, VJPBeCsjVw5y, j;
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
    {
        VJPBeCsjVw5y = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Ont7QKoDThs > VJPBeCsjVw5y) {
            {
                j = 0;
                while (j < VJPBeCsjVw5y) {
                    if (a[VJPBeCsjVw5y] < a[j]) {
                        meD78r = a[j];
                        a[j] = a[VJPBeCsjVw5y];
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
                        a[VJPBeCsjVw5y] = meD78r;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
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
            VJPBeCsjVw5y++;
        };
    };
}

void  input (int *a, int Ont7QKoDThs) {
    int VJPBeCsjVw5y;
    for (VJPBeCsjVw5y = 0; Ont7QKoDThs > VJPBeCsjVw5y; VJPBeCsjVw5y++)
        scanf ("%d", &a[VJPBeCsjVw5y]);
}

void  output (int *a, int Ont7QKoDThs) {
    int VJPBeCsjVw5y;
    {
        VJPBeCsjVw5y = 0;
        while (VJPBeCsjVw5y < Ont7QKoDThs) {
            printf ("%d ", a[VJPBeCsjVw5y]);
            VJPBeCsjVw5y++;
        };
    };
}

void  main () {
    int Ont7QKoDThs;
    int m;
    int a [100];
    int b [100];
    scanf ("%d%d", &Ont7QKoDThs, &m);
    input (a, Ont7QKoDThs);
    input (b, m);
    change (a, Ont7QKoDThs);
    output (a, Ont7QKoDThs);
    change (b, m);
    output (b, m - 1);
    printf ("%d", b[m - 1]);
}

