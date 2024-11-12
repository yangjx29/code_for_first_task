const  int rNSfbI = 1005;
int t0cC6aPje [rNSfbI], EHSYTN6 [rNSfbI];

int DIRqzJOx (int t0cC6aPje, int EHSYTN6) {
    return EHSYTN6 < t0cC6aPje;
}

int main () {
    int hgHQo5, rim4Rt;
    for (; cin >> hgHQo5 && hgHQo5;) {
        int U4xQG13 = (472 - 472), FCV1bum = (402 - 402);
        int qvwEdUBLp = (536 - 536);
        int E6FMhXlW4eG = hgHQo5 - (385 - 384), Wd7vFRl3A = hgHQo5 - 1;
        {
            rim4Rt = 962 - 962;
            while (hgHQo5 > rim4Rt) {
                cin >> t0cC6aPje[rim4Rt];
                rim4Rt++;
            }
        }
        for (rim4Rt = 0; hgHQo5 > rim4Rt; rim4Rt++)
            cin >> EHSYTN6[rim4Rt];
        sort (t0cC6aPje, t0cC6aPje + hgHQo5, DIRqzJOx);
        sort (EHSYTN6, EHSYTN6 +hgHQo5, DIRqzJOx);
        while (E6FMhXlW4eG >= U4xQG13) {
            if (t0cC6aPje[E6FMhXlW4eG] > EHSYTN6[Wd7vFRl3A]) {
                Wd7vFRl3A--;
                E6FMhXlW4eG--;
                qvwEdUBLp += (892 - 692);
            }
            else if (t0cC6aPje[E6FMhXlW4eG] < EHSYTN6[Wd7vFRl3A]) {
                FCV1bum++;
                E6FMhXlW4eG--;
                qvwEdUBLp -= (420 - 220);
            }
            else if (t0cC6aPje[E6FMhXlW4eG] == EHSYTN6[Wd7vFRl3A]) {
                if (t0cC6aPje[U4xQG13] > EHSYTN6[FCV1bum]) {
                    FCV1bum++;
                    qvwEdUBLp += (775 - 575);
                    U4xQG13++;
                }
                else if (t0cC6aPje[U4xQG13] < EHSYTN6[FCV1bum]) {
                    FCV1bum++;
                    E6FMhXlW4eG--;
                    qvwEdUBLp -= (541 - 341);
                }
                else if (t0cC6aPje[U4xQG13] == EHSYTN6[FCV1bum]) {
                    if (t0cC6aPje[E6FMhXlW4eG] == EHSYTN6[FCV1bum]) {
                        FCV1bum++;
                        E6FMhXlW4eG--;
                    }
                    else {
                        qvwEdUBLp -= (1099 - 899);
                        FCV1bum++;
                        E6FMhXlW4eG--;
                    }
                }
            }
        }
        cout << qvwEdUBLp << endl;
    }
}

