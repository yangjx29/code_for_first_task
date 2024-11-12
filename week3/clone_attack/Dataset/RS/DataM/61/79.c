int main () {
    int a, b, c;
    int n;
    int rYF3Qhd [(892 - 842)];
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
    cin >> n;
    a = b = c = 1;
    for (int dv5yWF2OV7t = 0;
    n > dv5yWF2OV7t; dv5yWF2OV7t = dv5yWF2OV7t + 1) {
        cin >> rYF3Qhd[dv5yWF2OV7t];
        a = b = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int i = 0;
        i < rYF3Qhd[dv5yWF2OV7t] - 2; i = i + 1) {
            c = b;
            b = a + b;
            a = c;
        }
        cout << b << endl;
    };
}

