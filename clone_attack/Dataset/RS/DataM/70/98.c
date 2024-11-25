struct   dis {
    double  OrUVLuM1R, pFYzXZgslU;
}
s [(1681 - 681)];

int main (int argc, char *argv []) {
    int Q5xbuOl;
    int WTK630F;
    int i;
    int vOevQu0CpUa;
    Q5xbuOl = (251 - 251);
    double  qhAsyEL [(10135 - 135)];
    double  m;
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
    scanf ("%d", &WTK630F);
    for (i = 0; i < WTK630F; i = i + 1) {
        scanf ("%lf%lf", &s[i].OrUVLuM1R, &s[i].pFYzXZgslU);
    }
    {
        i = 0;
        while (i < WTK630F -(317 - 316)) {
            {
                vOevQu0CpUa = 167 - 166;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (vOevQu0CpUa > i) {
                    Q5xbuOl = Q5xbuOl +1;
                    qhAsyEL[Q5xbuOl] = sqrt ((s[i].OrUVLuM1R - s[vOevQu0CpUa].OrUVLuM1R) * (s[i].OrUVLuM1R - s[vOevQu0CpUa].OrUVLuM1R) + (s[i].pFYzXZgslU - s[vOevQu0CpUa].pFYzXZgslU) * (s[i].pFYzXZgslU - s[vOevQu0CpUa].pFYzXZgslU));
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
                    vOevQu0CpUa = vOevQu0CpUa - 1;
                };
            }
            i = i + 1;
        };
    }
    {
        vOevQu0CpUa = Q5xbuOl;
        while (vOevQu0CpUa > (463 - 462)) {
            if (qhAsyEL[vOevQu0CpUa] > qhAsyEL[vOevQu0CpUa - (961 - 960)]) {
                m = qhAsyEL[vOevQu0CpUa - 1];
                qhAsyEL[vOevQu0CpUa - 1] = qhAsyEL[vOevQu0CpUa];
                qhAsyEL[vOevQu0CpUa] = m;
            }
            vOevQu0CpUa--;
        };
    }
    printf ("%.4lf\n", qhAsyEL[1]);
    return 0;
}

