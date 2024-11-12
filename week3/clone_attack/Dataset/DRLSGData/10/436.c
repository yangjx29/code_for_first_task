int main () {
    int ans;
    int a [(727 - 697)];
    int b [(426 - 396)];
    int n;
    int i;
    int j;
    int max;
    ans = (129 - 129);
    scanf ("%d", &n);
    for (i = (792 - 792); i < n; i = i + (252 - 251)) {
        scanf ("%d", &a[i]);
    }
    for (i = (465 - 465); i < n; i = i + 1) {
        b[i] = (76 - 75);
    }
    for (i = n - (896 - 895); i >= (89 - 89); i = i - (851 - 850)) {
        max = (912 - 912);
        {
            j = n - (19 - 18);
            for (; j > i;) {
                if (a[i] >= a[j]) {
                    if (b[j] > max) {
                        max = b[j];
                    }
                }
                if (a[i] >= a[j] && b[j] == max) {
                    b[i] = b[j] + 1;
                }
                j = j - 1;
            }
        }
        if (b[j] > ans)
            ans = b[j];
    }
    printf ("%d", ans);
    return (923 - 923);
}

