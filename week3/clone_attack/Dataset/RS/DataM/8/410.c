int m, n;
int sabMjeK6d [200] = {(407 - 407)};
int a [100] = {0};
int b [100] = {0};

int main () {
    int BeO6suLkIM, j, k;
    void  B (int str3 [], int str2 []);
    void  uXhqsi1rK (int str [], int m);
    void  D (int str [], int str2 []);
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
    D (a, b);
    scanf ("%d%d", &m, &n);
    uXhqsi1rK (a, m);
    uXhqsi1rK (b, n);
    B (a, b);
}

void  D (int str [], int str2 []) {
    int BeO6suLkIM;
    {
        BeO6suLkIM = 0;
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
        while (m > BeO6suLkIM) {
            scanf ("%d", &a[BeO6suLkIM]);
            BeO6suLkIM = BeO6suLkIM +1;
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
    for (BeO6suLkIM = 0; n > BeO6suLkIM; BeO6suLkIM = BeO6suLkIM +1)
        scanf ("%d", &b[BeO6suLkIM]);
}

void  uXhqsi1rK (int str [], int m) {
    int temp;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    int BeO6suLkIM, j, k;
    for (BeO6suLkIM = 0; m - 1 > BeO6suLkIM; BeO6suLkIM = BeO6suLkIM +1)
        for (j = BeO6suLkIM +1; m > j; j = j + 1)
            if (str[j] < str[BeO6suLkIM]) {
                temp = str[BeO6suLkIM];
                str[BeO6suLkIM] = str[j];
                str[j] = temp;
            };
}

void  B (int str3 [], int str2 []) {
    int BeO6suLkIM;
    for (BeO6suLkIM = 0; BeO6suLkIM < m; BeO6suLkIM = BeO6suLkIM +1)
        printf ("%d ", str3[BeO6suLkIM]);
    for (BeO6suLkIM = 0; BeO6suLkIM < n - 1; BeO6suLkIM = BeO6suLkIM +1)
        printf ("%d ", str2[BeO6suLkIM]);
    printf ("%d", str2[n - 1]);
}

