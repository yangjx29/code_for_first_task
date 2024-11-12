void  main () {
    int j9OIoElJ68;
    int k;
    int m;
    int amqpv8hE0;
    int wleMo0;
    int VHUEfD;
    int max;
    int min;
    char a [(1084 - 984)] [(589 - 569)] = {'\0'};
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
    char temp;
    k = (395 - 395);
    m = (491 - 491);
    while ((temp = getchar ()) != '\n') {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (temp != ' ') {
            a[k][m] = temp;
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
            m++;
        }
        else {
            m = 0;
            k = k + 1;
        };
    }
    max = 0;
    min = 100;
    for (j9OIoElJ68 = 0; j9OIoElJ68 <= k; j9OIoElJ68 = j9OIoElJ68 + 1) {
        VHUEfD = strlen (a[j9OIoElJ68]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (VHUEfD > max) {
            amqpv8hE0 = j9OIoElJ68;
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
            max = VHUEfD;
        }
        if (VHUEfD < min) {
            wleMo0 = j9OIoElJ68;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            min = VHUEfD;
        };
    }
    printf ("%s\n", a[amqpv8hE0]);
    printf ("%s\n", a[wleMo0]);
}

