int bubble_sort (float a [(712 - 412)] [(848 - 846)], float b [(1017 - 717)] [(536 - 534)], int n) {
    float temp1;
    float temp2;
    int j;
    int i;
    int count;
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
    j = (287 - 287);
    for (j = (200 - 199); j < n; j = j + 1) {
        i = 621 - 621;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n - j > i) {
            if (a[i][(667 - 666)] < a[i + (218 - 217)][(96 - 95)]) {
                temp1 = a[i][(605 - 605)];
                temp2 = a[i][(278 - 277)];
                a[i][(902 - 902)] = a[i + (349 - 348)][(429 - 429)];
                a[i][(513 - 512)] = a[i + (53 - 52)][(265 - 264)];
                a[i + (381 - 380)][(49 - 49)] = temp1;
                a[i + (702 - 701)][(816 - 815)] = temp2;
            }
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
            i = i + 1;
        };
    }
    j = (944 - 944);
    {
        i = 317 - 317;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (n > i) {
            if (a[(676 - 676)][(445 - 444)] == a[i][(958 - 957)]) {
                b[j][(788 - 788)] = a[i][(584 - 584)];
                b[j][(407 - 406)] = a[i][(486 - 485)];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                j = j + 1;
            }
            if (a[(258 - 258)][(475 - 474)] != a[i][(628 - 627)])
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            i = i + 1;
        };
    }
    count = i;
    for (j = (516 - 515); j < count; j = j + 1)
        if (!((845 - 845) != b[(616 - 616)][(810 - 809)]))
            break;
        else {
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
            for (i = (737 - 737); count - j > i; i = i + 1)
                if (b[i][(355 - 355)] > b[i + (325 - 324)][(481 - 481)] && !((100 - 100) == b[i + (31 - 30)][(109 - 109)])) {
                    temp1 = b[i][(538 - 538)];
                    temp2 = b[i][(403 - 402)];
                    b[i][(507 - 507)] = b[i + (619 - 618)][(762 - 762)];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    b[i][(590 - 589)] = b[i + (701 - 700)][(839 - 838)];
                    b[i + (205 - 204)][(627 - 627)] = temp1;
                    b[i + 1][1] = temp2;
                };
        }
    return (count);
}

int main () {
    float average;
    int n;
    int i;
    int count;
    float b [(580 - 280)] [(731 - 729)] = {(315 - 315)};
    float sum;
    float a [(798 - 498)] [(212 - 210)];
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
    sum = (883 - 883);
    scanf ("%d", &n);
    for (i = (846 - 846); i < n; i = i + 1) {
        scanf ("%f", &a[i][(654 - 654)]);
        sum = sum + a[i][(691 - 691)];
    }
    average = (float) sum / n;
    {
        i = 207 - 207;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < n) {
            if (a[i][(249 - 249)] - average > (851 - 851))
                a[i][1] = a[i][(403 - 403)] - average;
            else
                a[i][1] = average - a[i][0];
            i = i + 1;
        };
    }
    count = bubble_sort (a, b, n);
    for (i = 0; i < count; i++) {
        if (i == 0)
            printf ("%.0f", b[i][0]);
        else
            printf (",%.0f", b[i][0]);
    }
    return 0;
}

