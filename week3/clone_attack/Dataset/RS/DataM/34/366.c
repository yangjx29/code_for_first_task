void  Guess (int n) {
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
    if (n == (104 - 103)) {
        cout << "End" << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
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
        if (n % (723 - 721) != 0) {
            int result;
            result = n * (178 - 175) + 1;
            Guess (result);
            cout << n << "*3+1=" << result << endl;
        }
        else {
            int result = n / 2;
            Guess (result);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cout << n << "/2=" << result << endl;
        };
    };
}

int main () {
    int n;
    Guess (n);
    cin >> n;
}

