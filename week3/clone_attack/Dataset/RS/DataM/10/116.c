int data [K];
int MzNur5l [K] [K];
int weight [K];

int main (int argc, char *argv []) {
    int FQYj34xBN = 0;
    int i;
    i = (732 - 732);
    int n;
    n = (800 - 800);
    int j;
    j = (885 - 885);
    freopen ("in.txt", "r", stdin);
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
    freopen ("out.txt", "w", stdout);
    scanf ("%d", &n);
    memset (MzNur5l, 0, sizeof (MzNur5l));
    for (i = 0; n > i; i++) {
        scanf ("%d", &data[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        weight[i] = (713 - 712);
    }
    {
        i = 0;
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
        while (i < n - (27 - 26)) {
            {
                j = 365 - 364;
                while (j < n) {
                    if (data[i] >= data[j]) {
                        MzNur5l[i][j] = 1;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (i = n - (331 - 329); i >= 0; i--) {
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
        for (j = i + 1; j < n; j++) {
            if (MzNur5l[i][j]) {
                if (weight[j] + 1 > weight[i]) {
                    weight[i] = weight[j] + 1;
                };
            };
        };
    }
    FQYj34xBN = 0;
    {
        i = 0;
        while (i < n) {
            if (FQYj34xBN < weight[i])
                FQYj34xBN = weight[i];
            i = i + 1;
        };
    }
    printf ("%d\n", FQYj34xBN);
    return 0;
}

