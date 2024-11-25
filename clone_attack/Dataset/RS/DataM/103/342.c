int main () {
    int k;
    k = 1;
    char m36sOD [1000];
    char nowchar;
    int CvEo5S;
    CvEo5S = (129 - 129);
    cin >> m36sOD;
    while (CvEo5S < strlen (m36sOD) - 1) {
        if (m36sOD[CvEo5S] >= 'a' && m36sOD[CvEo5S] <= 'z')
            nowchar = m36sOD[CvEo5S] - 'a' + 'A';
        else
            nowchar = m36sOD[CvEo5S];
        while ((!(m36sOD[CvEo5S] != m36sOD[CvEo5S +1]) || !(m36sOD[CvEo5S] - 'A' + 'a' != m36sOD[CvEo5S +1]) || m36sOD[CvEo5S +1] == m36sOD[CvEo5S] - 'a' + 'A')) {
            k = k + 1;
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
            CvEo5S = CvEo5S +1;
        }
        cout << "(" << nowchar << "," << k << ")";
        k = 1;
        CvEo5S = CvEo5S +1;
    }
    if (m36sOD[strlen (m36sOD) - 1] != m36sOD[strlen (m36sOD) - 2]) {
        if (m36sOD[CvEo5S] >= 'a' && m36sOD[CvEo5S] <= 'z')
            nowchar = m36sOD[CvEo5S] - 'a' + 'A';
        else
            nowchar = m36sOD[CvEo5S];
        cout << "(" << nowchar << ",1)";
    }
    return 0;
}

