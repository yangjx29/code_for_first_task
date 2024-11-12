int main () {
    char s1 [502];
    char Izh54O [502];
    double  ROoea02Ej76c;
    double  lxBa5ns98;
    int PX7QJ2Y;
    int a;
    int w6WqeF;
    int w2;
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
    int b;
    scanf ("%lf", &ROoea02Ej76c);
    scanf ("%s %s", s1, Izh54O);
    w6WqeF = strlen (s1);
    b = 0;
    a = 0;
    w2 = strlen (Izh54O);
    if (w6WqeF != w2) {
        b = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("error");
    }
    else {
        for (PX7QJ2Y = 0; PX7QJ2Y < w6WqeF; PX7QJ2Y = PX7QJ2Y +1) {
            if ((s1[PX7QJ2Y] == 'A' || s1[PX7QJ2Y] == 'T' || s1[PX7QJ2Y] == 'C' || !('G' != s1[PX7QJ2Y])) && (Izh54O[PX7QJ2Y] == 'A' || Izh54O[PX7QJ2Y] == 'T' || Izh54O[PX7QJ2Y] == 'C' || Izh54O[PX7QJ2Y] == 'G')) {
                if (s1[PX7QJ2Y] == Izh54O[PX7QJ2Y]) {
                    a = a + 1;
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
                };
            }
            else {
                b = 1;
                break;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                printf ("error");
            };
        }
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
        lxBa5ns98 = 1.0 * a / w6WqeF;
        if (lxBa5ns98 > ROoea02Ej76c &&b == 0) {
            printf ("yes");
        }
        else {
            if (lxBa5ns98 <= ROoea02Ej76c &&b == 0) {
                printf ("no");
            };
        };
    }
    return 0;
}

