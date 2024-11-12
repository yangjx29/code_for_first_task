int main () {
    int a = 0, kCMsPo8, l, b = 0;
    double  ZjsVfx5RyJSP;
    char JnkBs3I0 [2] [510];
    scanf ("%lf", &ZjsVfx5RyJSP);
    scanf ("%s", JnkBs3I0[0]);
    for (kCMsPo8 = 0; JnkBs3I0[0][kCMsPo8] != '\0'; kCMsPo8 = kCMsPo8 + 1) {
        if (JnkBs3I0[0][kCMsPo8] != 'A' && JnkBs3I0[0][kCMsPo8] != 'T' && JnkBs3I0[0][kCMsPo8] != 'C' && JnkBs3I0[0][kCMsPo8] != 'G') {
            a = 1;
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
    }
    scanf ("%s", JnkBs3I0[1]);
    {
        kCMsPo8 = 0;
        while (JnkBs3I0[1][kCMsPo8] != '\0') {
            if (JnkBs3I0[1][kCMsPo8] != 'A' && JnkBs3I0[1][kCMsPo8] != 'T' && JnkBs3I0[1][kCMsPo8] != 'C' && JnkBs3I0[1][kCMsPo8] != 'G') {
                a = 1;
            }
            kCMsPo8 = kCMsPo8 + 1;
        };
    }
    if (strlen (JnkBs3I0[0]) != strlen (JnkBs3I0[1]) || a == 1) {
        printf ("error");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        return 0;
    }
    l = strlen (JnkBs3I0[0]);
    for (kCMsPo8 = 0; kCMsPo8 < l; kCMsPo8++) {
        if (JnkBs3I0[0][kCMsPo8] == JnkBs3I0[1][kCMsPo8]) {
            b = b + 1;
        };
    }
    if (1.0 * b / l > ZjsVfx5RyJSP) {
    }
    else {
    }
    return 0;
}

