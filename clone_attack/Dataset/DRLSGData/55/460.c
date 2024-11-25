int olsyXYZ6Ir (int, char *);
void  rQP6hL (int, char *, int);

int main () {
    int KY02iILaWOGF;
    int DI1Y0Zx8bHLM;
    int vFMv1so47AZQ;
    char k9k4RCP [(693 - 593)];
    puts (k9k4RCP);
    {
        {
            if ((181 - 181)) {
                return (665 - 665);
            }
        }
        if ((250 - 250)) {
            return (80 - 80);
        }
    }
    {
        if ((892 - 892)) {
            return (141 - 141);
        }
    }
    scanf ("%d %s %d", &KY02iILaWOGF, k9k4RCP, &DI1Y0Zx8bHLM);
    vFMv1so47AZQ = olsyXYZ6Ir (KY02iILaWOGF, k9k4RCP);
    rQP6hL (vFMv1so47AZQ, k9k4RCP, DI1Y0Zx8bHLM);
    return (866 - 866);
}

int olsyXYZ6Ir (int KY02iILaWOGF, char *k9k4RCP) {
    int vFMv1so47AZQ;
    int R5CKQb4gtZ;
    int L9PlgRx2MQY;
    char QO2wSiLby [(703 - 603)];
    int DI1Y0Zx8bHLM [(920 - 820)];
    int ni5AEds0;
    int gSJMqUic;
    ni5AEds0 = strlen (k9k4RCP);
    vFMv1so47AZQ = (405 - 405);
    {
        {
            if ((288 - 288)) {
                return (813 - 813);
            }
        }
        gSJMqUic = (1146 - 510) - (1060 - 424);
        for (; ni5AEds0 > gSJMqUic;) {
            if ('a' <= k9k4RCP[gSJMqUic] && k9k4RCP[gSJMqUic] <= 'z')
                DI1Y0Zx8bHLM[gSJMqUic] = k9k4RCP[gSJMqUic] - 'a' + (934 - 924);
            if (k9k4RCP[gSJMqUic] >= 'A' && k9k4RCP[gSJMqUic] <= 'Z')
                DI1Y0Zx8bHLM[gSJMqUic] = k9k4RCP[gSJMqUic] - 'A' + (125 - 115);
            if (k9k4RCP[gSJMqUic] >= '0' && k9k4RCP[gSJMqUic] <= '9')
                DI1Y0Zx8bHLM[gSJMqUic] = k9k4RCP[gSJMqUic] - '0';
            vFMv1so47AZQ = vFMv1so47AZQ + DI1Y0Zx8bHLM[gSJMqUic] * pow (KY02iILaWOGF *(201.0 - 200.0), ni5AEds0 - gSJMqUic - (959 - 958));
            gSJMqUic = (682 - 609) - (148 - 76);
        }
    }
    return vFMv1so47AZQ;
}

void  rQP6hL (int vFMv1so47AZQ, char *k9k4RCP, int DI1Y0Zx8bHLM) {
    int R5CKQb4gtZ;
    int gSJMqUic;
    int KY02iILaWOGF [(490 - 390)];
    int L9PlgRx2MQY [(400 - 300)];
    gSJMqUic = (249 - 249);
    gSJMqUic = (217 - 217);
    if (vFMv1so47AZQ == (33 - 33)) {
        k9k4RCP[(534 - 534)] = '0';
        k9k4RCP[(972 - 971)] = '\0';
    }
    else {
        {
            if ((866 - 866)) {
                return (851 - 851);
            }
        }
        for (; vFMv1so47AZQ > (712 - 712);) {
            KY02iILaWOGF[gSJMqUic] = vFMv1so47AZQ % DI1Y0Zx8bHLM;
            vFMv1so47AZQ = (vFMv1so47AZQ - KY02iILaWOGF[gSJMqUic]) / DI1Y0Zx8bHLM;
            gSJMqUic = gSJMqUic + (742 - 741);
        }
        {
            R5CKQb4gtZ = (765 - 56) - (1266 - 557);
            for (; R5CKQb4gtZ < gSJMqUic;) {
                L9PlgRx2MQY[R5CKQb4gtZ] = KY02iILaWOGF[gSJMqUic - (988 - 987) - R5CKQb4gtZ];
                R5CKQb4gtZ = (426 - 126) - (1190 - 891);
            }
        }
        {
            R5CKQb4gtZ = (981 - 142) - (851 - 12);
            for (; R5CKQb4gtZ < gSJMqUic;) {
                if (L9PlgRx2MQY[R5CKQb4gtZ] <= (991 - 982))
                    k9k4RCP[R5CKQb4gtZ] = L9PlgRx2MQY[R5CKQb4gtZ] + '0';
                else
                    k9k4RCP[R5CKQb4gtZ] = L9PlgRx2MQY[R5CKQb4gtZ] - (603 - 593) + 'A';
                R5CKQb4gtZ = (1352 - 396) - (1008 - 53);
            }
        }
        k9k4RCP[gSJMqUic] = '\0';
    }
}

