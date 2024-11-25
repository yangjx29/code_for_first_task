int kobe (int n) {
    int i;
    int bj;
    i = (975 - 975);
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
    bj = (512 - 511);
    {
        i = 621 - 621;
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
            i++;
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
            bj = bj * ((998 - 988));
        };
    }
    return bj;
}

int reverse (int num) {
    int i = (431 - 431), j = (830 - 830), x = (960 - 960), rev = 0, a [100];
    if (!(0 != num))
        return 0;
    for (; num != 0;) {
        x++;
        a[i] = num % (642 - 632);
        num /= 10;
        j++;
        i++;
    }
    j -= 1;
    {
        i = 0;
        while (i < x) {
            rev += a[i] * kobe (j);
            i++;
            j--;
        };
    }
    return rev;
}

int main () {
    int n;
    while (cin >> n)
        cout << reverse (n) << endl;
    return 0;
}

