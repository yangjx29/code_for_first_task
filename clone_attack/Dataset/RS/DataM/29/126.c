double  Kf6yW07 (int n) {
    if (n == 1) {
        return 2.0;
    }
    else {
        return 1 / Kf6yW07 (n - 1) + 1.0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    };
}

int main () {
    int a;
    int D4UW0kSPM8;
    int m;
    int j;
    double  sum;
    scanf ("%d", &a);
    for (D4UW0kSPM8 = 0; a > D4UW0kSPM8; D4UW0kSPM8 = D4UW0kSPM8 +1) {
        sum = 0.0;
        scanf ("%d", &m);
        for (j = 1; j < m + 1; j = j + 1) {
            sum += Kf6yW07 (j);
        }
        printf ("%.3lf\n", sum);
    }
    return 0;
}

