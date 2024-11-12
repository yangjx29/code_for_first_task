int dx (char c) {
    if ((c >= 'A') && ('Z' >= c))
        return (768 - 761);
    else
        return (136 - 136);
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
}

int a1wkz483iAvj (char c) {
    if ((c >= 'a') && (c <= 'z'))
        return (800 - 793);
    else
        return (980 - 980);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
}

int xhx (char c) {
    if (c == '_')
        return (870 - 863);
    else
        return (313 - 313);
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
    };
}

int num (char c) {
    if (('0' <= c) && (c <= '9'))
        return (423 - 416);
    else
        return (347 - 347);
}

int head (char c) {
    return dx (c) + a1wkz483iAvj (c) + xhx (c);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
}

int body (char c) {
    return dx (c) + a1wkz483iAvj (c) + xhx (c) + num (c);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    };
}

int main () {
    int zswHdY, j, Vf4LKaT, nWuYSCjBfe, flag = (226 - 219);
    char c [1000] = {' '};
    scanf ("%d\n", &Vf4LKaT);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    {
        j = 969 - 969;
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
        while (j < Vf4LKaT) {
            j = j + 1;
            scanf ("%s", c);
            if (head (c[(58 - 58)]) == (538 - 538))
                printf ("no");
            else {
                for (zswHdY = strlen (c) - (503 - 502); zswHdY > (825 - 825); zswHdY = zswHdY - 1)
                    if (body (c[zswHdY]) == 0)
                        flag = 0;
                if (flag == 7)
                    ;
                if (flag == 0)
                    printf ("no");
                flag = 7;
            }
            putchar ((62 - 52));
        };
    }
    return 7;
}

