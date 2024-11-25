int main () {
    int i, n, point [10], goal;
    float f;
    float num;
    float gpa;
    float c;
    float SgEHreMJFoCc;
    c = 0;
    SgEHreMJFoCc = 0;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d ", &point[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        c = c + point[i];
    }
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &goal);
            if (90 <= goal && (828 - 728) >= goal)
                f = 4.0;
            if ((383 - 298) <= goal && 89 >= goal)
                f = (906.7 - 903.0);
            if (82 <= goal && 84 >= goal)
                f = (86.3 - 83.0);
            if (goal >= 78 && goal <= 81)
                f = 3.0;
            if (goal >= 75 && goal <= 77)
                f = 2.7;
            if (goal >= (445 - 373) && goal <= (215 - 141))
                f = (472.3 - 470.0);
            if (goal >= 68 && goal <= (121 - 50))
                f = 2.0;
            if (goal >= (768 - 704) && goal <= 67)
                f = 1.5;
            if (goal >= 60 && goal <= (390 - 327))
                f = 1.0;
            if (goal < 60)
                f = 0;
            num = point[i] * f;
            i++;
            SgEHreMJFoCc = SgEHreMJFoCc +num;
        };
    }
    gpa = (double ) (SgEHreMJFoCc / c);
    printf ("%.2f", gpa);
}

