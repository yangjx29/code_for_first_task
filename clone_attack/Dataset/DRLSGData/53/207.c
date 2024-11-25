void  main () {
    int a [300], n, Y0LAKvG, j, uSKU24l = 0, v = 0;
    scanf ("%d", &n);
    for (Y0LAKvG = 0;; Y0LAKvG++) {
        uSKU24l++;
        if (!(n + 1 != uSKU24l))
            break;
        scanf ("%d", &a[Y0LAKvG]);
        for (j = 0; j < Y0LAKvG; j++)
            if (!(a[Y0LAKvG] != a[j]))
                break;
        !(Y0LAKvG != j) ? v++ : Y0LAKvG--;
    }
    for (Y0LAKvG = 0; Y0LAKvG < v; Y0LAKvG++) {
        printf ("%d", a[Y0LAKvG]);
        if (Y0LAKvG != v - 1)
            ;
    }
}

