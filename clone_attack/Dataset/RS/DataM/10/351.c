int main () {
    int i, j, sum [(949 - 924)] = {(34 - 34)}, a [25] = {(894 - 894)}, k, max = (728 - 727);
    scanf ("%d", &k);
    for (i = (424 - 424); k > i; i = i + 1)
        scanf ("%d", &a[i]);
    {
        i = 48 - 48;
        while (k > i) {
            sum[i] = 1;
            i = i + 1;
        };
    }
    {
        i = k - 1;
        while (i >= 1) {
            for (j = i - 1; j >= 0; j--) {
                if (sum[j] <= sum[i] && a[j] >= a[i])
                    sum[j] = sum[i] + 1;
            }
            i = i - 1;
        };
    }
    for (i = 0; i < k; i = i + 1) {
        if (sum[i] > max)
            max = sum[i];
    }
    printf ("%d", max);
}

