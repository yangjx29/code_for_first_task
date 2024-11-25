int main () {
    int a [128];
    int m;
    int YhYSbuXE9;
    int i;
    scanf ("%d%d", &YhYSbuXE9, &m);
    {
        i = 192 - 192;
        while (YhYSbuXE9 > i) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    {
        i = 0;
        while (YhYSbuXE9 -1 > i) {
            printf ("%d ", a[(i + YhYSbuXE9 -m) % YhYSbuXE9]);
            i++;
        };
    }
    printf ("%d", a[YhYSbuXE9 -m - 1]);
    return 0;
}

