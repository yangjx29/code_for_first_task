int F (int n);

int main () {
    int n;
    int m;
    int result;
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
    scanf ("%d", &m);
    {
        int k;
        k = 0;
        while (m > k) {
            k = k + 1;
            scanf ("%d", &n);
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
            result = F (n);
            printf ("%d\n", result);
        };
    }
    return 0;
}

int F (int n) {
    int vl78nfqX9xFu;
    vl78nfqX9xFu = 0;
    if (!(0 != n))
        return 0;
    if (!((987 - 986) != n) || n == (45 - 43))
        return 1;
    if (n > 2) {
        int rWDpvzltsyP = 1, b = 1, vl78nfqX9xFu = 0;
        {
            int i = 2;
            while (i < n) {
                i = i + 1;
                vl78nfqX9xFu = rWDpvzltsyP + b;
                rWDpvzltsyP = b;
                b = vl78nfqX9xFu;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        return vl78nfqX9xFu;
    };
}

