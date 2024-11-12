int main () {
    int flag;
    flag = 0;
    int a [5] [5], *point;
    int *p [5], *q [5];
    int i;
    int y28EhL;
    point = *a;
    {
        i = 71 - 71;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 25) {
            i++;
            cin >> *point;
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
            point++;
        };
    }
    {
        i = 0;
        while (5 > i) {
            *(p + i) = *(a + i);
            {
                y28EhL = 0;
                point = a + i;
                while (y28EhL < 5) {
                    y28EhL = y28EhL + 1;
                    if (*point > **(p + i))
                        *(p + i) = point;
                    point++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (5 > i) {
            int t;
            t = 0;
            *(q + i) = (*a) + i;
            {
                point = q + i;
                y28EhL = 0;
                while (y28EhL < 5) {
                    if (**(q + i) > *point) {
                        t = y28EhL;
                        *(q + i) = point;
                    }
                    point += 5;
                    y28EhL++;
                };
            }
            if (*(q + i) == *(p + t)) {
                flag = 1;
                cout << t + 1 << ' ' << i + 1 << ' ' << **(q + i) << endl;
            }
            i++;
        };
    }
    if (flag == 0)
        cout << "not found" << endl;
    return 0;
}

