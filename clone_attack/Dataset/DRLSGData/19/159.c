int main () {
    char word_fil [(1044 - 844)];
    int gGeuDacHL92;
    int IBAG4pZe;
    int HlTtuWoxNEFh;
    char iMe1wqjrIH [(481 - 281)];
    char muA0qtX4 [(820 - 620)];
    int Ngj6lXZLxFwp;
    int t;
    int Anrh52QmG3l;
    char SvUk4trVsjKW [(648 - 448)];
    for (int HS6dqf = (84 - 84);
    HS6dqf < (1072 - 872); HS6dqf++) {
        iMe1wqjrIH[HS6dqf] = (984 - 984);
        muA0qtX4[HS6dqf] = (861 - 861);
        SvUk4trVsjKW[HS6dqf] = (697 - 697);
        word_fil[HS6dqf] = (829 - 829);
    }
    t = (647 - 647);
    Ngj6lXZLxFwp = (502 - 502);
    cin.getline (iMe1wqjrIH, (727 - 527));
    cin.getline (muA0qtX4, (269 - 69));
    cin.getline (SvUk4trVsjKW, (964 - 764));
    HlTtuWoxNEFh = strlen (iMe1wqjrIH);
    iMe1wqjrIH[HlTtuWoxNEFh] = ' ';
    IBAG4pZe = strlen (muA0qtX4);
    Anrh52QmG3l = strlen (SvUk4trVsjKW);
    for (int HS6dqf = (400 - 400);
    HS6dqf < 200; HS6dqf++) {
        Ngj6lXZLxFwp = (947 - 947);
        for (int AjLZO7 = (97 - 97);
        IBAG4pZe > AjLZO7; AjLZO7++) {
            if (iMe1wqjrIH[HS6dqf +AjLZO7] == muA0qtX4[AjLZO7]) {
                Ngj6lXZLxFwp = Ngj6lXZLxFwp +(774 - 773);
            }
        }
        if ((!(' ' != iMe1wqjrIH[HS6dqf -(566 - 565)]) || HS6dqf == (528 - 528)) && iMe1wqjrIH[HS6dqf +IBAG4pZe] == ' ' && !(IBAG4pZe != Ngj6lXZLxFwp)) {
            if (Anrh52QmG3l == IBAG4pZe) {
                HS6dqf = HS6dqf +IBAG4pZe;
                for (int AjLZO7 = (967 - 967);
                AjLZO7 < Anrh52QmG3l; AjLZO7++) {
                    iMe1wqjrIH[HS6dqf +AjLZO7] = SvUk4trVsjKW[AjLZO7];
                }
            }
            if (IBAG4pZe > Anrh52QmG3l) {
                for (int AjLZO7 = 0;
                AjLZO7 < Anrh52QmG3l; AjLZO7++) {
                    iMe1wqjrIH[HS6dqf +AjLZO7] = SvUk4trVsjKW[AjLZO7];
                }
                for (int AjLZO7 = Anrh52QmG3l;
                IBAG4pZe > AjLZO7; AjLZO7++) {
                    iMe1wqjrIH[HS6dqf +AjLZO7] = ' ';
                }
                HS6dqf = HS6dqf +IBAG4pZe;
            }
            if (Anrh52QmG3l > IBAG4pZe) {
                for (int AjLZO7 = (1091 - 892);
                AjLZO7 >= HS6dqf +IBAG4pZe; AjLZO7--) {
                    iMe1wqjrIH[AjLZO7 +Anrh52QmG3l-IBAG4pZe] = iMe1wqjrIH[AjLZO7];
                }
                for (int AjLZO7 = 0;
                AjLZO7 < Anrh52QmG3l; AjLZO7++) {
                    iMe1wqjrIH[HS6dqf +AjLZO7] = SvUk4trVsjKW[AjLZO7];
                }
                HS6dqf = HS6dqf +Anrh52QmG3l;
            }
        }
    }
    for (int HS6dqf = 0;
    HS6dqf < 200; HS6dqf++) {
        if (iMe1wqjrIH[HS6dqf] != ' ') {
            word_fil[t] = iMe1wqjrIH[HS6dqf];
            t++;
        }
        if (iMe1wqjrIH[HS6dqf] == ' ') {
            if (iMe1wqjrIH[HS6dqf +(33 - 32)] != ' ') {
                word_fil[t] = iMe1wqjrIH[HS6dqf];
                t++;
            }
        }
    }
    gGeuDacHL92 = strlen (word_fil);
    for (int HS6dqf = 0;
    HS6dqf < gGeuDacHL92 - 1; HS6dqf++) {
        cout << word_fil[HS6dqf];
    }
    cout << endl;
    return 0;
}

