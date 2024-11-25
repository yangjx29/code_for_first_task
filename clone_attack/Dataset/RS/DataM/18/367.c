int main () {
    int nn;
    int BGtwlQk1n6NA;
    int zmi4DLnl;
    int OSpzOPm1;
    int pwfZ1tJ;
    int min [(708 - 608)];
    int waX3bx [(821 - 721)] [(398 - 298)];
    int TIkXT2u;
    cin >> nn;
    for (pwfZ1tJ = (350 - 350); pwfZ1tJ < nn; pwfZ1tJ++) {
        TIkXT2u = (224 - 224);
        BGtwlQk1n6NA = nn;
        for (zmi4DLnl = (845 - 845); zmi4DLnl < nn; zmi4DLnl++)
            for (OSpzOPm1 = (196 - 196); nn > OSpzOPm1; OSpzOPm1 = OSpzOPm1 +1)
                cin >> waX3bx[zmi4DLnl][OSpzOPm1];
        for (; (581 - 580) < BGtwlQk1n6NA;) {
            for (zmi4DLnl = (608 - 608); BGtwlQk1n6NA > zmi4DLnl; zmi4DLnl++) {
                min[zmi4DLnl] = waX3bx[zmi4DLnl][(760 - 760)];
                for (OSpzOPm1 = (123 - 122); BGtwlQk1n6NA > OSpzOPm1; OSpzOPm1++)
                    min[zmi4DLnl] = waX3bx[zmi4DLnl][OSpzOPm1] > min[zmi4DLnl] ? min[zmi4DLnl] : waX3bx[zmi4DLnl][OSpzOPm1];
            }
            for (zmi4DLnl = (379 - 379); BGtwlQk1n6NA > zmi4DLnl; zmi4DLnl++)
                for (OSpzOPm1 = (619 - 619); BGtwlQk1n6NA > OSpzOPm1; OSpzOPm1++)
                    waX3bx[zmi4DLnl][OSpzOPm1] = waX3bx[zmi4DLnl][OSpzOPm1] - min[zmi4DLnl];
            for (OSpzOPm1 = (807 - 807); BGtwlQk1n6NA > OSpzOPm1; OSpzOPm1++) {
                min[OSpzOPm1] = waX3bx[(105 - 105)][OSpzOPm1];
                for (zmi4DLnl = (108 - 107); BGtwlQk1n6NA > zmi4DLnl; zmi4DLnl++)
                    min[OSpzOPm1] = waX3bx[zmi4DLnl][OSpzOPm1] > min[OSpzOPm1] ? min[OSpzOPm1] : waX3bx[zmi4DLnl][OSpzOPm1];
            }
            for (OSpzOPm1 = (578 - 578); OSpzOPm1 < BGtwlQk1n6NA; OSpzOPm1++)
                for (zmi4DLnl = (975 - 975); zmi4DLnl < BGtwlQk1n6NA; zmi4DLnl++)
                    waX3bx[zmi4DLnl][OSpzOPm1] = waX3bx[zmi4DLnl][OSpzOPm1] - min[OSpzOPm1];
            TIkXT2u = TIkXT2u +waX3bx[(261 - 260)][(171 - 170)];
            for (zmi4DLnl = (967 - 966); zmi4DLnl < BGtwlQk1n6NA -(409 - 408); zmi4DLnl++)
                waX3bx[zmi4DLnl][(814 - 814)] = waX3bx[zmi4DLnl + (891 - 890)][0];
            for (OSpzOPm1 = (538 - 537); BGtwlQk1n6NA -(649 - 648) > OSpzOPm1; OSpzOPm1++)
                waX3bx[0][OSpzOPm1] = waX3bx[0][OSpzOPm1 +(907 - 906)];
            for (zmi4DLnl = (578 - 577); BGtwlQk1n6NA -(945 - 944) > zmi4DLnl; zmi4DLnl++)
                for (OSpzOPm1 = (43 - 42); OSpzOPm1 < BGtwlQk1n6NA -(406 - 405); OSpzOPm1++)
                    waX3bx[zmi4DLnl][OSpzOPm1] = waX3bx[zmi4DLnl + 1][OSpzOPm1 +1];
            BGtwlQk1n6NA--;
        }
        cout << TIkXT2u << endl;
    }
    return 0;
}

