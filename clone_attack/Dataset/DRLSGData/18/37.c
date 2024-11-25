int zQHjbG1wRdcP;
int min1;

void  d4uDLbto (int i, int WrQc2qlo, int QDhRqa [300] [300]) {
    if (!(-1 != i))
        return;
    min1 = QDhRqa[i][0];
    for (int CLc9g2O5P = 0;
    WrQc2qlo > CLc9g2O5P; CLc9g2O5P = CLc9g2O5P +1) {
        if (QDhRqa[i][CLc9g2O5P] < min1)
            min1 = QDhRqa[i][CLc9g2O5P];
    }
    for (int NxBmMcZ5nON = 0;
    WrQc2qlo > NxBmMcZ5nON; NxBmMcZ5nON = NxBmMcZ5nON +1) {
        QDhRqa[i][NxBmMcZ5nON] = QDhRqa[i][NxBmMcZ5nON] - min1;
    }
    d4uDLbto (i - 1, WrQc2qlo, QDhRqa);
}

void  lWVdDcRCxklp (int i, int WrQc2qlo, int QDhRqa [300] [300]) {
    if (!(-1 != i))
        return;
    zQHjbG1wRdcP = QDhRqa[0][i];
    for (int CLc9g2O5P = 0;
    CLc9g2O5P < WrQc2qlo; CLc9g2O5P = CLc9g2O5P +1) {
        if (QDhRqa[CLc9g2O5P][i] < zQHjbG1wRdcP)
            zQHjbG1wRdcP = QDhRqa[CLc9g2O5P][i];
    }
    for (int NxBmMcZ5nON = 0;
    WrQc2qlo > NxBmMcZ5nON; NxBmMcZ5nON = NxBmMcZ5nON +1) {
        QDhRqa[NxBmMcZ5nON][i] = QDhRqa[NxBmMcZ5nON][i] - zQHjbG1wRdcP;
    }
    lWVdDcRCxklp (i - 1, WrQc2qlo, QDhRqa);
}

int iupEUztPa2 (int WrQc2qlo, int tyHM1Z7OPD, int QDhRqa [300] [300]) {
    if (!(1 != WrQc2qlo))
        return tyHM1Z7OPD;
    d4uDLbto (WrQc2qlo -1, WrQc2qlo, QDhRqa);
    lWVdDcRCxklp (WrQc2qlo -1, WrQc2qlo, QDhRqa);
    tyHM1Z7OPD = tyHM1Z7OPD + QDhRqa[1][1];
    for (int CLc9g2O5P = 1;
    WrQc2qlo -1 > CLc9g2O5P; CLc9g2O5P = CLc9g2O5P +1)
        for (int i = 0;
        i < WrQc2qlo; i = i + 1) {
            QDhRqa[CLc9g2O5P][i] = QDhRqa[CLc9g2O5P +1][i];
        }
    for (int CLc9g2O5P = 1;
    CLc9g2O5P < WrQc2qlo -1; CLc9g2O5P = CLc9g2O5P +1)
        for (int i = 0;
        i < WrQc2qlo -1; i = i + 1) {
            QDhRqa[i][CLc9g2O5P] = QDhRqa[i][CLc9g2O5P +1];
        }
    return iupEUztPa2 (WrQc2qlo -1, tyHM1Z7OPD, QDhRqa);
}

int main () {
    int N;
    int QDhRqa [300] [300];
    cin >> N;
    for (int i = 1;
    i <= N; i = i + 1) {
        for (int CLc9g2O5P = 0;
        CLc9g2O5P < N; CLc9g2O5P = CLc9g2O5P +1)
            for (int UGstOvbzLxk = 0;
            UGstOvbzLxk < N; UGstOvbzLxk = UGstOvbzLxk +1) {
                cin >> QDhRqa[CLc9g2O5P][UGstOvbzLxk];
            }
        cout << iupEUztPa2 (N, 0, QDhRqa) << endl;
    }
    return 0;
}

