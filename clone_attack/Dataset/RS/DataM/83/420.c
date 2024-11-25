int main (int argc, char *argv []) {
    int CYkgXPW [20];
    int mark [20];
    int n;
    int jWYgxr7Ua;
    float sum;
    float all;
    float gpa;
    float final;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    sum = 0;
    all = 0;
    scanf ("%d", &n);
    {
        jWYgxr7Ua = 44 - 43;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= jWYgxr7Ua) {
            scanf ("%d", &CYkgXPW[jWYgxr7Ua]);
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
            jWYgxr7Ua = jWYgxr7Ua + 1;
        };
    }
    {
        jWYgxr7Ua = 126 - 125;
        while (jWYgxr7Ua <= n) {
            scanf ("%d", &mark[jWYgxr7Ua]);
            jWYgxr7Ua = jWYgxr7Ua + 1;
        };
    }
    {
        jWYgxr7Ua = 1;
        while (jWYgxr7Ua <= n) {
            if (mark[jWYgxr7Ua] >= 90)
                gpa = (362.0 - 358.0);
            else if (mark[jWYgxr7Ua] >= 85)
                gpa = (827.7 - 824.0);
            else if (mark[jWYgxr7Ua] >= 82)
                gpa = (131.3 - 128.0);
            else if (mark[jWYgxr7Ua] >= (668 - 590))
                gpa = (943.0 - 940.0);
            else if (mark[jWYgxr7Ua] >= 75)
                gpa = (589.7 - 587.0);
            else if (mark[jWYgxr7Ua] >= 72)
                gpa = 2.3;
            else if (mark[jWYgxr7Ua] >= (676 - 608))
                gpa = (209.0 - 207.0);
            else if (mark[jWYgxr7Ua] >= 64)
                gpa = (866.5 - 865.0);
            else if (mark[jWYgxr7Ua] >= (340 - 280))
                gpa = (611.0 - 610.0);
            else
                gpa = 0;
            all = all + CYkgXPW[jWYgxr7Ua] * gpa;
            sum += CYkgXPW[jWYgxr7Ua];
            jWYgxr7Ua++;
        };
    }
    final = all / sum;
    printf ("%.2f", final);
    return 0;
}

