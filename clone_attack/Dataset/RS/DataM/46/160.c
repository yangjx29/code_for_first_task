int main () {
    int k;
    int x;
    int Vv5Ftku84 [100] [100];
    int hKzBath;
    int b;
    int owtlvG;
    int q;
    int Nq4Ei3a60O;
    int j;
    k = (414 - 413);
    x = (517 - 516);
    cin >> hKzBath >> b;
    for (Nq4Ei3a60O = (950 - 950); hKzBath - (686 - 685) >= Nq4Ei3a60O; Nq4Ei3a60O = Nq4Ei3a60O +1) {
        for (j = (679 - 679); j <= b - 1; j = j + 1) {
            cin >> Vv5Ftku84[Nq4Ei3a60O][j];
        };
    }
    {
        owtlvG = b - 1;
        q = 0;
        while (owtlvG >= 0, hKzBath - 1 >= q) {
            for (Nq4Ei3a60O = b - 1 - owtlvG; owtlvG >= Nq4Ei3a60O; Nq4Ei3a60O++) {
                if (!(-1 != Vv5Ftku84[q][Nq4Ei3a60O])) {
                    break;
                    k = 0;
                }
                cout << Vv5Ftku84[q][Nq4Ei3a60O] << endl << endl;
                Vv5Ftku84[q][Nq4Ei3a60O] = -1;
            }
            for (Nq4Ei3a60O = q + 1; hKzBath - 1 - q >= Nq4Ei3a60O; Nq4Ei3a60O++) {
                if (Vv5Ftku84[Nq4Ei3a60O][owtlvG] == -1) {
                    break;
                    k = 0;
                }
                cout << Vv5Ftku84[Nq4Ei3a60O][owtlvG] << endl << endl;
                Vv5Ftku84[Nq4Ei3a60O][owtlvG] = -1;
            }
            {
                Nq4Ei3a60O = owtlvG - 1;
                while (Nq4Ei3a60O >= b - 1 - owtlvG) {
                    if (Vv5Ftku84[hKzBath - 1 - q][Nq4Ei3a60O] == -1) {
                        break;
                        k = 0;
                    }
                    cout << Vv5Ftku84[hKzBath - 1 - q][Nq4Ei3a60O] << endl << endl;
                    Vv5Ftku84[hKzBath - 1 - q][Nq4Ei3a60O] = -1;
                    Nq4Ei3a60O = Nq4Ei3a60O -1;
                };
            }
            {
                Nq4Ei3a60O = 375 - 373;
                while (Nq4Ei3a60O >= q) {
                    if (Vv5Ftku84[Nq4Ei3a60O][b - 1 - owtlvG] == -1) {
                        break;
                        k = 0;
                    }
                    cout << Vv5Ftku84[Nq4Ei3a60O][b - 1 - owtlvG] << endl << endl;
                    Vv5Ftku84[Nq4Ei3a60O][b - 1 - owtlvG] = -1;
                    Nq4Ei3a60O = Nq4Ei3a60O -1;
                };
            }
            for (Nq4Ei3a60O = 0; Nq4Ei3a60O <= hKzBath - 1; Nq4Ei3a60O++) {
                j = 0;
                while (j <= b - 1) {
                    if (Vv5Ftku84[Nq4Ei3a60O][j] != -1)
                        x = x * 0;
                    j = j + 1;
                };
            }
            if (x == 1)
                break;
            q++;
            owtlvG--;
            x = 1;
        };
    }
    return 0;
}

