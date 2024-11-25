int main () {
    int i;
    int j;
    int htWIi81;
    int a [100];
    scanf ("%d", &htWIi81);
    {
        i = 0;
        while (htWIi81 > i) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    for (i = 0, j = htWIi81 - 1; j > i; i = i + 1, j--) {
        int CJsRtQG = a[i];
        a[i] = a[j];
        a[j] = CJsRtQG;
    }
    for (i = 0; i < htWIi81; i++) {
        printf ("%d", a[i]);
        if (i != htWIi81 - 1)
            printf (" ");
    }
    return 0;
}

