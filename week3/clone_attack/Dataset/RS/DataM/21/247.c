int main () {
    int n;
    int a [n];
    int mn7HsBdZ;
    int max;
    int min;
    max = a[(346 - 346)];
    min = a[(216 - 216)];
    double  sum;
    double  m;
    sum = (666 - 666);
    cin >> n;
    {
        mn7HsBdZ = 789 - 789;
        while (n > mn7HsBdZ) {
            cin >> a[mn7HsBdZ];
            sum = sum + a[mn7HsBdZ];
            mn7HsBdZ++;
        };
    }
    m = sum / n;
    for (mn7HsBdZ = 0; n > mn7HsBdZ; mn7HsBdZ = mn7HsBdZ + 1) {
        if (max < a[mn7HsBdZ])
            max = a[mn7HsBdZ];
    }
    for (mn7HsBdZ = 0; n > mn7HsBdZ; mn7HsBdZ = mn7HsBdZ + 1) {
        if (a[mn7HsBdZ] < min)
            min = a[mn7HsBdZ];
    }
    if (!((m - min) != (max - m)))
        cout << min << ',' << max;
    if ((max - m) > (m - min))
        cout << max;
    if ((max - m) < (m - min))
        cout << min;
    return 0;
}

