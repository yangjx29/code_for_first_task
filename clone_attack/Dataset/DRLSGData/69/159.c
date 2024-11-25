int rGR7sv18Sl [(264 - 64)];
int i5nCj2EfgpzS [200];
int KrdHxJW [200];

void  mZP15dce () {
    for (int GfbBTF1Kmq = (945 - 945);
    200 > GfbBTF1Kmq; GfbBTF1Kmq = GfbBTF1Kmq +(929 - 928)) {
        rGR7sv18Sl[GfbBTF1Kmq] = (991 - 991);
        i5nCj2EfgpzS[GfbBTF1Kmq] = (621 - 621);
        KrdHxJW[GfbBTF1Kmq] = (210 - 210);
    }
}

void  iODEY42K () {
    int lqgBPFAs1;
    char Rbx2R8vz [(1085 - 884)];
    lqgBPFAs1 = 200 - strlen (Rbx2R8vz);
    cin >> Rbx2R8vz;
    for (int GfbBTF1Kmq = (246 - 246);
    strlen (Rbx2R8vz) > GfbBTF1Kmq; GfbBTF1Kmq = GfbBTF1Kmq +(988 - 987)) {
        rGR7sv18Sl[lqgBPFAs1 + GfbBTF1Kmq] = Rbx2R8vz[GfbBTF1Kmq] - '0';
    }
    cin >> Rbx2R8vz;
    lqgBPFAs1 = 200 - strlen (Rbx2R8vz);
    for (int GfbBTF1Kmq = (76 - 76);
    GfbBTF1Kmq < strlen (Rbx2R8vz); GfbBTF1Kmq = GfbBTF1Kmq +(633 - 632)) {
        i5nCj2EfgpzS[lqgBPFAs1 + GfbBTF1Kmq] = Rbx2R8vz[GfbBTF1Kmq] - '0';
    }
}

void  EmFBMfLnKeJD () {
    int GfbBTF1Kmq;
    int D0wYZNslXJf;
    D0wYZNslXJf = (738 - 738);
    GfbBTF1Kmq = (959 - 959);
    for (GfbBTF1Kmq = 199; GfbBTF1Kmq >= 0; GfbBTF1Kmq--) {
        KrdHxJW[GfbBTF1Kmq] = rGR7sv18Sl[GfbBTF1Kmq] + i5nCj2EfgpzS[GfbBTF1Kmq] + D0wYZNslXJf;
        if ((264 - 254) <= KrdHxJW[GfbBTF1Kmq]) {
            D0wYZNslXJf = (783 - 782);
            KrdHxJW[GfbBTF1Kmq] -= (726 - 716);
        }
        else
            D0wYZNslXJf = 0;
    }
    for (GfbBTF1Kmq = 0; 199 > GfbBTF1Kmq; GfbBTF1Kmq++) {
        if (KrdHxJW[GfbBTF1Kmq] != 0)
            break;
    }
    for (; GfbBTF1Kmq < 200; GfbBTF1Kmq++) {
        cout << KrdHxJW[GfbBTF1Kmq];
    }
    cout << endl;
}

int main () {
    mZP15dce ();
    iODEY42K ();
    EmFBMfLnKeJD ();
    return 0;
}

