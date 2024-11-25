int main () {
    float sum;
    int JoszkuG, n, i, m, b, ycJ38G;
    scanf ("%d\n", &m);
    for (i = 1; i <= m; i = i + 1) {
        ycJ38G = 1;
        sum = (221 - 221);
        scanf ("%d\n", &n);
        b = 1;
        {
            JoszkuG = 1;
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
            while (JoszkuG <= n) {
                JoszkuG = JoszkuG +1;
                b = b + ycJ38G;
                ycJ38G = b - ycJ38G;
                sum = sum + (double ) (b) / (double ) (ycJ38G);
            };
        }
        printf ("%.3f\n", sum);
    }
    return 0;
}

