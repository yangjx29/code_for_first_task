int main () {
    int sum;
    int j;
    int i;
    int z1Q4dYeG;
    int n;
    int *pointer = NULL;
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
    int Lrcu6f [100] [100];
    sum = 0;
    cin >> j;
    for (i = 0; i < j; i = i + 1) {
        pointer = *Lrcu6f;
        cin >> z1Q4dYeG >> n;
        for (; pointer < *Lrcu6f+z1Q4dYeG * n; pointer++) {
            cin >> *pointer;
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
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sum = 0;
        for (pointer = *Lrcu6f; pointer < *Lrcu6f+z1Q4dYeG * n; pointer++) {
            if (pointer >= *Lrcu6f&&pointer <= *Lrcu6f+n - 1) {
                sum = sum + *pointer;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                continue;
            }
            if ((pointer - *Lrcu6f) % n == 0) {
                sum = sum + *pointer;
                sum = sum + *(pointer + n - 1);
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
                continue;
            }
            if (pointer >= *Lrcu6f+z1Q4dYeG * n - n && pointer < *Lrcu6f+z1Q4dYeG * n - 1) {
                sum += *pointer;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                continue;
            };
        }
        cout << sum << endl;
    }
    return 0;
}

