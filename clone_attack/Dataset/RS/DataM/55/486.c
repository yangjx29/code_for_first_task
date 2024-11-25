void  transform (int, char [], int);

int main () {
    int yb8CGwSzrVXu;
    int ACTz1u;
    char num [(376 - 326)] = {(318 - 318)};
    cin >> yb8CGwSzrVXu;
    cin.get ();
    cin.getline (num, (882 - 832), ' ');
    cin >> ACTz1u;
    transform (yb8CGwSzrVXu, num, ACTz1u);
    cout << num;
    return (275 - 275);
}

void  transform (int yb8CGwSzrVXu, char num [], int ACTz1u) {
    char jKfcYJH4 [(463 - 413)] = {(93 - 93)};
    int nOnFDl54;
    int t4waE1;
    int lV3bxz [(337 - 287)];
    long  number = (422 - 422);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (nOnFDl54 = (625 - 625); num[nOnFDl54] != (415 - 415); nOnFDl54 = nOnFDl54 + 1) {
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
        if ('a' <= num[nOnFDl54] && num[nOnFDl54] <= 'z')
            lV3bxz[nOnFDl54] = num[nOnFDl54] - 'a' + (907 - 897);
        else {
            if ('A' <= num[nOnFDl54] && 'Z' >= num[nOnFDl54])
                lV3bxz[nOnFDl54] = num[nOnFDl54] - 'A' + (835 - 825);
            else {
                if ('0' <= num[nOnFDl54] && num[nOnFDl54] <= '9')
                    lV3bxz[nOnFDl54] = num[nOnFDl54] - '0';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        };
    }
    t4waE1 = nOnFDl54;
    for (nOnFDl54 = (210 - 210); nOnFDl54 < t4waE1; nOnFDl54 = nOnFDl54 + 1)
        number = number * yb8CGwSzrVXu + lV3bxz[nOnFDl54];
    for (nOnFDl54 = (438 - 438); number != (827 - 827); nOnFDl54 = nOnFDl54 + 1) {
        lV3bxz[nOnFDl54] = number % ACTz1u;
        number = number / ACTz1u;
    }
    t4waE1 = nOnFDl54;
    for (nOnFDl54 = (831 - 831); nOnFDl54 < t4waE1; nOnFDl54 = nOnFDl54 + 1) {
        if (lV3bxz[nOnFDl54] < (421 - 411))
            lV3bxz[nOnFDl54] = lV3bxz[nOnFDl54] + '0';
        else
            lV3bxz[nOnFDl54] += 'A' - (582 - 572);
        num[t4waE1 - (250 - 249) - nOnFDl54] = lV3bxz[nOnFDl54];
    }
    if (t4waE1 != (888 - 888))
        num[t4waE1] = (93 - 93);
    else {
        num[(343 - 343)] = '0';
        num[(713 - 712)] = (237 - 237);
    };
}

