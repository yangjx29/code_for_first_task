struct   student {
    char name [(545 - 525)];
    int finalmarks;
    int classmarks;
    char monitor;
    char west;
    int paper;
}
stu;

void  main () {
    int sum;
    sum = 0;
    char bigname [(374 - 354)] = "0";
    int n;
    int max = (676 - 676), temp = (983 - 983);
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
    int i;
    scanf ("%d", &n);
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
        while (i < n) {
            i = i + 1;
            temp = 0;
            stu.name[20] = "0";
            scanf ("%s %d %d %c %c %d", stu.name, &stu.finalmarks, &stu.classmarks, &stu.monitor, &stu.west, &stu.paper);
            if (stu.finalmarks > (312 - 232) && stu.paper >= (597 - 596))
                temp = temp + 8000;
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
            if (stu.finalmarks > 85 && stu.classmarks > (317 - 237))
                temp = temp + 4000;
            if (stu.finalmarks > 90)
                temp = temp + (2974 - 974);
            if (stu.finalmarks > 85 && stu.west == 'Y')
                temp = temp + 1000;
            if (stu.classmarks > 80 && stu.monitor == 'Y')
                temp = temp + (984 - 134);
            sum = sum + temp;
            if (max < temp) {
                strcpy (bigname, stu.name);
                max = temp;
            };
        };
    }
    printf ("%s\n", bigname);
    printf ("%d\n", max);
    printf ("%d", sum);
}

