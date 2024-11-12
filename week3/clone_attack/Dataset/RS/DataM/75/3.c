int main () {
    char rYa8hwc [9999];
    int j;
    int SqO0iHca;
    int dcneF3O;
    int x [(10585 - 586)] = {0};
    int y [9999];
    int non [9999];
    int p [9999] = {0};
    int max_p;
    int min;
    int max;
    int len;
    j = (259 - 258);
    cin.getline (rYa8hwc, 9999);
    len = strlen (rYa8hwc);
    {
        dcneF3O = 0;
        while (dcneF3O <= len) {
            if (!(',' != rYa8hwc[dcneF3O]) || !('\0' != rYa8hwc[dcneF3O])) {
                non[j] = dcneF3O;
                j = j + 1;
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
            dcneF3O = dcneF3O + 1;
        };
    }
    SqO0iHca = j - (527 - 526);
    {
        j = 0;
        while (j < non[1]) {
            x[1] = 10 * x[1] + rYa8hwc[j] - '0';
            j = j + 1;
        };
    }
    {
        dcneF3O = 2;
        while (SqO0iHca >= dcneF3O) {
            {
                j = dcneF3O - 1;
                while (non[dcneF3O] > j) {
                    x[dcneF3O] = 10 * x[dcneF3O] + rYa8hwc[j] - '0';
                    j = j + 1;
                };
            }
            dcneF3O = dcneF3O + 1;
        };
    }
    {
        dcneF3O = 1;
        while (dcneF3O <= SqO0iHca) {
            cin >> y[dcneF3O];
            dcneF3O = dcneF3O + 1;
            cin.get ();
        };
    }
    min = x[1], max = y[1];
    {
        dcneF3O = 1;
        while (dcneF3O <= SqO0iHca) {
            if (x[dcneF3O] < min)
                min = x[dcneF3O];
            if (max < y[dcneF3O])
                max = y[dcneF3O];
            dcneF3O++;
        };
    }
    {
        dcneF3O = min;
        while (dcneF3O <= max) {
            {
                j = 1;
                while (j <= SqO0iHca) {
                    if (x[j] <= dcneF3O && y[j] >= dcneF3O + 1)
                        p[dcneF3O]++;
                    j++;
                };
            }
            dcneF3O++;
        };
    }
    max_p = p[min];
    {
        dcneF3O = min + 1;
        while (dcneF3O <= max) {
            if (max_p < p[dcneF3O])
                max_p = p[dcneF3O];
            dcneF3O++;
        };
    }
    cout << SqO0iHca << ' ' << max_p;
    return 0;
}

