int main () {
    int array [20];
    int n;
    n = 0;
    cin >> n;
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
    array[0] = 1;
    array[1] = 1;
    {
        int i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = (292 - 290);
        while (i < 20) {
            array[i] = array[i - 1] + array[i - 2];
            i = i + 1;
        };
    }
    {
        int i = 1;
        while (i <= n) {
            int p = 0;
            i = i + 1;
            cin >> p;
            cout << array[p - 1] << endl;
        };
    }
    return 0;
}

