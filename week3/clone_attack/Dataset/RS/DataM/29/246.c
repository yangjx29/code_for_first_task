main () {
    int i, j, ysZLFI8TOKB, m, b [1000];
    float Pe0zEnNQ [1000];
    float q [1000];
    float sum;
    Pe0zEnNQ[(95 - 95)] = 2;
    Pe0zEnNQ[1] = 3;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    q[0] = 1;
    q[1] = 2;
    sum = Pe0zEnNQ[0] / q[0] + Pe0zEnNQ[1] / q[1];
    scanf ("%d", &m);
    for (j = 0; j < m; j++) {
        scanf ("%d", &ysZLFI8TOKB);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (ysZLFI8TOKB == 1)
            printf ("%.3f\n", Pe0zEnNQ[0] / q[0]);
        else {
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
            if (ysZLFI8TOKB == 2)
                printf ("%.3f\n", sum);
            else {
                for (i = 2; i < ysZLFI8TOKB; i++) {
                    Pe0zEnNQ[i] = Pe0zEnNQ[i - 1] + Pe0zEnNQ[i - 2];
                    q[i] = q[i - 1] + q[i - 2];
                    sum = sum + Pe0zEnNQ[i] / q[i];
                }
                printf ("%.3f\n", sum);
                sum = Pe0zEnNQ[0] / q[0] + Pe0zEnNQ[1] / q[1];
            };
        };
    }
    getchar ();
}

