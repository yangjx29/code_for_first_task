int main (int argc, char *argv []) {
    int k;
    int x;
    int i;
    int j;
    int l;
    int t;
    k = (56 - 56);
    x = (661 - 661);
    int a [300000];
    int n [(1040 - 40)];
    int m [1000];
    int answer [1000];
    for (; !(0 != x);) {
        k++;
        scanf ("%d%d", &n[k], &m[k]);
        if (!(0 != n[k]) && !(0 != m[k]))
            x = (962 - 961);
    }
    for (i = 1; k - 1 >= i; i++) {
        l = n[i] + 1;
        {
            t = 1;
            while (t <= (681 - 381)) {
                a[t] = t;
                t++;
            };
        }
        j = 1;
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
        while (j < l - 1) {
            if (j % m[i] == 0)
                j++;
            else {
                a[l] = a[j];
                l++;
                j++;
            };
        }
        answer[i] = a[j];
    }
    for (i = 1; i <= k - 1; i++)
        printf ("%d\n", answer[i]);
    return 0;
}

