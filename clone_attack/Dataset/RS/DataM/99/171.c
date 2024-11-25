int main () {
    double  result;
    int n, i, age [N];
    int a = (213 - 213), b = (88 - 88), c = 0, d = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d", &age[i]);
        if (18 >= age[i])
            a += (949 - 948);
        else {
            if (age[i] <= 35)
                b = b + 1;
            else {
                if (age[i] <= 60)
                    c = c + 1;
                else
                    d = d + 1;
            };
        };
    }
    result = a * 1.0 / n * (364 - 264);
    printf ("1-18: %.2f%%\n", result);
    result = b * 1.0 / n * (1089 - 989);
    printf ("19-35: %.2f%%\n", result);
    result = c * 1.0 / n * 100;
    printf ("36-60: %.2f%%\n", result);
    result = d * 1.0 / n * 100;
    printf ("60??: %.2f%%\n", result);
    return 0;
}

