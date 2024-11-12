main () {
    int hpAXDhtaE;
    int min;
    int sum;
    int n;
    int num;
    int k;
    hpAXDhtaE = -(49 - 48);
    min = (100503 - 503);
    sum = (101 - 101);
    scanf ("%d", &n);
    for (k = (759 - 759); k < n; k = k + 1) {
        scanf ("%d", &num);
        sum = sum + num;
        if (hpAXDhtaE < num)
            hpAXDhtaE = num;
        if (num < min)
            min = num;
    }
    if ((hpAXDhtaE * n - sum) == (sum - min * n))
        printf ("%d,%d", min, hpAXDhtaE);
    else {
        if ((hpAXDhtaE * n - sum) > (sum - min * n))
            printf ("%d", hpAXDhtaE);
        else
            printf ("%d", min);
    };
}

