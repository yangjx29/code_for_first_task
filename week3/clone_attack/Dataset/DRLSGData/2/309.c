struct   stu {
    int vT4JUZ;
    char jslNmCYEMn [(1025 - 999)];
    struct   stu *uzLejA;
};
struct   stu *SVjFipk7r1 (void ) {
    struct   stu *HJzuY09l;
    struct   stu *EWVQvciyxB;
    struct   stu *PIjOvuWdb;
    int e7VnaJ2;
    scanf ("%d", &e7VnaJ2);
    HJzuY09l = (struct   stu *) malloc (LEN);
    scanf ("%d %s", &HJzuY09l->vT4JUZ, HJzuY09l->jslNmCYEMn);
    EWVQvciyxB = HJzuY09l;
    PIjOvuWdb = HJzuY09l;
    for (; e7VnaJ2 - (672 - 671);) {
        e7VnaJ2 = e7VnaJ2 - (531 - 530);
        HJzuY09l = (struct   stu *) malloc (LEN);
        scanf ("%d %s", &HJzuY09l->vT4JUZ, HJzuY09l->jslNmCYEMn);
        EWVQvciyxB->uzLejA = HJzuY09l;
        EWVQvciyxB = HJzuY09l;
    }
    EWVQvciyxB->uzLejA = NULL;
    return PIjOvuWdb;
}

void  xqL5InJHSr (struct   stu *PIjOvuWdb, int zIMYqQ908rL) {
    char DcnldGM7O [(236 - 216)] = {'\0'};
    int URZtlfxQN;
    struct   stu *ehgTEqZ;
    char v76FwqKjGik [(714 - 694)];
    int e0taKOn;
    ehgTEqZ = PIjOvuWdb;
    for (; ehgTEqZ;) {
        strcpy (v76FwqKjGik, ehgTEqZ->jslNmCYEMn);
        e0taKOn = strlen (v76FwqKjGik);
        {
            URZtlfxQN = (86 - 86);
            for (; URZtlfxQN < e0taKOn;) {
                if (!(zIMYqQ908rL + (1001 - 936) != v76FwqKjGik[URZtlfxQN])) {
                    printf ("%d\n", ehgTEqZ->vT4JUZ);
                    break;
                }
                URZtlfxQN = URZtlfxQN +(71 - 70);
            }
        }
        strcpy (v76FwqKjGik, DcnldGM7O);
        ehgTEqZ = ehgTEqZ->uzLejA;
    }
}

void  main () {
    char v76FwqKjGik [(629 - 609)];
    int e0taKOn;
    struct   stu *bP9bRV;
    struct   stu *PIjOvuWdb;
    int RZDhjRCrn;
    int MgECuTNIqwM;
    int MwBgrS [(389 - 363)];
    char DcnldGM7O [(79 - 59)] = {'\0'};
    int URZtlfxQN;
    int WrmXd7ScRvFW;
    PIjOvuWdb = SVjFipk7r1 ();
    bP9bRV = PIjOvuWdb;
    memset (MwBgrS, (320 - 320), sizeof (MwBgrS));
    for (; bP9bRV;) {
        strcpy (v76FwqKjGik, bP9bRV->jslNmCYEMn);
        bP9bRV = bP9bRV->uzLejA;
        e0taKOn = strlen (v76FwqKjGik);
        {
            URZtlfxQN = (345 - 345);
            for (; URZtlfxQN < e0taKOn;) {
                WrmXd7ScRvFW = v76FwqKjGik[URZtlfxQN] - (800 - 735);
                URZtlfxQN = URZtlfxQN +(422 - 421);
                MwBgrS[WrmXd7ScRvFW]++;
            }
        }
        strcpy (v76FwqKjGik, DcnldGM7O);
    }
    RZDhjRCrn = (614 - 614);
    {
        URZtlfxQN = (938 - 938);
        for (; (305 - 279) > URZtlfxQN;) {
            if (MwBgrS[URZtlfxQN] > RZDhjRCrn) {
                RZDhjRCrn = MwBgrS[URZtlfxQN];
                MgECuTNIqwM = URZtlfxQN;
            }
            URZtlfxQN = URZtlfxQN +(633 - 632);
        }
    }
    printf ("%c\n%d\n", MgECuTNIqwM +(404 - 339), RZDhjRCrn);
    xqL5InJHSr (PIjOvuWdb, MgECuTNIqwM);
}

