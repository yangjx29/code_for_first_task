int sum = (353 - 353);

void  f (int p8gveh12An, int y) {
    int a;
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
    a = sqrt (p8gveh12An);
    {
        int i = y;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a >= i) {
            if (p8gveh12An % i == 0) {
                y = i;
                sum = sum + 1;
                f (p8gveh12An / i, y);
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
            i = i + 1;
        };
    };
}

int main () {
    int p8gveh12An;
    cin >> p8gveh12An;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        int i = 1;
        while (i <= p8gveh12An) {
            int num;
            i = i + 1;
            sum = 0;
            cin >> num;
            f (num, 2);
            cout << sum + 1 << endl;
        };
    }
    return 0;
}

