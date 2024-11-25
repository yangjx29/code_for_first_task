int main () {
    int Q0gdZ6eOiI9s;
    Q0gdZ6eOiI9s = 0;
    int GJWgOflZr [10000];
    double  DvejuiblKIL = 0, zqpPcA = 0;
    char LFDIzLulHhm [10000];
    char opjmKg1 [10000];
    double  hhVvNo [10000];
    double  gUF0bozv4i [10000];
    int Oc3fxFQwbgY5;
    int EodChkyW;
    int ZU7VHoMJx0;
    int nfWjamg6;
    Oc3fxFQwbgY5 = 1;
    EodChkyW = 1;
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
    memset (LFDIzLulHhm, (405 - 405), sizeof LFDIzLulHhm);
    memset (opjmKg1, 0, sizeof opjmKg1);
    memset (hhVvNo, 0, sizeof hhVvNo);
    cin.getline (LFDIzLulHhm, 10000);
    hhVvNo[1] = atof (LFDIzLulHhm);
    cin.getline (opjmKg1, 10000);
    memset (gUF0bozv4i, 0, sizeof gUF0bozv4i);
    gUF0bozv4i[1] = atof (opjmKg1);
    for (ZU7VHoMJx0 = 1;; ZU7VHoMJx0++) {
        if (LFDIzLulHhm[ZU7VHoMJx0] != ',' && LFDIzLulHhm[ZU7VHoMJx0] != 0 && LFDIzLulHhm[ZU7VHoMJx0 -1] == ',') {
            Oc3fxFQwbgY5++;
            hhVvNo[Oc3fxFQwbgY5] = atof (&LFDIzLulHhm[ZU7VHoMJx0]);
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
            if (hhVvNo[Oc3fxFQwbgY5] > zqpPcA)
                zqpPcA = hhVvNo[Oc3fxFQwbgY5];
            if (hhVvNo[Oc3fxFQwbgY5] < DvejuiblKIL)
                DvejuiblKIL = hhVvNo[Oc3fxFQwbgY5];
        }
        if (LFDIzLulHhm[ZU7VHoMJx0] == 0)
            break;
    }
    {
        ZU7VHoMJx0 = 1;
        while (1) {
            if (opjmKg1[ZU7VHoMJx0] != ',' && opjmKg1[ZU7VHoMJx0] != 0 && opjmKg1[ZU7VHoMJx0 -1] == ',') {
                EodChkyW++;
                gUF0bozv4i[EodChkyW] = atof (&opjmKg1[ZU7VHoMJx0]);
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
                if (gUF0bozv4i[EodChkyW] > zqpPcA)
                    zqpPcA = gUF0bozv4i[EodChkyW];
                if (gUF0bozv4i[EodChkyW] < DvejuiblKIL)
                    DvejuiblKIL = gUF0bozv4i[EodChkyW];
            }
            if (opjmKg1[ZU7VHoMJx0] == 0)
                break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            ZU7VHoMJx0++;
        };
    }
    memset (GJWgOflZr, 0, sizeof GJWgOflZr);
    cout << Oc3fxFQwbgY5 << " ";
    DvejuiblKIL = (int) DvejuiblKIL;
    zqpPcA = (int) zqpPcA;
    {
        ZU7VHoMJx0 = DvejuiblKIL;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (ZU7VHoMJx0 <= zqpPcA) {
            for (nfWjamg6 = 1; nfWjamg6 <= Oc3fxFQwbgY5; nfWjamg6++) {
                if (ZU7VHoMJx0 >= hhVvNo[nfWjamg6] && ZU7VHoMJx0 < gUF0bozv4i[nfWjamg6])
                    GJWgOflZr[ZU7VHoMJx0]++;
            }
            ZU7VHoMJx0++;
        };
    }
    {
        ZU7VHoMJx0 = DvejuiblKIL;
        while (ZU7VHoMJx0 <= zqpPcA) {
            if (GJWgOflZr[ZU7VHoMJx0] > Q0gdZ6eOiI9s)
                Q0gdZ6eOiI9s = GJWgOflZr[ZU7VHoMJx0];
            ZU7VHoMJx0++;
        };
    }
    cout << Q0gdZ6eOiI9s;
    return 0;
}

