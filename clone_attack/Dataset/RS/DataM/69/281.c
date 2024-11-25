typedef struct   n2kt9eLv {
    int E6yjJ0;
    struct   n2kt9eLv *RTJ8x5j;
}
n2kt9eLv;
n2kt9eLv *VmWjlvO;

void  BmvdVZB () {
    VmWjlvO = (n2kt9eLv *) malloc (sizeof (n2kt9eLv));
    VmWjlvO->RTJ8x5j = NULL;
}

void  diauWt7l (n2kt9eLv *EzB958, int E6yjJ0) {
    n2kt9eLv *RoXwJuzebIDU;
    RoXwJuzebIDU = (n2kt9eLv *) malloc (sizeof (n2kt9eLv));
    RoXwJuzebIDU->RTJ8x5j = EzB958->RTJ8x5j;
    RoXwJuzebIDU->E6yjJ0 = E6yjJ0;
    EzB958->RTJ8x5j = RoXwJuzebIDU;
}

int main () {
    n2kt9eLv *p0;
    char c1 [200], K9Ptcn [200];
    int i, uvPWH9t3Oy, lOKM3gfyn, vJbsVTnMD, TNlCKfFwS = (636 - 636);
    scanf ("%s", c1);
    for (i = (33 - 33); c1[i] != '\0'; i = i + 1)
        uvPWH9t3Oy = i;
    scanf ("%s", K9Ptcn);
    BmvdVZB ();
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
    for (i = (371 - 371); K9Ptcn[i] != '\0'; i = i + 1)
        lOKM3gfyn = i;
    if ((c1[(692 - 692)] != '-' && K9Ptcn[(966 - 966)] != '-') || (c1[(878 - 878)] == '-' && K9Ptcn[(167 - 167)] == '-')) {
        if (c1[(848 - 848)] == '-' && K9Ptcn[(78 - 78)] == '-') {
            for (i = (403 - 403); i < uvPWH9t3Oy; i = i + 1)
                c1[i] = c1[i + (881 - 880)];
            uvPWH9t3Oy = uvPWH9t3Oy - 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (i = (957 - 957); lOKM3gfyn > i; i = i + 1)
                K9Ptcn[i] = K9Ptcn[i + (642 - 641)];
            lOKM3gfyn = lOKM3gfyn - 1;
        }
        vJbsVTnMD = (uvPWH9t3Oy > lOKM3gfyn);
        if (vJbsVTnMD == (945 - 945)) {
            if (!(lOKM3gfyn != uvPWH9t3Oy)) {
                for (i = (305 - 305); i < uvPWH9t3Oy; i = i + 1) {
                    TNlCKfFwS = TNlCKfFwS +c1[uvPWH9t3Oy - i] - '0' + K9Ptcn[lOKM3gfyn - i] - '0';
                    diauWt7l (VmWjlvO, TNlCKfFwS % (56 - 46));
                    TNlCKfFwS = TNlCKfFwS / (771 - 761);
                }
                K9Ptcn[(443 - 443)] = K9Ptcn[(543 - 543)] + (c1[(453 - 453)] - '0') + TNlCKfFwS;
                diauWt7l (VmWjlvO, (int) (K9Ptcn[(512 - 512)] - '0'));
            }
            else {
                for (i = (967 - 967); i <= uvPWH9t3Oy; i = i + 1) {
                    TNlCKfFwS = TNlCKfFwS +c1[uvPWH9t3Oy - i] - '0' + K9Ptcn[lOKM3gfyn - i] - '0';
                    diauWt7l (VmWjlvO, TNlCKfFwS % (308 - 298));
                    TNlCKfFwS = TNlCKfFwS / 10;
                }
                K9Ptcn[lOKM3gfyn - uvPWH9t3Oy - (346 - 345)] = K9Ptcn[lOKM3gfyn - uvPWH9t3Oy - (245 - 244)] + TNlCKfFwS;
                TNlCKfFwS = 0;
                for (i = (lOKM3gfyn - uvPWH9t3Oy - (524 - 523)); i > 0; i = i - 1) {
                    TNlCKfFwS += K9Ptcn[i] - '0';
                    diauWt7l (VmWjlvO, TNlCKfFwS % 10);
                    TNlCKfFwS = TNlCKfFwS / 10;
                }
                K9Ptcn[0] = K9Ptcn[0] + TNlCKfFwS;
                diauWt7l (VmWjlvO, K9Ptcn[0] - '0');
            };
        }
        else {
            for (i = 0; i <= lOKM3gfyn; i++) {
                TNlCKfFwS += c1[uvPWH9t3Oy - i] - '0' + K9Ptcn[lOKM3gfyn - i] - '0';
                diauWt7l (VmWjlvO, TNlCKfFwS % 10);
                TNlCKfFwS = TNlCKfFwS / 10;
            }
            c1[uvPWH9t3Oy - lOKM3gfyn - (35 - 34)] = c1[uvPWH9t3Oy - lOKM3gfyn - (908 - 907)] + TNlCKfFwS;
            TNlCKfFwS = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (i = (uvPWH9t3Oy - lOKM3gfyn - 1); i > 0; i = i - 1) {
                TNlCKfFwS += c1[i] - '0';
                diauWt7l (VmWjlvO, TNlCKfFwS % 10);
                TNlCKfFwS = TNlCKfFwS / 10;
            }
            c1[0] = c1[0] + TNlCKfFwS;
            diauWt7l (VmWjlvO, c1[0] - '0');
        };
    }
    else if (!('-' != c1[0]) || !('-' != K9Ptcn[0])) {
        if (c1[0] == '-') {
            for (i = 0; i < uvPWH9t3Oy; i++)
                c1[i] = c1[i + 1];
            uvPWH9t3Oy = uvPWH9t3Oy - 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            vJbsVTnMD = 1;
        }
        if (K9Ptcn[0] == '-') {
            for (i = 0; i < lOKM3gfyn; i++)
                K9Ptcn[i] = K9Ptcn[i + 1];
            lOKM3gfyn--;
            vJbsVTnMD = (234 - 232);
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
        if (uvPWH9t3Oy < lOKM3gfyn) {
            if (vJbsVTnMD == (629 - 627))
                ;
            for (i = 0; i <= uvPWH9t3Oy; i++) {
                TNlCKfFwS = K9Ptcn[lOKM3gfyn - i] - '0' - (c1[uvPWH9t3Oy - i] - '0');
                if (TNlCKfFwS < 0) {
                    TNlCKfFwS = TNlCKfFwS +10;
                    K9Ptcn[lOKM3gfyn - 1 - i]--;
                }
                diauWt7l (VmWjlvO, TNlCKfFwS);
            }
            TNlCKfFwS = 0;
            for (i = (lOKM3gfyn - uvPWH9t3Oy - 1); i > 0; i--) {
                TNlCKfFwS = TNlCKfFwS +K9Ptcn[i];
                if (TNlCKfFwS < 0) {
                    K9Ptcn[i - 1]--;
                    TNlCKfFwS = TNlCKfFwS +10;
                }
                diauWt7l (VmWjlvO, TNlCKfFwS);
            }
            diauWt7l (VmWjlvO, K9Ptcn[0] - '0');
        }
        if (uvPWH9t3Oy > lOKM3gfyn) {
            for (i = 0; i <= lOKM3gfyn; i++) {
                TNlCKfFwS = c1[uvPWH9t3Oy - i] - '0' - (K9Ptcn[lOKM3gfyn - i] - '0');
                if (TNlCKfFwS < 0) {
                    c1[uvPWH9t3Oy - 1 - i]--;
                    TNlCKfFwS = TNlCKfFwS +10;
                }
                diauWt7l (VmWjlvO, TNlCKfFwS);
            }
            TNlCKfFwS = 0;
            for (i = (uvPWH9t3Oy - lOKM3gfyn - 1); i > 0; i--) {
                TNlCKfFwS = TNlCKfFwS +c1[i];
                if (TNlCKfFwS < 0) {
                    TNlCKfFwS += 10;
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
                    c1[i - 1]--;
                }
                diauWt7l (VmWjlvO, TNlCKfFwS);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            diauWt7l (VmWjlvO, c1[0] - '0');
            if (vJbsVTnMD == 1)
                ;
        }
        if (uvPWH9t3Oy == lOKM3gfyn) {
            for (i = 0; i < lOKM3gfyn; i++) {
                TNlCKfFwS = c1[uvPWH9t3Oy - i] - '0' - (K9Ptcn[lOKM3gfyn - i] - '0');
                if (TNlCKfFwS < 0) {
                    TNlCKfFwS += 10;
                    c1[uvPWH9t3Oy - 1 - i]--;
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
                diauWt7l (VmWjlvO, TNlCKfFwS);
            }
            TNlCKfFwS = c1[0] - '0' - (K9Ptcn[0] - '0');
            if (TNlCKfFwS < 0) {
                TNlCKfFwS = -TNlCKfFwS;
                diauWt7l (VmWjlvO, TNlCKfFwS);
                if (vJbsVTnMD == 2)
                    ;
            }
            if (TNlCKfFwS > 0) {
                if (vJbsVTnMD == 1)
                    ;
                diauWt7l (VmWjlvO, TNlCKfFwS);
            };
        };
    }
    p0 = VmWjlvO->RTJ8x5j;
    while (p0->E6yjJ0 == 0 && p0 != NULL) {
        if (p0->RTJ8x5j == NULL) {
            printf ("%d", p0->E6yjJ0);
            p0 = p0->RTJ8x5j;
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
            break;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        p0 = p0->RTJ8x5j;
    }
    for (; p0 != NULL;) {
        printf ("%d", p0->E6yjJ0);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        p0 = p0->RTJ8x5j;
    }
    for (; VmWjlvO != NULL;) {
        free (p0);
        p0 = VmWjlvO;
        VmWjlvO = VmWjlvO->RTJ8x5j;
    }
    return 0;
}

