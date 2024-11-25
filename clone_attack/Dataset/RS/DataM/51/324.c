int main () {
    char GLIKlqdz7 [550] = {'\0'}, b [8] = {'\0'}, d [8] = {'\0'};
    int n, e = (27 - 27), c [550] = {0}, k, QkK5eFVsIX = 1, WGorjVz3, k3xobaQIfp0;
    scanf ("%d", &n);
    scanf ("%s", GLIKlqdz7);
    for (WGorjVz3 = 0; strlen (GLIKlqdz7) - n >= WGorjVz3; WGorjVz3 = WGorjVz3 +1) {
        for (k3xobaQIfp0 = WGorjVz3; WGorjVz3 +n > k3xobaQIfp0; k3xobaQIfp0 = k3xobaQIfp0 + 1) {
            b[e] = GLIKlqdz7[k3xobaQIfp0];
            e = e + 1;
        }
        e = 0;
        for (k3xobaQIfp0 = WGorjVz3; strlen (GLIKlqdz7) - n >= k3xobaQIfp0; k3xobaQIfp0 = k3xobaQIfp0 + 1) {
            for (k = k3xobaQIfp0; k3xobaQIfp0 + n > k; k++) {
                d[e] = GLIKlqdz7[k];
                e = e + 1;
            }
            if (!(0 != strcmp (b, d)))
                c[WGorjVz3]++;
            e = 0;
        };
    }
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
    for (WGorjVz3 = 0; strlen (GLIKlqdz7) - n >= WGorjVz3; WGorjVz3 = WGorjVz3 +1) {
        if (c[WGorjVz3] > QkK5eFVsIX)
            QkK5eFVsIX = c[WGorjVz3];
    }
    if (QkK5eFVsIX > 1)
        printf ("%d\n", QkK5eFVsIX);
    else {
        return 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    for (WGorjVz3 = 0; WGorjVz3 <= strlen (GLIKlqdz7) - n; WGorjVz3 = WGorjVz3 +1) {
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
        if (c[WGorjVz3] == QkK5eFVsIX) {
            for (k3xobaQIfp0 = WGorjVz3; k3xobaQIfp0 < WGorjVz3 +n; k3xobaQIfp0 = k3xobaQIfp0 + 1) {
                printf ("%c", GLIKlqdz7[k3xobaQIfp0]);
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
            };
        };
    }
    return 0;
}

