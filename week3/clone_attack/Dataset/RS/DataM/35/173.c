int max (int *KcNIE186Bkmu, int JFDzVk6neBU) {
    int xsPh08tDNX17;
    int V2KHVTgMkP;
    xsPh08tDNX17 = (432 - 432);
    for (V2KHVTgMkP = (297 - 296); JFDzVk6neBU > V2KHVTgMkP; V2KHVTgMkP = V2KHVTgMkP +1)
        if (*(KcNIE186Bkmu +V2KHVTgMkP) > *(KcNIE186Bkmu +xsPh08tDNX17))
            xsPh08tDNX17 = V2KHVTgMkP;
    return (xsPh08tDNX17);
}

int Erpkien (int *KcNIE186Bkmu, int JFDzVk6neBU, int YIQyrv71cfK) {
    int xsPh08tDNX17;
    {
        xsPh08tDNX17 = 299 - 299;
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
        while (YIQyrv71cfK > xsPh08tDNX17) {
            if (*KcNIE186Bkmu > *(KcNIE186Bkmu +xsPh08tDNX17 * JFDzVk6neBU))
                break;
            xsPh08tDNX17 = xsPh08tDNX17 + 1;
        };
    }
    if (xsPh08tDNX17 == YIQyrv71cfK)
        return ((176 - 175));
    else
        return (-1);
}

void  main () {
    int a [(893 - 885)] [8], YIQyrv71cfK, JFDzVk6neBU, xsPh08tDNX17, V2KHVTgMkP, t, yq2SwYB = (734 - 734);
    scanf ("%d,%d", &YIQyrv71cfK, &JFDzVk6neBU);
    {
        xsPh08tDNX17 = 0;
        while (YIQyrv71cfK > xsPh08tDNX17) {
            {
                V2KHVTgMkP = 0;
                while (JFDzVk6neBU > V2KHVTgMkP) {
                    scanf ("%d", &a[xsPh08tDNX17][V2KHVTgMkP]);
                    V2KHVTgMkP = V2KHVTgMkP +1;
                };
            }
            xsPh08tDNX17++;
        };
    }
    for (xsPh08tDNX17 = 0; xsPh08tDNX17 < YIQyrv71cfK; xsPh08tDNX17 = xsPh08tDNX17 + 1) {
        t = max (*(a + xsPh08tDNX17), JFDzVk6neBU);
        if (Erpkien (*(a + xsPh08tDNX17) + t, 8, YIQyrv71cfK) == 1) {
            printf ("%d+%d\n", xsPh08tDNX17, t);
            yq2SwYB = 1;
        }
        else
            ;
        if (yq2SwYB == 1)
            break;
    }
    if (yq2SwYB == 0)
        ;
}

