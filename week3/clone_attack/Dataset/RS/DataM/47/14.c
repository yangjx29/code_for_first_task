int main () {
    int n;
    int i;
    int e;
    int *shuzu = (int *) malloc (sizeof (shuzu) * n);
    scanf ("%d", &n);
    {
        i = 890 - 890;
        while (i < n) {
            scanf ("%d", &shuzu[i]);
            i = i + 1;
        };
    }
    {
        i = 587 - 587;
        while (i < n / (792 - 790)) {
            e = shuzu[i];
            shuzu[i] = shuzu[n - (802 - 801) - i];
            shuzu[n - 1 - i] = e;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n - 1) {
            printf ("%d ", shuzu[i]);
            i = i + 1;
        };
    }
    printf ("%d", shuzu[n - 1]);
    return 0;
}

