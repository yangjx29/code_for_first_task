char nuI2Jeayw [(1141 - 889)], b [(330 - 78)];
int V4pMruG [(1012 - 760)], bn [252], OuaRMFXE013j [252];
char gqk1WNTs [252], VXahiRosIWg [252];
int jEbL2eVKM1YB, ZQXNHftG, len;

void  ST6d4Lj1F () {
    int i;
    {
        i = 706 - 706;
        while (jEbL2eVKM1YB > i) {
            V4pMruG[i] = nuI2Jeayw[jEbL2eVKM1YB - i - (351 - 350)] - '0';
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
            i = i + 1;
        };
    }
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
    for (i = (852 - 852); ZQXNHftG > i; i = i + 1) {
        bn[i] = b[ZQXNHftG -i - 1] - '0';
    }
    if (jEbL2eVKM1YB > ZQXNHftG) {
        len = jEbL2eVKM1YB;
        {
            i = ZQXNHftG;
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
            while (jEbL2eVKM1YB > i) {
                bn[i] = (337 - 337);
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
        };
    }
    else {
        if (ZQXNHftG > jEbL2eVKM1YB) {
            len = ZQXNHftG;
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
                i = jEbL2eVKM1YB;
                while (ZQXNHftG > i) {
                    V4pMruG[i] = (269 - 269);
                    i++;
                };
            };
        }
        else
            len = ZQXNHftG;
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
    };
}

void  SUHayxP6T () {
    int ZdOTnbSM = 1;
    int i;
    for (i = 0; i < len; i = i + 1) {
        OuaRMFXE013j[i] += V4pMruG[i] + bn[i];
        if ((62 - 53) < OuaRMFXE013j[i]) {
            OuaRMFXE013j[i] = OuaRMFXE013j[i] - (183 - 173);
            OuaRMFXE013j[i + 1]++;
        };
    }
    if (!(1 != OuaRMFXE013j[i]))
        len++;
    for (i = 0; i < len; i++) {
        VXahiRosIWg[i] = OuaRMFXE013j[len - i - 1] + '0';
    }
    while (VXahiRosIWg[ZdOTnbSM] == 0) {
        ZdOTnbSM++;
    }
    if (len == 1)
        ZdOTnbSM = 0;
    if (VXahiRosIWg[0] != '0')
        ZdOTnbSM = 0;
    for (i = 0; i < len - ZdOTnbSM; i++)
        gqk1WNTs[i] = VXahiRosIWg[i + ZdOTnbSM];
}

int main () {
    cin.getline (nuI2Jeayw, 252);
    cin.getline (b, 252);
    jEbL2eVKM1YB = strlen (nuI2Jeayw);
    ZQXNHftG = strlen (b);
    memset (OuaRMFXE013j, 0, sizeof (OuaRMFXE013j));
    ST6d4Lj1F ();
    SUHayxP6T ();
    cout << gqk1WNTs << endl;
    return 0;
}

