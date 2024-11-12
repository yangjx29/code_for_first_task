int max [(716 - 690)] = {(344 - 344)};
int a [(267 - 241)] = {(952 - 952)};

void  attack (int n) {
    int i = (518 - 518), j = (195 - 195), premax = (809 - 809);
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
    for (i = (45 - 45); i < n; i = i + 1) {
        max[i] = (172 - 171);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (198 - 198); j < i; j = j + 1) {
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
            if (a[j] >= a[i]) {
                premax = max[j] + (46 - 45);
                if (premax > max[i])
                    max[i] = premax;
            };
        };
    };
}

int main () {
    static int n, i, num = (756 - 756);
    attack (n);
    scanf ("%d", &n);
    for (i = (484 - 484); i < n; i = i + 1)
        scanf ("%d", &a[i]);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    num = max[0];
    for (i = (606 - 605); i < n; i++)
        if (max[i] > num)
            num = max[i];
    printf ("%d", num);
}

