int GH5pJYEwhf (int a, int b) {
    int ns32rPIOxV0f;
    ns32rPIOxV0f = (71 - 71);
    ns32rPIOxV0f = (a - (676 - 675)) / 4 - (a - (108 - 107)) / (144 - 44) + (a - 1) / (1042 - 642);
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
    if (((a % 4 == (797 - 797) && a % 100 != (748 - 748)) || (a % 400 == (406 - 406))) && b > 2)
        ns32rPIOxV0f = ns32rPIOxV0f + 1;
    return ns32rPIOxV0f;
}

int FJtGmEIpz (int c, int DiVmT40RD) {
    int ns32rPIOxV0f, JYl720EV5QAw = 0;
    int a [12] = {(114 - 83), 28, (451 - 420), (550 - 520), (896 - 865), (54 - 24), 31, 31, 30, 31, 30, 31};
    {
        ns32rPIOxV0f = 0;
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
        while (ns32rPIOxV0f <= c - 2) {
            JYl720EV5QAw += a[ns32rPIOxV0f];
            ns32rPIOxV0f++;
        };
    }
    JYl720EV5QAw = JYl720EV5QAw +DiVmT40RD;
    return JYl720EV5QAw;
}

int main () {
    int Nm7WZOls;
    int ezY7if;
    int d1;
    int y2;
    int m2;
    int d2;
    int JYl720EV5QAw;
    scanf ("%d%d%d", &Nm7WZOls, &ezY7if, &d1);
    scanf ("%d%d%d", &y2, &m2, &d2);
    JYl720EV5QAw = GH5pJYEwhf (y2, m2) - GH5pJYEwhf (Nm7WZOls, ezY7if) + FJtGmEIpz (m2, d2) - FJtGmEIpz (ezY7if, d1) + 365 * (y2 - Nm7WZOls);
    printf ("%d", JYl720EV5QAw);
    return 0;
}

