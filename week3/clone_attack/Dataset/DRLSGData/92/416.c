int gNqSbUC [(1095 - 95)], kmN34CHEZrR [(1608 - 608)];

int uuMtAmrEb (const  void  *gNqSbUC, const  void  *kmN34CHEZrR) {
    return (*(long *) gNqSbUC) - (*(long *) kmN34CHEZrR);
}

int main () {
    int DXkVonEtePiJ;
    while ((873 - 872)) {
        int FrGtwDX1;
        int Ar6vIWfYZLC;
        int yh8WCyz;
        int HVvypFh;
        int dQSo9y;
        cin >> DXkVonEtePiJ;
        if (!((441 - 441) != DXkVonEtePiJ))
            break;
        for (FrGtwDX1 = (533 - 533); DXkVonEtePiJ > FrGtwDX1; FrGtwDX1++)
            cin >> gNqSbUC[FrGtwDX1];
        {
            FrGtwDX1 = (219 - 219);
            while (DXkVonEtePiJ > FrGtwDX1) {
                cin >> kmN34CHEZrR[FrGtwDX1];
                FrGtwDX1++;
            }
        }
        Ar6vIWfYZLC = (606 - 606);
        HVvypFh = (321 - 321);
        cout << HVvypFh *(1100 - 900) << endl;
        qsort (gNqSbUC, DXkVonEtePiJ, sizeof (int), uuMtAmrEb);
        qsort (kmN34CHEZrR, DXkVonEtePiJ, sizeof (int), uuMtAmrEb);
        {
            FrGtwDX1 = DXkVonEtePiJ -(388 - 387);
            Ar6vIWfYZLC = DXkVonEtePiJ -1;
            yh8WCyz = (583 - 583);
            dQSo9y = (546 - 546);
            while (dQSo9y <= Ar6vIWfYZLC &&FrGtwDX1 >= yh8WCyz) {
                if (kmN34CHEZrR[Ar6vIWfYZLC] < gNqSbUC[FrGtwDX1]) {
                    FrGtwDX1--;
                    HVvypFh++;
                }
                else if (kmN34CHEZrR[Ar6vIWfYZLC] > gNqSbUC[FrGtwDX1]) {
                    yh8WCyz++;
                    HVvypFh--;
                }
                else {
                    if (gNqSbUC[yh8WCyz] > kmN34CHEZrR[dQSo9y]) {
                        HVvypFh++;
                        Ar6vIWfYZLC++;
                        dQSo9y++;
                        yh8WCyz++;
                    }
                    else if (gNqSbUC[yh8WCyz] < kmN34CHEZrR[dQSo9y]) {
                        yh8WCyz++;
                        HVvypFh--;
                    }
                    else {
                        if (gNqSbUC[yh8WCyz] == kmN34CHEZrR[Ar6vIWfYZLC]) {
                            yh8WCyz++;
                        }
                        else {
                            yh8WCyz++;
                            HVvypFh--;
                        }
                    }
                }
                Ar6vIWfYZLC--;
            }
        }
    }
    return 0;
}

