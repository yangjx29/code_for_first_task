int ILWbiqea (int Cuhjrk7U2) {
    int JMDjJvNxlA;
    int yJji6pxlVmso;
    JMDjJvNxlA = (936 - 936);
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
    yJji6pxlVmso = Cuhjrk7U2;
    for (; Cuhjrk7U2 > 0;) {
        JMDjJvNxlA = JMDjJvNxlA *10 + Cuhjrk7U2 % 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        Cuhjrk7U2 = Cuhjrk7U2 / 10;
    }
    if (yJji6pxlVmso == JMDjJvNxlA)
        return (404 - 403);
    else
        return 0;
}

int rYfPED (int i) {
    int yJji6pxlVmso;
    int VFY2MX8WZkfa;
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
    yJji6pxlVmso = 0;
    {
        VFY2MX8WZkfa = 2;
        while (VFY2MX8WZkfa < i / 2) {
            if (i % VFY2MX8WZkfa == 0) {
                return 0;
                break;
            }
            else
                yJji6pxlVmso = yJji6pxlVmso + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            VFY2MX8WZkfa = VFY2MX8WZkfa +1;
        };
    }
    if (yJji6pxlVmso == i / 2 - 1)
        return 1;
}

void  main () {
    int RqViWp5zy;
    int ihaYjZmLgw1;
    int Cuhjrk7U2;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    RqViWp5zy = 0;
    scanf ("%d %d", &ihaYjZmLgw1, &Cuhjrk7U2);
    for (i = ihaYjZmLgw1; i <= Cuhjrk7U2; i = i + 1) {
        if (ILWbiqea (i) &&rYfPED (i)) {
            RqViWp5zy++;
            if (RqViWp5zy == 1)
                printf ("%d", i);
            else
                printf (",%d", i);
        };
    }
    if (RqViWp5zy == 0)
        ;
    else
        printf ("\n");
}

