struct   student {
    char PzsPEI0yc [20];
    int jBIEDHLpn;
    int ILFbY0uURzE5;
    char Lowljd8An4VQ;
    char AusQhoM2;
    int essay;
    int qDFkAzX;
};
int vk5KpQZr326F (struct   student a);
int AcaeYI (struct   student a);
int mkVazQemoHch (struct   student a);
int LHW3AqoI (struct   student a);
int o8tljcSQu0n (struct   student a);
void  gWlBwbJ (struct   student *eWHKz1Diy4A, int bUEaXfM);

void  main () {
    struct   student Ae10fs [(182 - 81)] = {(617 - 617), (894 - 894), (817 - 817), (550 - 550), (91 - 91), (804 - 804), (233 - 233)};
    int ZkKNgW;
    int bUEaXfM;
    int N0Bgdwl;
    ZkKNgW = (627 - 627);
    scanf ("%d", &bUEaXfM);
    for (N0Bgdwl = (824 - 824); bUEaXfM > N0Bgdwl; N0Bgdwl++) {
        scanf ("%s %d %d %c %c %d", Ae10fs[N0Bgdwl].PzsPEI0yc, &Ae10fs[N0Bgdwl].jBIEDHLpn, &Ae10fs[N0Bgdwl].ILFbY0uURzE5, &Ae10fs[N0Bgdwl].Lowljd8An4VQ, &Ae10fs[N0Bgdwl].AusQhoM2, &Ae10fs[N0Bgdwl].essay);
        Ae10fs[N0Bgdwl].qDFkAzX = vk5KpQZr326F (Ae10fs[N0Bgdwl]) + AcaeYI (Ae10fs [N0Bgdwl]) +mkVazQemoHch (Ae10fs[N0Bgdwl]) + LHW3AqoI (Ae10fs [N0Bgdwl]) +o8tljcSQu0n (Ae10fs[N0Bgdwl]);
        ZkKNgW = ZkKNgW +Ae10fs[N0Bgdwl].qDFkAzX;
    }
    gWlBwbJ (Ae10fs, bUEaXfM);
    printf ("%s\n%d\n%d", Ae10fs[(110 - 110)].PzsPEI0yc, Ae10fs[(420 - 420)].qDFkAzX, ZkKNgW);
}

int vk5KpQZr326F (struct   student a) {
    if (a.jBIEDHLpn > (813 - 733) && a.essay > (62 - 62))
        return (8042 - 42);
    else
        return 0;
}

int AcaeYI (struct   student a) {
    if (85 < a.jBIEDHLpn && a.ILFbY0uURzE5 > 80)
        return (4589 - 589);
    else
        return 0;
}

int mkVazQemoHch (struct   student a) {
    if ((544 - 454) < a.jBIEDHLpn)
        return (2193 - 193);
    else
        return 0;
}

int LHW3AqoI (struct   student a) {
    if (85 < a.jBIEDHLpn && !('Y' != a.AusQhoM2))
        return (1071 - 71);
    else
        return 0;
}

int o8tljcSQu0n (struct   student a) {
    if (a.ILFbY0uURzE5 > 80 && a.Lowljd8An4VQ == 'Y')
        return (1138 - 288);
    else
        return 0;
}

void  gWlBwbJ (struct   student *eWHKz1Diy4A, int bUEaXfM) {
    int N0Bgdwl;
    int VgokyQ0Vb;
    struct   student t;
    for (N0Bgdwl = 0; N0Bgdwl < bUEaXfM - (354 - 353); N0Bgdwl++) {
        for (VgokyQ0Vb = 0; VgokyQ0Vb < bUEaXfM - N0Bgdwl -(340 - 339); VgokyQ0Vb++) {
            if (eWHKz1Diy4A[VgokyQ0Vb].qDFkAzX < eWHKz1Diy4A[VgokyQ0Vb +(803 - 802)].qDFkAzX) {
                t = eWHKz1Diy4A[VgokyQ0Vb];
                eWHKz1Diy4A[VgokyQ0Vb] = eWHKz1Diy4A[VgokyQ0Vb +1];
                eWHKz1Diy4A[VgokyQ0Vb +1] = t;
            }
        }
    }
}

