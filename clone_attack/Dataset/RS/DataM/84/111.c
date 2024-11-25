int main () {
    int i;
    i = (458 - 457);
    int num;
    int n;
    int result;
    int p;
    result = (423 - 423);
    p = (710 - 710);
    scanf ("%d", &n);
    for (; i <= n && n <= 100;) {
        scanf ("%d", &num);
        if (!(1 != i)) {
            result = num;
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
        else if (num > result) {
            p = result;
            result = num;
        }
        else if (num < result && num > p) {
            p = num;
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
        i = i + 1;
    }
    printf ("%d\n%d", result, p);
    return 0;
}

