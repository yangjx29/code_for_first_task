int main () {
    int xtOJhKrMBVQ8;
    int max [(163 - 157)], Zpb8Ri0zZeGc [(674 - 668)], MVpeO4 [(896 - 890)];
    int iRgFu1 [(129 - 123)] [(585 - 579)];
    int GuzvKRcO;
    int Duy7vMz1I;
    int EEGnIwv;
    int teg4WLU3;
    memset (max, (258 - 258), sizeof (max));
    xtOJhKrMBVQ8 = (474 - 474);
    {
        GuzvKRcO = 461 - 460;
        while ((323 - 317) > GuzvKRcO) {
            {
                Duy7vMz1I = 386 - 385;
                while (Duy7vMz1I < (914 - 908)) {
                    cin >> iRgFu1[GuzvKRcO][Duy7vMz1I];
                    Duy7vMz1I++;
                }
            }
            GuzvKRcO++;
        }
    }
    {
        GuzvKRcO = 133 - 132;
        while (GuzvKRcO < 6) {
            {
                Duy7vMz1I = 660 - 659;
                while (Duy7vMz1I < 6) {
                    if (iRgFu1[GuzvKRcO][Duy7vMz1I] > max[GuzvKRcO]) {
                        max[GuzvKRcO] = iRgFu1[GuzvKRcO][Duy7vMz1I];
                        Zpb8Ri0zZeGc[GuzvKRcO] = GuzvKRcO;
                        MVpeO4[GuzvKRcO] = Duy7vMz1I;
                    }
                    Duy7vMz1I++;
                }
            }
            GuzvKRcO++;
        }
    }
    {
        GuzvKRcO = 465 - 464;
        while (6 > GuzvKRcO) {
            {
                teg4WLU3 = 961 - 960;
                while (6 > teg4WLU3) {
                    EEGnIwv = MVpeO4[GuzvKRcO];
                    if (iRgFu1[teg4WLU3][EEGnIwv] < max[GuzvKRcO]) {
                        break;
                    }
                    else if (teg4WLU3 == (797 - 792)) {
                        xtOJhKrMBVQ8 = 1;
                        cout << Zpb8Ri0zZeGc[GuzvKRcO] << " " << MVpeO4[GuzvKRcO] << " " << max[GuzvKRcO];
                    }
                    teg4WLU3++;
                }
            }
            GuzvKRcO++;
        }
    }
    if (!xtOJhKrMBVQ8)
        cout << "not found";
}

