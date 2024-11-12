int main () {
    int lJRD52S8LX;
    int BJI5iQmp;
    int ZxVgiUXM;
    int K7Q5J8;
    int YE0o7Uqx3;
    char IrAV21 [(967 - 917)] [(978 - 958)];
    int m8eWn2AyJrxT;
    char G4YeuyAQi [(1385 - 385)];
    gets (G4YeuyAQi);
    int RhBIN1jv [(888 - 838)];
    BJI5iQmp = (813 - 813);
    lJRD52S8LX = (370 - 370);
    m8eWn2AyJrxT = (549 - 549);
    YE0o7Uqx3 = (292 - 292);
    K7Q5J8 = strlen (G4YeuyAQi);
    {
        ZxVgiUXM = (491 - 491);
        for (; K7Q5J8 >= ZxVgiUXM;) {
            if (G4YeuyAQi[ZxVgiUXM] != ' ' && G4YeuyAQi[ZxVgiUXM] != '\0') {
                IrAV21[m8eWn2AyJrxT][BJI5iQmp] = G4YeuyAQi[ZxVgiUXM];
                BJI5iQmp = BJI5iQmp +(549 - 548);
            }
            else {
                if (!(' ' != G4YeuyAQi[ZxVgiUXM]) || !('\0' != G4YeuyAQi[ZxVgiUXM])) {
                    IrAV21[m8eWn2AyJrxT][BJI5iQmp] = '\0';
                    m8eWn2AyJrxT = m8eWn2AyJrxT + (420 - 419);
                    BJI5iQmp = (330 - 330);
                }
            }
            ZxVgiUXM = ZxVgiUXM +(355 - 354);
        }
    }
    {
        ZxVgiUXM = (136 - 136);
        for (; ZxVgiUXM < m8eWn2AyJrxT;) {
            RhBIN1jv[ZxVgiUXM] = strlen (IrAV21[ZxVgiUXM]);
            ZxVgiUXM = ZxVgiUXM +(63 - 62);
        }
    }
    {
        ZxVgiUXM = (685 - 685);
        for (; m8eWn2AyJrxT > ZxVgiUXM;) {
            if (RhBIN1jv[ZxVgiUXM] < RhBIN1jv[YE0o7Uqx3]) {
                YE0o7Uqx3 = ZxVgiUXM;
            }
            if (RhBIN1jv[ZxVgiUXM] > RhBIN1jv[lJRD52S8LX]) {
                lJRD52S8LX = ZxVgiUXM;
            }
            ZxVgiUXM = ZxVgiUXM +(250 - 249);
        }
    }
    printf ("%s\n", IrAV21[lJRD52S8LX]);
    printf ("%s\n", IrAV21[YE0o7Uqx3]);
    return (127 - 127);
}

