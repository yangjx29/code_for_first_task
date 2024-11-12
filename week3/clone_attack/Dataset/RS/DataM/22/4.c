void  main () {
    char c;
    int a [301] = {0}, i = 0, j, q0WFU4MQVbB, max2 = 0;
    scanf ("%d", &a[0]);
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
    q0WFU4MQVbB = a[0];
    while ((c = getchar ()) != '\n') {
        scanf ("%d", &a[++i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[i] > q0WFU4MQVbB) {
            max2 = q0WFU4MQVbB;
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
            q0WFU4MQVbB = a[i];
        }
        else if (max2 < a[i] && a[i] != q0WFU4MQVbB)
            max2 = a[i];
    }
    if (q0WFU4MQVbB > max2 && max2 != 0)
        printf ("%d\n", max2);
    else
        ;
}

