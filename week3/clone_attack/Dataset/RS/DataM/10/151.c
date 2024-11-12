int zWw8Y4s3HXdQ [25], trSXhKy;

int f (int vfgNVa, int i, int sum) {
    int p, q = 0;
    if (i == trSXhKy)
        return sum;
    else {
        p = f (vfgNVa, i + 1, sum);
        if (vfgNVa > zWw8Y4s3HXdQ[i + 1])
            q = f (zWw8Y4s3HXdQ[i + 1], i + 1, sum + 1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return p > q ? p : q;
    };
}

void  main () {
    int i;
    scanf ("%d", &trSXhKy);
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
    for (i = 0; i < trSXhKy; i++)
        scanf ("%d", &zWw8Y4s3HXdQ[i]);
    printf ("%d", f (2147483647, 0, 0));
}

