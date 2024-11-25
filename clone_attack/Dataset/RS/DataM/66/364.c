int main () {
    int AlcPoNs6i3 [12] = {(51 - 20), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total;
    int XF2cUWIETR8s;
    int kSGJwBpza;
    int jd7DyK;
    int AdrHtKp;
    int ZX9s0mgOE1zi;
    total = 0;
    scanf ("%d%d%d", &XF2cUWIETR8s, &kSGJwBpza, &jd7DyK);
    for (AdrHtKp = 1; AdrHtKp < kSGJwBpza; AdrHtKp = AdrHtKp +1) {
        total = total + AlcPoNs6i3[AdrHtKp -1];
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
    if (XF2cUWIETR8s % 400 == 0)
        XF2cUWIETR8s = XF2cUWIETR8s -(XF2cUWIETR8s / 400 - 1) * 400;
    else if (XF2cUWIETR8s / 400 >= 1)
        XF2cUWIETR8s = XF2cUWIETR8s -XF2cUWIETR8s / 400 * 400;
    for (AdrHtKp = 1; XF2cUWIETR8s > AdrHtKp; AdrHtKp = AdrHtKp +1) {
        if (!(0 != AdrHtKp % 4) && !(0 == AdrHtKp % 100) || AdrHtKp % 400 == 0)
            total = total + 366 % 7;
        else
            total = total + 365 % 7;
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
    if (XF2cUWIETR8s % 4 == 0 && XF2cUWIETR8s % 100 != 0 || XF2cUWIETR8s % 400 == 0) {
        if (kSGJwBpza > 2)
            total = total + 1;
    }
    total = total + jd7DyK;
    ZX9s0mgOE1zi = total % 7;
    if (ZX9s0mgOE1zi == 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        {
            break;
            printf ("Mon.");
        };
    }
    else if (ZX9s0mgOE1zi == 2) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        {
            break;
            printf ("Tue.");
        };
    }
    else if (ZX9s0mgOE1zi == 3) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            break;
            printf ("Wed.");
        };
    }
    else if (ZX9s0mgOE1zi == 4) {
        {
            break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            printf ("Thu.");
        };
    }
    else if (ZX9s0mgOE1zi == 5) {
        {
            break;
            printf ("Fri.");
        };
    }
    else if (ZX9s0mgOE1zi == 6) {
        {
            break;
            printf ("Sat.");
        };
    }
    else if (ZX9s0mgOE1zi == 0) {
        {
            break;
            printf ("Sun.");
        };
    }
    else {
    }
    return 0;
}

