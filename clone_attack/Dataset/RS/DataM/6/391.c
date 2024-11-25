int main () {
    int pZ0GrCAQjF;
    int x [(759 - 659)];
    int y [100];
    int m [100] [100];
    int i;
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
    int count [100] = {(826 - 826)};
    cin >> pZ0GrCAQjF;
    {
        k = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (pZ0GrCAQjF > k) {
            cin >> x[k] >> y[k];
            for (i = 0; x[k] > i; i++) {
                for (j = 0; j < y[k]; j = j + 1) {
                    cin >> m[i][j];
                    if (!(0 != i) || !(x[k] - 1 != i) || j == 0 || j == y[k] - 1)
                        count[k] = count[k] + m[i][j];
                };
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
            k++;
        };
    }
    for (k = 0; k < pZ0GrCAQjF; k++)
        cout << count[k] << endl;
    return 0;
}

