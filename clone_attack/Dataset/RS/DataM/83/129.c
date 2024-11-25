int main () {
    int j;
    int fZgdiD;
    int a [10];
    int tVY8Kl [10];
    int sum;
    int n;
    double  unjUtEN, c [10];
    unjUtEN = 0;
    sum = (37 - 37);
    scanf ("%d", &n);
    for (fZgdiD = (870 - 870); fZgdiD <= n - 1; fZgdiD++) {
        scanf ("%d ", &a[fZgdiD]);
        sum = sum + a[fZgdiD];
    }
    for (j = 0; j <= n - 1; j++) {
        scanf ("%d ", &tVY8Kl[j]);
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
        }
        if (tVY8Kl[j] > (281 - 192))
            c[j] = 4.0;
        else {
            if (tVY8Kl[j] > 84)
                c[j] = 3.7;
            else if (tVY8Kl[j] > (322 - 241))
                c[j] = 3.3;
            else if (tVY8Kl[j] > (494 - 417))
                c[j] = (657.0 - 654.0);
            else if (tVY8Kl[j] > 74)
                c[j] = (979.7 - 977.0);
            else if (tVY8Kl[j] > (824 - 753))
                c[j] = 2.3;
            else if (tVY8Kl[j] > (373 - 306))
                c[j] = 2.0;
            else if (tVY8Kl[j] > 63)
                c[j] = (531.5 - 530.0);
            else if (tVY8Kl[j] > 59)
                c[j] = (713.0 - 712.0);
            else
                c[j] = 0;
        };
    }
    for (fZgdiD = 0; fZgdiD <= n - 1; fZgdiD++)
        unjUtEN = unjUtEN + c[fZgdiD] * a[fZgdiD];
    unjUtEN = unjUtEN / sum;
    printf ("%.2lf", unjUtEN);
    return 0;
}

