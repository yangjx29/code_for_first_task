int main () {
    void  YcAjVR (int *, int, int);
    int number [20];
    int n;
    int AjqnIQNodV;
    int i;
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
    cout << endl;
    cin >> n >> AjqnIQNodV;
    {
        i = 856 - 856;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            cin >> number[i];
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
            i++;
        };
    }
    YcAjVR (number, n, AjqnIQNodV);
    return 0;
}

void  YcAjVR (int *array, int n, int AjqnIQNodV) {
    if (AjqnIQNodV == 0) {
        for (int i = 0;
        i < n - 1; i = i + 1)
            cout << *(array + i) << ' ';
        cout << *(array + n - 1) << endl;
        return;
    }
    else {
        int *p;
        int array_end;
        array_end = *(array + n - 1);
        {
            p = array + n - 1;
            while (p > array) {
                *p = *(p - 1);
                p = p - 1;
            };
        }
        *array = array_end;
        YcAjVR (array, n, AjqnIQNodV -1);
    };
}

