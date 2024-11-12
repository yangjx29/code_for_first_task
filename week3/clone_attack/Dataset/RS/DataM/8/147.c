int m [100], n [100], *Fbkc821pd, *q, vR9LEza, pmzjUDhwo;

void  arHaEPvbIx () {
    int btHpUCziPTu7;
    scanf ("%d %d", &vR9LEza, &pmzjUDhwo);
    Fbkc821pd = m;
    q = n;
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
        btHpUCziPTu7 = 0;
        while (vR9LEza > btHpUCziPTu7) {
            btHpUCziPTu7 = btHpUCziPTu7 + 1;
            scanf ("%d", Fbkc821pd);
            Fbkc821pd = Fbkc821pd +1;
        };
    }
    Fbkc821pd = m;
    {
        btHpUCziPTu7 = 0;
        while (pmzjUDhwo > btHpUCziPTu7) {
            btHpUCziPTu7 = btHpUCziPTu7 + 1;
            scanf ("%d", q);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            q = q + 1;
        };
    }
    q = n;
}

void  sort (int *Fbkc821pd, int vR9LEza) {
    int btHpUCziPTu7;
    int j;
    int temp;
    {
        btHpUCziPTu7 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (vR9LEza - 1 > btHpUCziPTu7) {
            {
                j = 0;
                while (vR9LEza - btHpUCziPTu7 - 1 > j) {
                    if (Fbkc821pd[j] > Fbkc821pd[j + 1]) {
                        temp = Fbkc821pd[j];
                        Fbkc821pd[j] = Fbkc821pd[j + 1];
                        Fbkc821pd[j + 1] = temp;
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
                    j = j + 1;
                };
            }
            btHpUCziPTu7++;
        };
    };
}

void  mix () {
    int btHpUCziPTu7;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        btHpUCziPTu7 = 0;
        while (pmzjUDhwo > btHpUCziPTu7) {
            Fbkc821pd[vR9LEza + btHpUCziPTu7] = q[btHpUCziPTu7];
            btHpUCziPTu7++;
        };
    };
}

void  VIsxeO () {
    int btHpUCziPTu7;
    for (btHpUCziPTu7 = 0; btHpUCziPTu7 < vR9LEza + pmzjUDhwo - 1; btHpUCziPTu7++) {
        printf ("%d ", *(Fbkc821pd++));
    }
    printf ("%d\n", *Fbkc821pd);
}

main () {
    arHaEPvbIx ();
    sort (Fbkc821pd, vR9LEza);
    sort (q, pmzjUDhwo);
    mix ();
    VIsxeO ();
    return 0;
}

