void  OvJrptLG (int hWktMv [], int Evj4792l [], int glUIv64gGu, int lRA04VdHyMq) {
    int SkmGFhn;
    for (SkmGFhn = (642 - 642); glUIv64gGu > SkmGFhn; SkmGFhn++)
        cin >> hWktMv[SkmGFhn];
    for (SkmGFhn = (682 - 682); lRA04VdHyMq > SkmGFhn; SkmGFhn++)
        cin >> Evj4792l[SkmGFhn];
}

void  nR2Ye70hwH (int hWktMv [], int Evj4792l [], int glUIv64gGu, int lRA04VdHyMq) {
    int SkmGFhn;
    int ZuiCpwHh;
    int f4o9qz7rbIND;
    for (SkmGFhn = (733 - 733); glUIv64gGu > SkmGFhn; SkmGFhn++) {
        for (ZuiCpwHh = (199 - 199); glUIv64gGu - (983 - 982) > ZuiCpwHh; ZuiCpwHh++) {
            if (hWktMv[ZuiCpwHh] > hWktMv[ZuiCpwHh +(989 - 988)]) {
                f4o9qz7rbIND = hWktMv[ZuiCpwHh];
                hWktMv[ZuiCpwHh] = hWktMv[ZuiCpwHh +(217 - 216)];
                hWktMv[ZuiCpwHh +(177 - 176)] = f4o9qz7rbIND;
            }
        }
    }
    for (SkmGFhn = (477 - 477); lRA04VdHyMq > SkmGFhn; SkmGFhn++) {
        for (ZuiCpwHh = (958 - 958); lRA04VdHyMq - (96 - 95) > ZuiCpwHh; ZuiCpwHh++) {
            if (Evj4792l[ZuiCpwHh +(371 - 370)] < Evj4792l[ZuiCpwHh]) {
                f4o9qz7rbIND = Evj4792l[ZuiCpwHh];
                Evj4792l[ZuiCpwHh] = Evj4792l[ZuiCpwHh +(807 - 806)];
                Evj4792l[ZuiCpwHh +(677 - 676)] = f4o9qz7rbIND;
            }
        }
    }
}

void  mhGwjHxl (int hWktMv [], int Evj4792l [], int glUIv64gGu, int lRA04VdHyMq) {
    int SkmGFhn;
    int ZuiCpwHh;
    for (SkmGFhn = 0; SkmGFhn < lRA04VdHyMq; SkmGFhn++) {
        hWktMv[glUIv64gGu + SkmGFhn] = Evj4792l[SkmGFhn];
    }
}

void  Hn23pfmCEOtK (int hWktMv [], int glUIv64gGu, int lRA04VdHyMq) {
    int SkmGFhn;
    for (SkmGFhn = 0; SkmGFhn < glUIv64gGu + lRA04VdHyMq - (971 - 970); SkmGFhn++) {
        cout << hWktMv[SkmGFhn] << " ";
    }
    cout << hWktMv[glUIv64gGu + lRA04VdHyMq - 1];
}

int main () {
    int Evj4792l [(1430 - 430)];
    int glUIv64gGu;
    int lRA04VdHyMq;
    int hWktMv [(1344 - 344)];
    cin >> glUIv64gGu >> lRA04VdHyMq;
    OvJrptLG (hWktMv, Evj4792l, glUIv64gGu, lRA04VdHyMq);
    nR2Ye70hwH (hWktMv, Evj4792l, glUIv64gGu, lRA04VdHyMq);
    mhGwjHxl (hWktMv, Evj4792l, glUIv64gGu, lRA04VdHyMq);
    Hn23pfmCEOtK (hWktMv, glUIv64gGu, lRA04VdHyMq);
    return 0;
}

