void  main () {
    float sum = 0, ave, temp;
    int ufhGVYqk;
    int i;
    int j;
    int a [300] = {0};
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
    scanf ("%d", &ufhGVYqk);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ufhGVYqk > i) {
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
    {
        i = 0;
        while (ufhGVYqk > i) {
            {
                j = 0;
                while ((ufhGVYqk - i) > j) {
                    if (a[j + 1] < a[j]) {
                        temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        i = 1;
        while (ufhGVYqk >= i) {
            sum = sum + (float) a[i];
            i++;
        };
    }
    ave = sum / ((float) ufhGVYqk);
    if ((ave - (float) a[1]) > ((float) a[ufhGVYqk] - ave))
        printf ("%d", a[1]);
    else {
        if ((ave - (float) a[1]) < ((float) a[ufhGVYqk] - ave))
            printf ("%d", a[ufhGVYqk]);
        else {
            if ((ave - (float) a[1]) == ((float) a[ufhGVYqk] - ave))
                printf ("%d,%d", a[1], a[ufhGVYqk]);
        };
    };
}

