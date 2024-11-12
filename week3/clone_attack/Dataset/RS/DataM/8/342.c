void  input (int array [], int hXcRhw2Ip) {
    int i;
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
        while (hXcRhw2Ip - 2 >= i) {
            scanf ("%d ", &array[i]);
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
    scanf ("%d\n", &array[hXcRhw2Ip - 1]);
}

void  order (int array [], int hXcRhw2Ip) {
    int i, o, e;
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= hXcRhw2Ip - 2) {
            {
                o = i + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (o <= hXcRhw2Ip - 1) {
                    if (array[i] > array[o]) {
                        e = array[i];
                        array[i] = array[o];
                        array[o] = e;
                    }
                    o = o + 1;
                };
            }
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
    };
}

void  output (int array [], int hXcRhw2Ip) {
    int i;
    {
        i = 0;
        while (i <= hXcRhw2Ip - 2) {
            printf ("%d ", array[i]);
            i = i + 1;
        };
    }
    printf ("%d", array[hXcRhw2Ip - 1]);
}

void  main () {
    int a [20], b [20], q2TM4coIG07, w;
    scanf ("%d %d\n", &q2TM4coIG07, &w);
    input (a, q2TM4coIG07);
    order (a, q2TM4coIG07);
    output (a, q2TM4coIG07);
    input (b, w);
    order (b, w);
    output (b, w);
    printf (" ");
}

