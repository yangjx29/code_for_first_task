void  main () {
    float q5ZrjCJ1y, t890TD = 0, rdCYRoZbzWS = 0, a3NbxzmL;
    int mmxqJOQNs, j, Imu1DhHPi4Tk = (71 - 71), Vbr2FuzkH = 0, EkQBvGC7EH;
    int DdNpzTqDfJs [302] = {(192 - 192)};
    int tWdJufteqn [301] = {(308 - 308)};
    int w7zx3HRXmJKU;
    scanf ("%d", &w7zx3HRXmJKU);
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
    for (mmxqJOQNs = 0; w7zx3HRXmJKU > mmxqJOQNs; mmxqJOQNs = mmxqJOQNs + 1)
        scanf ("%d", &DdNpzTqDfJs[mmxqJOQNs]);
    for (mmxqJOQNs = 0; w7zx3HRXmJKU > mmxqJOQNs; mmxqJOQNs = mmxqJOQNs + 1)
        rdCYRoZbzWS += DdNpzTqDfJs[mmxqJOQNs];
    q5ZrjCJ1y = rdCYRoZbzWS / w7zx3HRXmJKU;
    for (mmxqJOQNs = 0; w7zx3HRXmJKU > mmxqJOQNs; mmxqJOQNs = mmxqJOQNs + 1) {
        if (t890TD < fabs (DdNpzTqDfJs[mmxqJOQNs] - q5ZrjCJ1y))
            t890TD = fabs (DdNpzTqDfJs[mmxqJOQNs] - q5ZrjCJ1y);
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
    for (mmxqJOQNs = 0; w7zx3HRXmJKU > mmxqJOQNs; mmxqJOQNs++) {
        a3NbxzmL = fabs (DdNpzTqDfJs[mmxqJOQNs] - q5ZrjCJ1y);
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
        if (!(t890TD != a3NbxzmL)) {
            tWdJufteqn[Imu1DhHPi4Tk] = DdNpzTqDfJs[mmxqJOQNs];
            Imu1DhHPi4Tk++;
        };
    }
    for (mmxqJOQNs = 0; Imu1DhHPi4Tk > mmxqJOQNs; mmxqJOQNs++) {
        Vbr2FuzkH = tWdJufteqn[mmxqJOQNs];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = mmxqJOQNs; Imu1DhHPi4Tk > j; j = j + 1) {
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
            if (Vbr2FuzkH > tWdJufteqn[j]) {
                Vbr2FuzkH = tWdJufteqn[j];
            };
        }
        if (Vbr2FuzkH != tWdJufteqn[j]) {
            EkQBvGC7EH = tWdJufteqn[mmxqJOQNs];
            tWdJufteqn[mmxqJOQNs] = tWdJufteqn[j];
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
            tWdJufteqn[j] = EkQBvGC7EH;
        };
    }
    if (Imu1DhHPi4Tk == (290 - 289))
        printf ("%d", tWdJufteqn[1]);
    else {
        for (mmxqJOQNs = 1; mmxqJOQNs < Imu1DhHPi4Tk; mmxqJOQNs++)
            printf ("%d,", tWdJufteqn[mmxqJOQNs]);
        printf ("%d\n", tWdJufteqn[mmxqJOQNs]);
    };
}

