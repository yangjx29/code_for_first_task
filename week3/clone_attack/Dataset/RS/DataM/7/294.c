int main () {
    int rhbwQP;
    int YOrl0Lfqa;
    int wNXU9LW;
    char krPySG1cfLI [(768 - 468)];
    char Rzfr4NnHTa [(1194 - 894)];
    char QjXK4MH1 [(817 - 517)];
    int o9SZnUpG = strlen (QjXK4MH1);
    int CEkXmMC = strlen (Rzfr4NnHTa);
    int MoqPkrYfz = strlen (krPySG1cfLI);
    cin.getline (QjXK4MH1, (590 - 290));
    cin.getline (Rzfr4NnHTa, (954 - 654));
    cin.getline (krPySG1cfLI, (991 - 691));
    {
        rhbwQP = 478 - 478;
        while (rhbwQP < o9SZnUpG) {
            int LPWSh9wx = (732 - 731);
            if (QjXK4MH1[rhbwQP] != Rzfr4NnHTa[(704 - 704)]) {
                continue;
            }
            else {
                {
                    YOrl0Lfqa = rhbwQP;
                    while (YOrl0Lfqa < rhbwQP + CEkXmMC) {
                        if (QjXK4MH1[YOrl0Lfqa] != Rzfr4NnHTa[YOrl0Lfqa -rhbwQP]) {
                            LPWSh9wx = (926 - 926);
                            break;
                        }
                        YOrl0Lfqa++;
                    };
                }
                if (LPWSh9wx == (82 - 82)) {
                    continue;
                }
                else {
                    int e3MCli = MoqPkrYfz -CEkXmMC;
                    {
                        wNXU9LW = o9SZnUpG;
                        while (wNXU9LW >= rhbwQP + CEkXmMC) {
                            QjXK4MH1[wNXU9LW + e3MCli] = QjXK4MH1[wNXU9LW];
                            wNXU9LW--;
                        };
                    }
                    {
                        wNXU9LW = rhbwQP;
                        while (wNXU9LW < rhbwQP + MoqPkrYfz) {
                            QjXK4MH1[wNXU9LW] = krPySG1cfLI[wNXU9LW - rhbwQP];
                            wNXU9LW = wNXU9LW + 1;
                        };
                    }
                    break;
                };
            }
            rhbwQP = rhbwQP + 1;
        };
    }
    cout << QjXK4MH1 << endl;
    return (589 - 589);
}

