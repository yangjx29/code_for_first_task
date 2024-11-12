int main (void ) {
    char ch;
    ch = ',';
    int hb2H9B7QAtcR;
    int i;
    int x [1000] = {0};
    int b5IC1uWU8HP [1000] = {0};
    int a [1000] = {0};
    int j;
    hb2H9B7QAtcR = 0;
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
    i = 0;
    for (; ch == ',';) {
        ch = getchar ();
        cin >> x[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = i + 1;
    }
    cout << i << " ";
    i = 0;
    ch = ',';
    for (; ch == ',';) {
        ch = getchar ();
        cin >> b5IC1uWU8HP[i];
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
    }
    {
        i = 0;
        while (i < 1000) {
            for (j = x[i]; j < b5IC1uWU8HP[i]; j++)
                a[j] = a[j] + 1;
            i++;
        };
    }
    {
        i = 0;
        while (i < 1000) {
            if (a[i] > hb2H9B7QAtcR)
                hb2H9B7QAtcR = a[i];
            i++;
        };
    }
    cout << hb2H9B7QAtcR;
    return 0;
}

