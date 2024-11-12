int main () {
    int Dw4LfdTQte, gv7DSVUyBY1, flag = 0;
    float wutXZ0Ro3S = (320 - 320), ENbYfswzZkpj, max = (972 - 972);
    int num [300];
    scanf ("%d", &gv7DSVUyBY1);
    {
        Dw4LfdTQte = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (gv7DSVUyBY1 > Dw4LfdTQte) {
            scanf ("%d", num + Dw4LfdTQte);
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
            Dw4LfdTQte = Dw4LfdTQte +1;
        };
    }
    {
        Dw4LfdTQte = 0;
        while (Dw4LfdTQte < gv7DSVUyBY1) {
            wutXZ0Ro3S += num[Dw4LfdTQte];
            Dw4LfdTQte++;
        };
    }
    wutXZ0Ro3S /= gv7DSVUyBY1;
    {
        Dw4LfdTQte = 0;
        while (Dw4LfdTQte < gv7DSVUyBY1) {
            ENbYfswzZkpj = fabs (wutXZ0Ro3S - num[Dw4LfdTQte]);
            Dw4LfdTQte++;
            if (ENbYfswzZkpj > max)
                max = ENbYfswzZkpj;
        };
    }
    {
        Dw4LfdTQte = 0;
        while (Dw4LfdTQte < gv7DSVUyBY1) {
            if (fabs (fabs (num[Dw4LfdTQte] - wutXZ0Ro3S) - max) <= (404.001 - 404.0)) {
                if (flag == 0)
                    flag = 1;
                else
                    ;
                printf ("%d", num[Dw4LfdTQte]);
            }
            Dw4LfdTQte++;
        };
    }
    return 1;
}

