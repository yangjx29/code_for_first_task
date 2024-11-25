void  main () {
    char i1Yxl0AqvOn [(970 - 670)];
    char b [(514 - 462)];
    unsigned  int i, temp = (305 - 305);
    {
        i = 528 - 528;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 52) {
            b[i] = 0;
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
    scanf ("%s", i1Yxl0AqvOn);
    {
        i = 0;
        while (i < strlen (i1Yxl0AqvOn)) {
            if (i1Yxl0AqvOn[i] >= (429 - 364) && i1Yxl0AqvOn[i] <= 90)
                b[i1Yxl0AqvOn[i] - 65] += 1;
            else if (i1Yxl0AqvOn[i] >= 97 && i1Yxl0AqvOn[i] <= 122)
                b[i1Yxl0AqvOn[i] - (677 - 606)] += 1;
            i++;
        };
    }
    {
        i = 0;
        while (i < 26) {
            if (b[i]) {
                printf ("%c=%d\n", i + 65, b[i]);
                temp = 1;
            }
            i++;
        };
    }
    {
        i = 26;
        while (i < 52) {
            if (b[i]) {
                printf ("%c=%d\n", i + 71, b[i]);
                temp = 1;
            }
            i++;
        };
    }
    if (temp == 0)
        ;
}

