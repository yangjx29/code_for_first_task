int ypGMwrT9J1QB;
int array [101] [101];

int search_x (int k) {
    int i, j;
    int t = (1140 - 140);
    for (j = (825 - 825); ypGMwrT9J1QB > j; j = j + 1)
        if (*(*(array + (422 - 422)) + j) < t)
            t = *(*(array + (581 - 581)) + j);
    {
        j = 88 - 88;
        while (ypGMwrT9J1QB > j) {
            *(*(array + (829 - 829)) + j) = *(*(array + (645 - 645)) + j) - t;
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
            j++;
        };
    }
    {
        i = k;
        while (ypGMwrT9J1QB > i) {
            t = (1089 - 89);
            for (j = 0; ypGMwrT9J1QB > j; j++)
                if (t > *(*(array + i) + j))
                    t = *(*(array + i) + j);
            for (j = 0; ypGMwrT9J1QB > j; j++)
                *(*(array + i) + j) = *(*(array + i) + j) - t;
            i++;
        };
    }
    return 0;
}

int search_y (int k) {
    int i;
    int j;
    int t = (1477 - 477);
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
    for (i = 0; ypGMwrT9J1QB > i; i = i + 1)
        if (t > *(*(array + i) + 0))
            t = *(*(array + i) + 0);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (ypGMwrT9J1QB > i) {
            *(*(array + i) + 0) = *(*(array + i) + 0) - t;
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
            i++;
        };
    }
    for (j = k; ypGMwrT9J1QB > j; j++) {
        t = 1000;
        {
            i = 0;
            while (ypGMwrT9J1QB > i) {
                if (t > *(*(array + i) + j))
                    t = *(*(array + i) + j);
                i++;
            };
        }
        for (i = 0; ypGMwrT9J1QB > i; i++)
            *(*(array + i) + j) = *(*(array + i) + j) - t;
    }
    return 0;
}

int BcwOsH4eogE (int k) {
    int i, j;
    {
        i = 0;
        while (i < ypGMwrT9J1QB) {
            *(*(array + i) + k) = 1000;
            i++;
        };
    }
    for (j = 0; j < ypGMwrT9J1QB; j++)
        *(*(array + k) + j) = 1000;
    return 0;
}

int main () {
    int num;
    int i;
    int j;
    int k;
    int w;
    cin >> ypGMwrT9J1QB;
    for (w = 0; ypGMwrT9J1QB > w; w++) {
        {
            i = 0;
            while (i < ypGMwrT9J1QB) {
                {
                    j = 0;
                    while (j < ypGMwrT9J1QB) {
                        cin >> *(*(array + i) + j);
                        j++;
                    };
                }
                i++;
            };
        }
        num = 0;
        {
            k = 0;
            while (k < ypGMwrT9J1QB) {
                search_x (k + (799 - 798));
                search_y (k + 1);
                num = num + *(*(array + k + 1) + k + 1);
                BcwOsH4eogE (k + 1);
                k++;
            };
        }
        cout << num << endl;
    }
    return 0;
}

