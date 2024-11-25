int main () {
    int q [(908 - 878)];
    int dijige [20];
    int n;
    q[0] = (946 - 945);
    q[1] = 1;
    scanf ("%d", &n);
    {
        int cumWo4VJ = 0;
        while (cumWo4VJ <= n - (78 - 77)) {
            scanf ("%d", &(dijige[cumWo4VJ]));
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
            cumWo4VJ++;
        };
    }
    {
        int k = 2;
        while (k <= 25) {
            q[k] = q[k - 1] + q[k - 2];
            k = k + 1;
        };
    }
    {
        int j = 0;
        while (j <= n - 1) {
            printf ("%d\n", q[dijige[j] - 1]);
            j++;
        };
    }
    return 0;
}

