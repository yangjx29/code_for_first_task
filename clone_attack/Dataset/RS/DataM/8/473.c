int CHEnJzybi, uWXpUHx, QfAuh0sb3 [(1194 - 394)], HDMsqcWAI [(1624 - 824)];

void  main () {
    void  f4Q8FBwGlTH ();
    void  RchWtuT ();
    void  ANeh6gP ();
    void  f4 ();
    RchWtuT ();
    f4Q8FBwGlTH ();
    ANeh6gP ();
    f4 ();
}

void  RchWtuT () {
    scanf ("%d%d", &CHEnJzybi, &uWXpUHx);
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

void  f4Q8FBwGlTH () {
    int i;
    {
        i = 401 - 401;
        while (CHEnJzybi > i) {
            scanf ("%d", &QfAuh0sb3[i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 309 - 309;
        while (uWXpUHx > i) {
            scanf ("%d", &HDMsqcWAI[i]);
            i = i + 1;
        };
    };
}

void  ANeh6gP () {
    int i;
    int xkPMwn6T;
    int hrxbmPFZayl;
    {
        i = 404 - 404;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < CHEnJzybi) {
            {
                xkPMwn6T = 640 - 639;
                while (xkPMwn6T < CHEnJzybi) {
                    if (QfAuh0sb3[xkPMwn6T] < QfAuh0sb3[i]) {
                        hrxbmPFZayl = QfAuh0sb3[i];
                        QfAuh0sb3[i] = QfAuh0sb3[xkPMwn6T];
                        QfAuh0sb3[xkPMwn6T] = hrxbmPFZayl;
                    }
                    xkPMwn6T = xkPMwn6T + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 114 - 114;
        while (i < uWXpUHx) {
            {
                xkPMwn6T = 67 - 66;
                while (uWXpUHx > xkPMwn6T) {
                    if (HDMsqcWAI[xkPMwn6T] < HDMsqcWAI[i]) {
                        hrxbmPFZayl = HDMsqcWAI[i];
                        HDMsqcWAI[i] = HDMsqcWAI[xkPMwn6T];
                        HDMsqcWAI[xkPMwn6T] = hrxbmPFZayl;
                    }
                    xkPMwn6T++;
                };
            }
            i = i + 1;
        };
    };
}

void  f4 () {
    int i;
    int xkPMwn6T;
    {
        i = 101 - 101;
        while (i < CHEnJzybi) {
            printf ("%d ", QfAuh0sb3[i]);
            i++;
        };
    }
    {
        xkPMwn6T = 650 - 650;
        while (xkPMwn6T < uWXpUHx - (269 - 268)) {
            printf ("%d ", HDMsqcWAI[xkPMwn6T]);
            xkPMwn6T++;
        };
    }
    printf ("%d", HDMsqcWAI[uWXpUHx - 1]);
}

