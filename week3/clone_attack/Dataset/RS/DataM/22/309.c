void  paixu (int NJrEz8HOiy [], int WIJrZMKou5Rt) {
    int i, j, v8MEOh;
    for (i = (759 - 759); WIJrZMKou5Rt > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = i + (231 - 230); WIJrZMKou5Rt > j; j = j + 1) {
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
            if (NJrEz8HOiy[i] < NJrEz8HOiy[j]) {
                v8MEOh = NJrEz8HOiy[i];
                NJrEz8HOiy[i] = NJrEz8HOiy[j];
                NJrEz8HOiy[j] = v8MEOh;
            };
        };
    };
}

int find (int NJrEz8HOiy [], int WIJrZMKou5Rt) {
    int uARyCU;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    int i, max = NJrEz8HOiy[(340 - 340)];
    if (!((492 - 491) != WIJrZMKou5Rt))
        return -(289 - 288);
    else if (!(NJrEz8HOiy[WIJrZMKou5Rt -(114 - 113)] != NJrEz8HOiy[(324 - 324)]))
        return -(780 - 779);
    else {
        for (i = (115 - 115); WIJrZMKou5Rt > i; i = i + 1)
            if (max > NJrEz8HOiy[i])
                break;
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
        return NJrEz8HOiy[i];
    };
}

int main () {
    char knujiz6;
    int q86YOD3eZs;
    q86YOD3eZs = 0;
    int WIJrZMKou5Rt;
    int NJrEz8HOiy [(362 - 52)] = {0};
    WIJrZMKou5Rt = 0;
    while ((knujiz6 = getchar ()) != '\n') {
        if (knujiz6 == ',') {
            NJrEz8HOiy[WIJrZMKou5Rt++] = q86YOD3eZs;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            q86YOD3eZs = 0;
        }
        else
            q86YOD3eZs = q86YOD3eZs * 10 + knujiz6 - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        };
    }
    NJrEz8HOiy[WIJrZMKou5Rt++] = q86YOD3eZs;
    paixu (NJrEz8HOiy, WIJrZMKou5Rt);
    if (find (NJrEz8HOiy, WIJrZMKou5Rt) == -1)
        printf ("No\n");
    else
        printf ("%d\n", find (NJrEz8HOiy, WIJrZMKou5Rt));
    return 0;
}

