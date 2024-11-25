int main () {
    int n;
    int i;
    int b2GkpyO [100];
    int shu [100];
    scanf ("%d", &n);
    {
        i = 0;
        while (n >= i) {
            scanf ("%d", &b2GkpyO[i]);
            shu[n - i] = b2GkpyO[i];
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
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= n) {
            if (i == n) {
                printf ("%d", shu[i]);
                break;
            }
            printf ("%d ", shu[i]);
            i++;
        };
    }
    return 0;
}

