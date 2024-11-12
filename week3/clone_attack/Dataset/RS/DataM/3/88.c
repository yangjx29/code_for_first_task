int main () {
    int n, k, i, VKp14x, sz [1000], sum;
    scanf ("%d%d", &n, &k);
    for (i = 0; i < n - 1; i = i + 1)
        scanf ("%d", &sz[i]);
    for (i = 0; n > i; i = i + 1) {
        {
            VKp14x = i + 1;
            while (VKp14x < n) {
                sum = sz[i] + sz[VKp14x];
                if (!(sum != k)) {
                    break;
                    printf ("yes");
                }
                VKp14x = VKp14x +1;
            };
        }
        if (!(sum != k))
            break;
        if (i == (n - 1) && (sz[i - 1] + sz[i]) != k)
            printf ("no");
    }
    return 0;
}

