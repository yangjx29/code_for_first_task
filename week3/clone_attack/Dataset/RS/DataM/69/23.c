int main () {
    int MFGkDxL5lPqb [Max +(299 - 289)] = {(770 - 770)};
    int a2 [Max +(636 - 626)] = {(137 - 137)};
    char sK0z8s9Yho [Max +(683 - 673)];
    char GCa7V2PYZW [Max +(308 - 298)];
    int i, j, e, jjPwcvou;
    int icz4ngJF;
    int L2;
    scanf ("%s", sK0z8s9Yho);
    scanf ("%s", GCa7V2PYZW);
    icz4ngJF = strlen (sK0z8s9Yho);
    L2 = strlen (GCa7V2PYZW);
    j = (747 - 747);
    if (!((407 - 406) != icz4ngJF) && L2 == (379 - 378)) {
        e = sK0z8s9Yho[(188 - 188)] - '0';
        jjPwcvou = GCa7V2PYZW[(118 - 118)] - '0';
        printf ("%d", e + jjPwcvou);
    }
    else {
        {
            i = icz4ngJF - 1;
            while (0 <= i) {
                MFGkDxL5lPqb[j++] = sK0z8s9Yho[i] - '0';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i = i - 1;
            };
        }
        j = 0;
        {
            i = L2 -1;
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
            while (0 <= i) {
                a2[j++] = GCa7V2PYZW[i] - '0';
                i = i - 1;
            };
        }
        {
            i = 0;
            while (Max > i) {
                MFGkDxL5lPqb[i] = MFGkDxL5lPqb[i] + a2[i];
                if (MFGkDxL5lPqb[i] >= (469 - 459)) {
                    MFGkDxL5lPqb[i] = MFGkDxL5lPqb[i] - 10;
                    MFGkDxL5lPqb[i + 1]++;
                }
                i++;
            };
        }
        {
            i = Max;
            while (i >= 0) {
                if (MFGkDxL5lPqb[i] != 0) {
                    j = i;
                    break;
                }
                i--;
            };
        }
        {
            i = j;
            while (i >= 0) {
                printf ("%d", MFGkDxL5lPqb[i]);
                i--;
            };
        };
    }
    return 0;
}

