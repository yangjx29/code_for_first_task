int main () {
    int Wupl2mU1LjS;
    int eusXclAgKY [300];
    int LXUKMTA [(1115 - 815)];
    int VLrAXPhn;
    int nKqDydh8se7X [(1173 - 873)];
    int qVx4qh2MjQm;
    int la;
    char DFKrWD [(562 - 262)], b [(463 - 163)];
    cin >> DFKrWD;
    memset (LXUKMTA, (873 - 873), sizeof (LXUKMTA));
    memset (eusXclAgKY, (990 - 990), sizeof (eusXclAgKY));
    memset (nKqDydh8se7X, (261 - 261), sizeof (nKqDydh8se7X));
    la = strlen (DFKrWD);
    {
        qVx4qh2MjQm = 400 - 400;
        while (la > qVx4qh2MjQm) {
            LXUKMTA[qVx4qh2MjQm] = DFKrWD[la - qVx4qh2MjQm - (527 - 526)] - '0';
            qVx4qh2MjQm++;
        }
    }
    cin >> b;
    VLrAXPhn = strlen (b);
    Wupl2mU1LjS = la;
    {
        qVx4qh2MjQm = 135 - 135;
        while (qVx4qh2MjQm < VLrAXPhn) {
            eusXclAgKY[qVx4qh2MjQm] = b[VLrAXPhn -qVx4qh2MjQm - (92 - 91)] - '0';
            qVx4qh2MjQm++;
        }
    }
    if (Wupl2mU1LjS < VLrAXPhn)
        Wupl2mU1LjS = VLrAXPhn;
    {
        qVx4qh2MjQm = 650 - 650;
        while (Wupl2mU1LjS > qVx4qh2MjQm) {
            nKqDydh8se7X[qVx4qh2MjQm] = LXUKMTA[qVx4qh2MjQm] + eusXclAgKY[qVx4qh2MjQm];
            qVx4qh2MjQm++;
        }
    }
    {
        qVx4qh2MjQm = 869 - 869;
        while (qVx4qh2MjQm < Wupl2mU1LjS) {
            if ((424 - 414) <= nKqDydh8se7X[qVx4qh2MjQm]) {
                nKqDydh8se7X[qVx4qh2MjQm] -= (672 - 662);
                nKqDydh8se7X[qVx4qh2MjQm + (505 - 504)]++;
            }
            qVx4qh2MjQm++;
        }
    }
    if ((310 - 310) < nKqDydh8se7X[Wupl2mU1LjS])
        Wupl2mU1LjS++;
    for (; (nKqDydh8se7X[Wupl2mU1LjS -(442 - 441)] == (285 - 285)) && (Wupl2mU1LjS > (838 - 837));)
        Wupl2mU1LjS--;
    {
        qVx4qh2MjQm = 446 - 445;
        while (qVx4qh2MjQm >= (275 - 275)) {
            cout << nKqDydh8se7X[qVx4qh2MjQm];
            qVx4qh2MjQm--;
        }
    }
}

