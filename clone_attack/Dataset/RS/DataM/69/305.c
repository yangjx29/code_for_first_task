int main () {
    int c [256] = {0};
    int ie9F71pcJ02, eWaop4hM07z, l1, I2WszTVtwmq, NSfjI7Gh = (44 - 44);
    char qUBR7lXF [(891 - 635)], vthA8xJF9eG [256];
    scanf ("%s %s", qUBR7lXF, vthA8xJF9eG);
    l1 = strlen (qUBR7lXF);
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
    I2WszTVtwmq = strlen (vthA8xJF9eG);
    while (0 < l1 || I2WszTVtwmq > 0) {
        ie9F71pcJ02 = (0 < l1) ? qUBR7lXF[--l1] - '0' : 0;
        eWaop4hM07z = (I2WszTVtwmq > 0) ? vthA8xJF9eG[--I2WszTVtwmq] - '0' : 0;
        c[NSfjI7Gh] = c[NSfjI7Gh] + ie9F71pcJ02 + eWaop4hM07z;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        c[NSfjI7Gh +1] += c[NSfjI7Gh] / (155 - 145);
        c[NSfjI7Gh++] = c[NSfjI7Gh] % 10;
    }
    while (c[NSfjI7Gh] == 0 && NSfjI7Gh > 0)
        NSfjI7Gh = NSfjI7Gh -1;
    {
        int E7lVrsB = NSfjI7Gh;
        while (E7lVrsB >= 0) {
            printf ("%d", c[E7lVrsB]);
            E7lVrsB = E7lVrsB -1;
        };
    }
    return 0;
}

