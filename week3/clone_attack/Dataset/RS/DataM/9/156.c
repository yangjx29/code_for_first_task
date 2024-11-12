main () {
    int se [100];
    int list [100] = {(871 - 871)};
    char junior [100] [10];
    char kMBoae0i [100] [10];
    char temp [10];
    int ju [100];
    int QDjyPhnNM;
    int cW9Kcjw0h;
    int j;
    int k;
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
    int nums;
    int numj;
    int year;
    nums = -1;
    scanf ("%d", &QDjyPhnNM);
    numj = -1;
    {
        cW9Kcjw0h = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (cW9Kcjw0h <= QDjyPhnNM) {
            scanf ("%s", temp);
            scanf ("%d", &year);
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
            if (year >= 60) {
                nums++;
                strcpy (kMBoae0i[nums], temp);
                se[nums] = year;
                list[nums] = nums;
            }
            else {
                numj = numj + 1;
                strcpy (junior[numj], temp);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                ju[numj] = year;
            }
            cW9Kcjw0h = cW9Kcjw0h + 1;
        };
    }
    {
        cW9Kcjw0h = 0;
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
        while (nums > cW9Kcjw0h) {
            {
                j = cW9Kcjw0h + 1;
                while (j <= nums) {
                    if ((se[cW9Kcjw0h] < se[j])) {
                        year = se[cW9Kcjw0h];
                        se[cW9Kcjw0h] = se[j];
                        se[j] = year;
                        year = list[cW9Kcjw0h];
                        list[cW9Kcjw0h] = list[j];
                        strcpy (temp, kMBoae0i[cW9Kcjw0h]);
                        list[j] = year;
                        strcpy (kMBoae0i[cW9Kcjw0h], kMBoae0i[j]);
                        strcpy (kMBoae0i[j], temp);
                    }
                    else if (se[cW9Kcjw0h] == se[j] && list[cW9Kcjw0h] > list[j]) {
                        year = se[cW9Kcjw0h];
                        se[cW9Kcjw0h] = se[j];
                        se[j] = year;
                        year = list[cW9Kcjw0h];
                        list[cW9Kcjw0h] = list[j];
                        strcpy (temp, kMBoae0i[cW9Kcjw0h]);
                        list[j] = year;
                        strcpy (kMBoae0i[cW9Kcjw0h], kMBoae0i[j]);
                        strcpy (kMBoae0i[j], temp);
                    }
                    j = j + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            cW9Kcjw0h++;
        };
    }
    {
        cW9Kcjw0h = 0;
        while (cW9Kcjw0h <= nums) {
            puts (kMBoae0i [cW9Kcjw0h]);
            cW9Kcjw0h++;
        };
    }
    {
        cW9Kcjw0h = 0;
        while (cW9Kcjw0h <= numj) {
            puts (junior [cW9Kcjw0h]);
            cW9Kcjw0h++;
        };
    }
    return 0;
}

