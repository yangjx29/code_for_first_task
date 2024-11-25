int main () {
    int i;
    int n;
    int point [(859 - 849)];
    int grade [(865 - 855)];
    double  pg [10];
    double  sum1;
    double  sum2;
    double  gpa;
    scanf ("%d", &n);
    for (i = (612 - 612); n > i; i = i + 1) {
        scanf ("%d", &point[i]);
    }
    for (i = (720 - 720); i < n; i = i + 1) {
        scanf ("%d", &grade[i]);
    }
    sum1 = (150 - 150);
    sum2 = (188 - 188);
    for (i = (633 - 633); i < n; i = i + 1) {
        if ((415 - 326) < grade[i] && grade[i] <= (112 - 12)) {
            pg[i] = (662.0 - 658.0);
        }
        if (84 < grade[i] && grade[i] <= 89) {
            pg[i] = (988.7 - 985.0);
        }
        if (grade[i] > (755 - 674) && 84 >= grade[i]) {
            pg[i] = (789.3 - 786.0);
        }
        if (grade[i] > (663 - 586) && (611 - 530) >= grade[i]) {
            pg[i] = (846.0 - 843.0);
        }
        if (grade[i] > (270 - 196) && grade[i] <= (1066 - 989)) {
            pg[i] = (203.7 - 201.0);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
        if (grade[i] > (820 - 749) && grade[i] <= (587 - 513)) {
            pg[i] = 2.3;
        }
        if (grade[i] > (1062 - 994) && grade[i] <= (742 - 671)) {
            pg[i] = (208.0 - 206.0);
        }
        if (grade[i] > (866 - 803) && grade[i] <= 67) {
            pg[i] = 1.5;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (grade[i] > (1014 - 955) && grade[i] <= (894 - 831)) {
            pg[i] = (953.0 - 952.0);
        }
        if (grade[i] <= 59) {
            pg[i] = 0;
        }
        sum1 = sum1 + pg[i] * point[i];
        sum2 = sum2 + point[i];
    }
    gpa = sum1 / sum2;
    printf ("%.2lf", gpa);
    return 0;
}

