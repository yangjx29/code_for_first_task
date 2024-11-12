int main () {
    int ouHFJQS, dZpaAe739z, b, i, j, zM0sDK1SEt, j_limit_b, DsnekBLE, bool_b;
    scanf ("%d", &ouHFJQS);
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
    {
        dZpaAe739z = 3;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (dZpaAe739z <= (ouHFJQS / 2)) {
            zM0sDK1SEt = sqrt (dZpaAe739z);
            DsnekBLE = 1;
            {
                i = 3;
                while (zM0sDK1SEt >= i) {
                    if (dZpaAe739z % i == 0) {
                        DsnekBLE = 0;
                        break;
                    }
                    i = i + 2;
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
            if (DsnekBLE) {
                b = ouHFJQS - dZpaAe739z;
                j_limit_b = sqrt (b);
                bool_b = 1;
                for (j = 3; j <= j_limit_b; j = j + 2)
                    if (b % j == 0) {
                        bool_b = 0;
                        break;
                    }
                if (bool_b)
                    printf ("%d %d\n", dZpaAe739z, b);
            }
            dZpaAe739z = dZpaAe739z + 2;
        };
    }
    return 0;
}

