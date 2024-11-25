int main () {
    int FcZg5f;
    int a [100];
    int *p;
    int i;
    scanf ("%d", &FcZg5f);
    for (i = 0; i < FcZg5f; i = i + 1) {
        scanf ("%d", &a[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    p = a;
    {
        i = FcZg5f -1;
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
        while (i >= 0) {
            if (i == FcZg5f -1)
                printf ("%d", *(p + i));
            else
                printf (" %d", *(p + i));
            i = i - 1;
        };
    }
    return 0;
}

