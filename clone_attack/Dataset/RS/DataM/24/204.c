int main () {
    char sth [N], *ecMXt28rHsa1 = 0, *min = 0, *max = 0;
    int XvG8j0sAJt = 0, BlgMUv = 0, iEl9W8n01Pw7 = 0, chmijJ = N;
    gets (sth);
    for (ecMXt28rHsa1 = sth; sth + strlen (sth) >= ecMXt28rHsa1; ecMXt28rHsa1++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (*ecMXt28rHsa1 == ' ' || *ecMXt28rHsa1 == '\0') {
            if (XvG8j0sAJt == 0)
                continue;
            if (BlgMUv > iEl9W8n01Pw7) {
                max = ecMXt28rHsa1 - BlgMUv;
                iEl9W8n01Pw7 = BlgMUv;
            }
            if (BlgMUv < chmijJ) {
                min = ecMXt28rHsa1 - BlgMUv;
                chmijJ = BlgMUv;
            }
            BlgMUv = 0;
            XvG8j0sAJt = 0;
        }
        else {
            XvG8j0sAJt = 1;
            BlgMUv = BlgMUv +1;
        };
    }
    getchar ();
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
    {
        ecMXt28rHsa1 = max;
        while (ecMXt28rHsa1 < max + iEl9W8n01Pw7) {
            printf ("%c", *ecMXt28rHsa1);
            ecMXt28rHsa1 = ecMXt28rHsa1 + 1;
        };
    }
    {
        ecMXt28rHsa1 = min;
        while (ecMXt28rHsa1 < min + chmijJ) {
            printf ("%c", *ecMXt28rHsa1);
            ecMXt28rHsa1 = ecMXt28rHsa1 + 1;
        };
    }
    getchar ();
    return 0;
}

