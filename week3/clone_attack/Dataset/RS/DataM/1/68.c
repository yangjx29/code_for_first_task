int tmp = 2;

int suml (int n, int tmp) {
    int sum = 0;
    if (n == 1) {
        return 1;
    }
    {
        int i = tmp;
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
        while (n >= i) {
            if (n % i == 0) {
                sum = sum + suml (n / i, i);
            }
            i = i + 1;
        };
    }
    return sum;
}

int main () {
    int m;
    int n;
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
    cin >> m;
    {
        int i = 0;
        while (i < m) {
            int zon_shu = 0;
            i++;
            cin >> n;
            zon_shu = suml (n, tmp);
            cout << zon_shu << endl;
        };
    };
}

