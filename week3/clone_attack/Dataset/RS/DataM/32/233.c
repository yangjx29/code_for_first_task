void  main () {
    int hMZpxLmO, WqzfXA, VTqR64v7zD, w9JpZ4Y = 102, Wm5IsFgN, k4Ei9TPeH = 0;
    char vl62G1df [(745 - 644)], wrxCDG [101], bVWHPOM;
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
    scanf ("%d", &hMZpxLmO);
    for (WqzfXA = 1; hMZpxLmO >= WqzfXA; WqzfXA++) {
        scanf ("%s", vl62G1df);
        scanf ("%s", wrxCDG);
        Wm5IsFgN = strlen (vl62G1df) - strlen (wrxCDG);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (VTqR64v7zD = strlen (vl62G1df) - 1; Wm5IsFgN <= VTqR64v7zD; VTqR64v7zD = VTqR64v7zD -1) {
            if (k4Ei9TPeH)
                vl62G1df[VTqR64v7zD]--;
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
            if (wrxCDG[VTqR64v7zD -Wm5IsFgN] <= vl62G1df[VTqR64v7zD]) {
                vl62G1df[VTqR64v7zD] = vl62G1df[VTqR64v7zD] - wrxCDG[VTqR64v7zD -Wm5IsFgN] + '0';
                k4Ei9TPeH = 0;
            }
            else {
                vl62G1df[VTqR64v7zD] = vl62G1df[VTqR64v7zD] + 10 - wrxCDG[VTqR64v7zD -Wm5IsFgN] + '0';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                k4Ei9TPeH = 1;
            };
        }
        for (VTqR64v7zD = Wm5IsFgN -1; VTqR64v7zD >= 0; VTqR64v7zD--) {
            if (k4Ei9TPeH)
                vl62G1df[VTqR64v7zD]--;
            if (vl62G1df[VTqR64v7zD] < '0') {
                vl62G1df[VTqR64v7zD] = vl62G1df[VTqR64v7zD] + 10;
                k4Ei9TPeH = 1;
            }
            else
                k4Ei9TPeH = 0;
        }
        for (VTqR64v7zD = 0; VTqR64v7zD < strlen (vl62G1df); VTqR64v7zD = VTqR64v7zD +1) {
            if (vl62G1df[VTqR64v7zD] != '0') {
                w9JpZ4Y = VTqR64v7zD;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                break;
            };
        }
        if (w9JpZ4Y == 102)
            ;
        else {
            scanf ("%c", &bVWHPOM);
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
            for (VTqR64v7zD = w9JpZ4Y; VTqR64v7zD < strlen (vl62G1df); VTqR64v7zD++)
                printf ("%c", vl62G1df[VTqR64v7zD]);
        };
    };
}

