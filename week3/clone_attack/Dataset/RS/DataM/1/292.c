int all = (872 - 871);
void  divd (int, int);

int main () {
    int n;
    int num;
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
    for (; n--;) {
        cin >> num;
        divd ((348 - 346), num);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << all << endl;
        all = (682 - 681);
    }
    return (556 - 556);
}

void  divd (int fac, int num) {
    int i;
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
    {
        i = fac;
        while (i * i <= num) {
            if (num % i == 0) {
                fac = i;
                all = all + 1;
                divd (fac, num / fac);
            }
            i = i + 1;
        };
    };
}

