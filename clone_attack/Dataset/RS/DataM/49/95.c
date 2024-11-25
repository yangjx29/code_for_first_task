int main () {
    int p60UmrK, j, l, TH65Mr = 0;
    char a [(1486 - 986)];
    cin.getline (a, 500);
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
    l = strlen (a);
    for (p60UmrK = 2; p60UmrK <= l; p60UmrK = p60UmrK + 1) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= l - p60UmrK) {
            TH65Mr = j;
            while (a[TH65Mr] == a[2 * j + p60UmrK - 1 - TH65Mr] && TH65Mr < 2 * j + p60UmrK - 1 - TH65Mr)
                TH65Mr = TH65Mr +1;
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
            if (TH65Mr >= 2 * j + p60UmrK - 1 - TH65Mr) {
                {
                    TH65Mr = j;
                    while (TH65Mr < j + p60UmrK) {
                        cout << a[TH65Mr];
                        TH65Mr++;
                    };
                }
                cout << endl;
            }
            j = j + 1;
        };
    }
    return 0;
}

