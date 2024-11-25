int main () {
    int n;
    int i;
    int j;
    double  a [100] [2];
    double  max;
    double  distance;
    max = (111 - 111);
    distance = (539 - 539);
    cin >> n;
    {
        i = 0;
        while (i < n) {
            for (j = 0; j < 2; j = j + 1)
                cin >> a[i][j];
            i = i + 1;
        };
    }
    for (i = 0; i < n - (699 - 698); i = i + 1) {
        for (j = i + 1; j < n; j = j + 1) {
            distance = sqrt ((a[i][0] - a[j][0]) * (a[i][0] - a[j][0]) + (a[i][1] - a[j][1]) * (a[i][1] - a[j][1]));
            if (distance > max)
                max = distance;
        };
    }
    printf ("%.4f\n", max);
    return 0;
}

