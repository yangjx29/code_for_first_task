int ifunlucky (int AmFRCqWpfNxr);

int main () {
    int x67IPNvskh;
    int t;
    int pEm4QqUspOGI;
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
    pEm4QqUspOGI = 1;
    scanf ("%d", &x67IPNvskh);
    {
        pEm4QqUspOGI = 1;
        while (pEm4QqUspOGI <= 12) {
            t = ifunlucky (pEm4QqUspOGI);
            if ((t + x67IPNvskh - 5) % 7 == 0) {
                printf ("%d\n", pEm4QqUspOGI);
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
            pEm4QqUspOGI++;
        };
    }
    return 0;
}

int ifunlucky (int AmFRCqWpfNxr) {
    int i;
    i = 1;
    int nEwVi926H;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    nEwVi926H = 0;
    {
        i = 1;
        while (AmFRCqWpfNxr > i) {
            if (!(1 != i) || !(3 != i) || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
                nEwVi926H += 31;
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
            else {
                if (i == 2) {
                    nEwVi926H += 28;
                }
                else {
                    nEwVi926H += 30;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    return nEwVi926H + 12;
}

