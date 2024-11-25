int main () {
    int n;
    int i;
    int JBaq4ZA;
    int k = 0;
    int a [N];
    int b [N];
    int RMGTnKwWh [N];
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
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d%d", &a[i], &b[i]);
        if (90 <= a[i] && 140 >= a[i] && b[i] >= 60 && b[i] <= 90) {
            k = k + 1;
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
            RMGTnKwWh[i] = k;
        }
        else {
            RMGTnKwWh[i] = k = 0;
        };
    }
    JBaq4ZA = RMGTnKwWh[0];
    for (i = 0; i < n; i = i + 1) {
        if (JBaq4ZA < RMGTnKwWh[i]) {
            JBaq4ZA = RMGTnKwWh[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    printf ("%d", JBaq4ZA);
    return 0;
}

