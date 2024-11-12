int main () {
    int j;
    int sz [MAX];
    int n;
    int hZHvhQ47j5do;
    int i;
    j = 1;
    scanf ("%d %d", &n, &hZHvhQ47j5do);
    for (i = 0; n - 1 >= i; i++) {
        scanf ("%d ", &sz[i]);
    }
    printf ("no");
    for (i = 0; n - 1 > i; i++, j = i + 1) {
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
        for (; j <= n - 1;) {
            if (sz[i] + sz[j] == hZHvhQ47j5do) {
                printf ("yes");
                return 0;
            }
            j++;
        };
    };
}

