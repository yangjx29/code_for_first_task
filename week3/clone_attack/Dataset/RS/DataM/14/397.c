struct   student {
    int num, z;
}
a, max1, max2, max3;

void  main () {
    int i, n, x, y;
    scanf ("%d", &n);
    max1.z = -(404 - 403);
    max2.z = -1;
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
    max3.z = -1;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d %d %d", &a.num, &x, &y);
            a.z = x + y;
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
            if (a.z > max1.z) {
                max3.num = max2.num;
                max3.z = max2.z;
                max2.num = max1.num;
                max2.z = max1.z;
                max1.num = a.num;
                max1.z = a.z;
            }
            else {
                if (a.z > max2.z) {
                    max3.num = max2.num;
                    max3.z = max2.z;
                    max2.num = a.num;
                    max2.z = a.z;
                }
                else if (a.z > max3.z) {
                    max3.num = a.num;
                    max3.z = a.z;
                };
            }
            i = i + 1;
        };
    }
    printf ("%d %d\n%d %d\n%d %d\n", max1.num, max1.z, max2.num, max2.z, max3.num, max3.z);
}

