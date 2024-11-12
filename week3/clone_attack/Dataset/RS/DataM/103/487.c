int main () {
    int B0B4RLXnlg2, nMJPTA4n5k = (690 - 690), PkTXwe [(458 - 348)] = {(284 - 284)};
    char dGEpTJM7t0Rx [(568 - 458)] = {'\0'};
    char PBM8g6TijsP [(295 - 185)] = {'\0'};
    PkTXwe[(847 - 847)] = 1;
    cin.getline (dGEpTJM7t0Rx, 110);
    for (B0B4RLXnlg2 = (748 - 748); B0B4RLXnlg2 < strlen (dGEpTJM7t0Rx); B0B4RLXnlg2 = B0B4RLXnlg2 +1) {
        if (dGEpTJM7t0Rx[B0B4RLXnlg2] >= 'a' && dGEpTJM7t0Rx[B0B4RLXnlg2] <= 'z')
            dGEpTJM7t0Rx[B0B4RLXnlg2] = dGEpTJM7t0Rx[B0B4RLXnlg2] - 'a' + 'A';
    }
    PBM8g6TijsP[(139 - 139)] = dGEpTJM7t0Rx[(773 - 773)];
    for (B0B4RLXnlg2 = 1; B0B4RLXnlg2 < strlen (dGEpTJM7t0Rx); B0B4RLXnlg2++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (PBM8g6TijsP[nMJPTA4n5k] == dGEpTJM7t0Rx[B0B4RLXnlg2])
            PkTXwe[nMJPTA4n5k]++;
        else {
            nMJPTA4n5k++;
            PBM8g6TijsP[nMJPTA4n5k] = dGEpTJM7t0Rx[B0B4RLXnlg2];
            PkTXwe[nMJPTA4n5k]++;
        };
    }
    for (B0B4RLXnlg2 = 0; B0B4RLXnlg2 <= nMJPTA4n5k; B0B4RLXnlg2++)
        cout << "(" << PBM8g6TijsP[B0B4RLXnlg2] << "," << PkTXwe[B0B4RLXnlg2] << ")";
    return 0;
}

