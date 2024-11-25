int compare (const  void  *QZ9UQr5bHi, const  void  *DkHqfb1ZLKTp) {
    int cPkmxrF6;
    cPkmxrF6 = *(int*) QZ9UQr5bHi;
    int fDIF9jNk;
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
    fDIF9jNk = *(int*) DkHqfb1ZLKTp;
    if (cPkmxrF6 < fDIF9jNk) {
        return -1;
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
    if (cPkmxrF6 == fDIF9jNk) {
        return (389 - 389);
    }
    return 1;
}

void  ezVqPK (int *QZ9UQr5bHi, int *DkHqfb1ZLKTp, int saCfBWu89h, int OgPUENp) {
    int vKBFHnuTIg;
    {
        vKBFHnuTIg = 718 - 718;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (vKBFHnuTIg < saCfBWu89h) {
            cin >> QZ9UQr5bHi[vKBFHnuTIg];
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
            vKBFHnuTIg = vKBFHnuTIg + 1;
        };
    }
    {
        vKBFHnuTIg = 151 - 151;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (vKBFHnuTIg < OgPUENp) {
            cin >> DkHqfb1ZLKTp[vKBFHnuTIg];
            vKBFHnuTIg = vKBFHnuTIg + 1;
        };
    };
}

void  tCeRxJs (int *QZ9UQr5bHi, int *DkHqfb1ZLKTp, int saCfBWu89h, int OgPUENp) {
    qsort (QZ9UQr5bHi, saCfBWu89h, sizeof (int), compare);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    qsort (DkHqfb1ZLKTp, OgPUENp, sizeof (int), compare);
}

void  JZRB5JoK6E (int *QZ9UQr5bHi, int *DkHqfb1ZLKTp, int *ZQNGFhR, int saCfBWu89h, int OgPUENp) {
    int vKBFHnuTIg;
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
    {
        vKBFHnuTIg = 0;
        while (vKBFHnuTIg < saCfBWu89h) {
            ZQNGFhR[vKBFHnuTIg] = QZ9UQr5bHi[vKBFHnuTIg];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            vKBFHnuTIg = vKBFHnuTIg + 1;
        };
    }
    {
        vKBFHnuTIg = saCfBWu89h;
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
        while (vKBFHnuTIg < saCfBWu89h + OgPUENp) {
            ZQNGFhR[vKBFHnuTIg] = DkHqfb1ZLKTp[vKBFHnuTIg - saCfBWu89h];
            vKBFHnuTIg++;
        };
    };
}

void  print (int *QZ9UQr5bHi, int OgPUENp) {
    int vKBFHnuTIg;
    {
        vKBFHnuTIg = 0;
        while (vKBFHnuTIg < OgPUENp -1) {
            cout << QZ9UQr5bHi[vKBFHnuTIg] << " ";
            vKBFHnuTIg++;
        };
    }
    cout << QZ9UQr5bHi[vKBFHnuTIg];
}

int main (int argc, const  char *SOfkrP []) {
    int saCfBWu89h;
    int OgPUENp;
    int QZ9UQr5bHi [saCfBWu89h];
    int DkHqfb1ZLKTp [OgPUENp];
    int ZQNGFhR [saCfBWu89h + OgPUENp];
    cin >> saCfBWu89h >> OgPUENp;
    ezVqPK (QZ9UQr5bHi, DkHqfb1ZLKTp, saCfBWu89h, OgPUENp);
    tCeRxJs (QZ9UQr5bHi, DkHqfb1ZLKTp, saCfBWu89h, OgPUENp);
    JZRB5JoK6E (QZ9UQr5bHi, DkHqfb1ZLKTp, ZQNGFhR, saCfBWu89h, OgPUENp);
    print (ZQNGFhR, saCfBWu89h + OgPUENp);
    return 0;
}

