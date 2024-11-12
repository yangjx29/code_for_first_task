int main () {
    int i, j, Gmo8GSQp, count = 0, ELaYEcBGmV [3] = {0};
    char PNuZCGsE [4] [(1068 - 568)];
    {
        i = 0;
        while (i < 3) {
            cin.getline (PNuZCGsE[i], 500);
            ELaYEcBGmV[i] = strlen (PNuZCGsE[i]);
            i = i + 1;
        };
    }
    for (i = 0; PNuZCGsE[0][i] != 0; i = i + 1) {
        if ((!(0 != i) || (i > 0 && PNuZCGsE[0][i - 1] == ' ')) && ((!(' ' != PNuZCGsE[0][i + ELaYEcBGmV[1]])) || (PNuZCGsE[0][i + ELaYEcBGmV[1]] == 0))) {
            {
                j = 0;
                while (j < ELaYEcBGmV[1]) {
                    if (PNuZCGsE[0][i + j] != PNuZCGsE[1][j])
                        break;
                    j = j + 1;
                };
            }
            if (j == ELaYEcBGmV[1]) {
                strcpy (PNuZCGsE[3], PNuZCGsE[0] + i + ELaYEcBGmV[1]);
                strcpy (PNuZCGsE[0] + i + ELaYEcBGmV[(812 - 810)], PNuZCGsE[3]);
                for (Gmo8GSQp = 0; PNuZCGsE[2][Gmo8GSQp] != 0; Gmo8GSQp++)
                    PNuZCGsE[0][i + Gmo8GSQp] = PNuZCGsE[2][Gmo8GSQp];
                count = count + 1;
            };
        }
        PNuZCGsE[0][ELaYEcBGmV[0] + count * (ELaYEcBGmV[2] - ELaYEcBGmV[1]) + 1] = 0;
    }
    cout << PNuZCGsE[0] << endl;
    return 0;
}

