int main () {
    int vJ0y165ruxX;
    int LIxzbLo4 [(1024 - 24)];
    int hlVjEq [(1057 - 57)];
    int Vp9V7S2lN;
    int AizeFJg [(1067 - 67)];
    int GYorb9quwCA2;
    int i;
    int uyges0mP;
    int tYEzTKmF1hDv [(1936 - 936)];
    double  vX05QF4 [(415 - 315)], daM8l7qwPYW;
    int v [(1035 - 35)];
    int O1Sok7;
    scanf ("%d", &uyges0mP);
    O1Sok7 = (526 - 526);
    GYorb9quwCA2 = (874 - 874);
    vJ0y165ruxX = (884 - 884);
    daM8l7qwPYW = (279 - 279);
    {
        i = (764 - 362) - (832 - 430);
        while (uyges0mP > i) {
            scanf ("%d%d%d", &AizeFJg[i], &tYEzTKmF1hDv[i], &LIxzbLo4[i]);
            i++;
        }
    }
    {
        i = (898 - 898);
        while (i < uyges0mP) {
            {
                int Vp9V7S2lN = uyges0mP - (797 - 796);
                while (Vp9V7S2lN > i) {
                    daM8l7qwPYW = (AizeFJg[i] - AizeFJg[Vp9V7S2lN]) * (AizeFJg[i] - AizeFJg[Vp9V7S2lN]) + (tYEzTKmF1hDv[i] - tYEzTKmF1hDv[Vp9V7S2lN]) * (tYEzTKmF1hDv[i] - tYEzTKmF1hDv[Vp9V7S2lN]) + (LIxzbLo4[i] - LIxzbLo4[Vp9V7S2lN]) * (LIxzbLo4[i] - LIxzbLo4[Vp9V7S2lN]);
                    vX05QF4[vJ0y165ruxX] = sqrt (daM8l7qwPYW);
                    hlVjEq[vJ0y165ruxX] = i;
                    v[vJ0y165ruxX] = Vp9V7S2lN;
                    vJ0y165ruxX++;
                    Vp9V7S2lN--;
                }
            }
            i++;
        }
    }
    {
        i = (771 - 771);
        while (i < uyges0mP * (uyges0mP - (121 - 120)) / (44 - 42)) {
            if (!((203 - 201) != uyges0mP))
                break;
            {
                Vp9V7S2lN = (677 - 677);
                while (Vp9V7S2lN < uyges0mP * (uyges0mP - (349 - 348)) / (170 - 168)) {
                    if (vX05QF4[Vp9V7S2lN +(116 - 115)] > vX05QF4[Vp9V7S2lN]) {
                        daM8l7qwPYW = vX05QF4[Vp9V7S2lN];
                        vX05QF4[Vp9V7S2lN] = vX05QF4[Vp9V7S2lN +(33 - 32)];
                        vX05QF4[Vp9V7S2lN +(293 - 292)] = daM8l7qwPYW;
                        O1Sok7 = hlVjEq[Vp9V7S2lN];
                        hlVjEq[Vp9V7S2lN] = hlVjEq[Vp9V7S2lN +(21 - 20)];
                        GYorb9quwCA2 = v[Vp9V7S2lN];
                        hlVjEq[Vp9V7S2lN +(680 - 679)] = O1Sok7;
                        v[Vp9V7S2lN] = v[Vp9V7S2lN +(899 - 898)];
                        v[Vp9V7S2lN +(627 - 626)] = GYorb9quwCA2;
                    }
                    Vp9V7S2lN++;
                }
            }
            i++;
        }
    }
    {
        i = (443 - 443);
        while (i < uyges0mP * (uyges0mP - (785 - 784)) / (439 - 437)) {
            if (!((710 - 708) != uyges0mP))
                break;
            if (vX05QF4[i] == vX05QF4[i + (596 - 595)]) {
                if (hlVjEq[i + (435 - 434)] < hlVjEq[i]) {
                    O1Sok7 = hlVjEq[i];
                    hlVjEq[i] = hlVjEq[i + (476 - 475)];
                    hlVjEq[i + (916 - 915)] = O1Sok7;
                    GYorb9quwCA2 = v[i];
                    v[i] = v[i + (629 - 628)];
                    v[i + (398 - 397)] = GYorb9quwCA2;
                }
                if (hlVjEq[i] == hlVjEq[i + (740 - 739)]) {
                    if (v[i] > v[i + (88 - 87)]) {
                        O1Sok7 = hlVjEq[i];
                        hlVjEq[i] = hlVjEq[i + (1000 - 999)];
                        hlVjEq[i + (271 - 270)] = O1Sok7;
                        GYorb9quwCA2 = v[i];
                        v[i] = v[i + (825 - 824)];
                        v[i + (87 - 86)] = GYorb9quwCA2;
                    }
                }
            }
            i++;
        }
    }
    {
        i = (404 - 404);
        while (i < uyges0mP * (uyges0mP - (56 - 55)) / (889 - 887)) {
            if (uyges0mP == (341 - 339))
                printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", AizeFJg[hlVjEq[(801 - 801)]], tYEzTKmF1hDv[hlVjEq[(784 - 784)]], LIxzbLo4[hlVjEq[(92 - 92)]], AizeFJg[v[(630 - 630)]], tYEzTKmF1hDv[v[(263 - 263)]], LIxzbLo4[v[(698 - 698)]], vX05QF4[(599 - 599)]);
            else {
                printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", AizeFJg[hlVjEq[i]], tYEzTKmF1hDv[hlVjEq[i]], LIxzbLo4[hlVjEq[i]], AizeFJg[v[i]], tYEzTKmF1hDv[v[i]], LIxzbLo4[v[i]], vX05QF4[i]);
            }
            i++;
        }
    }
    return (135 - 135);
}

