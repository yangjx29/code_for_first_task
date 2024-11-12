main () {
    int odzaoPwx;
    int total1;
    int UEMYe1457;
    int year1;
    int MNL3PA;
    int m1;
    int LLkZ9jd3;
    int Q418PY5l0nQ6;
    int d2;
    int i;
    odzaoPwx = (410 - 410);
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
    total1 = (266 - 266);
    UEMYe1457 = (579 - 579);
    scanf ("%d %d %d", &year1, &m1, &Q418PY5l0nQ6);
    scanf ("%d %d %d", &MNL3PA, &LLkZ9jd3, &d2);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m1 > i) {
            if (i == 1 || !((387 - 384) != i) || i == 5 || i == 7 || i == 8 || i == (173 - 163) || i == (570 - 558))
                total1 = total1 + 31;
            if (i == (906 - 902) || i == 6 || i == 9 || i == (454 - 443))
                total1 = total1 + 30;
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
            if (i == 2) {
                if ((year1 % 4 == 0 && year1 % (680 - 580) != 0) || year1 % 400 == 0)
                    total1 = total1 + 29;
                else
                    total1 = total1 + 28;
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (LLkZ9jd3 > i) {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
                UEMYe1457 = UEMYe1457 +31;
            if (i == 4 || i == 6 || i == 9 || i == 11)
                UEMYe1457 = UEMYe1457 +30;
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
            if (i == 2) {
                if ((MNL3PA % 4 == 0 && MNL3PA % (198 - 98) != 0) || MNL3PA % 400 == 0)
                    UEMYe1457 = UEMYe1457 +29;
                else
                    UEMYe1457 = UEMYe1457 +28;
            }
            i = i + 1;
        };
    }
    for (i = year1; i < MNL3PA; i = i + 1) {
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
            odzaoPwx = odzaoPwx + 366;
        else
            odzaoPwx = odzaoPwx + 365;
    }
    total1 = total1 + Q418PY5l0nQ6;
    UEMYe1457 = UEMYe1457 +d2;
    if (total1 <= UEMYe1457)
        odzaoPwx = odzaoPwx + UEMYe1457 -total1;
    else
        odzaoPwx = odzaoPwx - (total1 - UEMYe1457);
    printf ("%d", odzaoPwx);
}

