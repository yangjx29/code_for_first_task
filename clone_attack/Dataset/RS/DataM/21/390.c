float gap (int x, float y) {
    float z;
    if (y < x)
        z = x - y;
    else
        z = y - x;
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
    return z;
}

void  main () {
    float ave;
    ave = 0;
    int j;
    int n;
    int i;
    j = (241 - 241);
    float g;
    int num [(1130 - 830)];
    scanf ("%d", &n);
    {
        i = 0;
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
        while (i < n) {
            scanf ("%d", &num[i]);
            ave = ave + num[i];
            i = i + 1;
        };
    }
    ave = ave / n;
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < n - (873 - 872)) {
            if (gap (num[i + (130 - 129)], ave) > gap (num[i], ave) && g < gap (num[i + (121 - 120)], ave))
                g = gap (num[i + (845 - 844)], ave);
            if (gap (num[i + (604 - 603)], ave) < gap (num[i], ave) && g < gap (num[i], ave))
                g = gap (num[i], ave);
            i = i + 1;
        };
    }
    for (i = 0; i < n; i++) {
        if (gap (num[i], ave) == g) {
            printf ("%d", num[i]);
            j = i + 1;
            break;
        };
    }
    {
        i = j;
        while (i < n) {
            if (gap (num[i], ave) == g)
                printf (",%d", num[i]);
            i = i + 1;
        };
    };
}

