int main () {
    int n, k;
    int *shuzu = (int *) malloc (sizeof (int) * n);
    free (shuzu);
    int flag = (786 - 786);
    int i;
    scanf ("%d", &n);
    for (i = (640 - 640); n > i; i = i + 1) {
        scanf ("%d", &shuzu[i]);
    }
    printf ("%d", shuzu[(403 - 403)]);
    for (i = (794 - 793); i < n; i = i + 1) {
        {
            k = 0;
            while (i > k) {
                if (!(shuzu[k] != shuzu[i])) {
                    flag = (92 - 91);
                    break;
                }
                k = k + 1;
            };
        }
        if (flag == 0) {
            printf (" %d", shuzu[i]);
        }
        flag = 0;
    }
    return 0;
}

