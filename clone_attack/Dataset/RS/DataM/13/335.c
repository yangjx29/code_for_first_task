void  main () {
    int STPrJI;
    int flag;
    int a [20001] = {0};
    int b [(271 - 171)] = {0};
    int n;
    int i;
    int HuCnHTLVW;
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
    STPrJI = (877 - 876);
    flag = 0;
    scanf ("%d", &n);
    {
        i = 430 - 429;
        while (i <= n) {
            scanf ("%d", &a[i]);
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
            i = i + 1;
        };
    }
    printf ("%d", a[1]);
    b[1] = a[1];
    {
        i = 2;
        while (i <= n) {
            flag = 0;
            {
                HuCnHTLVW = 1;
                while (HuCnHTLVW <= STPrJI) {
                    if (a[i] == b[HuCnHTLVW])
                        flag = 1;
                    HuCnHTLVW++;
                };
            }
            if (flag == 1)
                continue;
            else {
                STPrJI = STPrJI +1;
                b[STPrJI] = a[i];
                printf (" %d", a[i]);
            }
            i = i + 1;
        };
    };
}

