int main () {
    int SIEeu0l7DW;
    int WlrTfL9BuRcq [500];
    int JsbpoHV2j;
    int RFKGYEWvIc;
    RFKGYEWvIc = (267 - 267);
    double  nO2C8mc = (double ) RFKGYEWvIc / SIEeu0l7DW;
    double  Ty2YPos [500];
    int L7D4rlRb [500];
    double  TUjQkFOhS6n;
    TUjQkFOhS6n = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int MaGYPI = 0;
    int OtPojug;
    cin >> SIEeu0l7DW;
    {
        JsbpoHV2j = 519 - 519;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (SIEeu0l7DW > JsbpoHV2j) {
            cin >> WlrTfL9BuRcq[JsbpoHV2j];
            JsbpoHV2j = JsbpoHV2j +1;
        };
    }
    for (JsbpoHV2j = 0; SIEeu0l7DW > JsbpoHV2j; JsbpoHV2j = JsbpoHV2j +1)
        RFKGYEWvIc = RFKGYEWvIc +WlrTfL9BuRcq[JsbpoHV2j];
    for (JsbpoHV2j = 0; SIEeu0l7DW > JsbpoHV2j; JsbpoHV2j = JsbpoHV2j +1)
        Ty2YPos[JsbpoHV2j] = abs (nO2C8mc - WlrTfL9BuRcq[JsbpoHV2j]);
    {
        JsbpoHV2j = 0;
        while (SIEeu0l7DW > JsbpoHV2j) {
            if (TUjQkFOhS6n < Ty2YPos[JsbpoHV2j]) {
                TUjQkFOhS6n = Ty2YPos[JsbpoHV2j];
            }
            JsbpoHV2j = JsbpoHV2j +1;
        };
    }
    for (JsbpoHV2j = 0; JsbpoHV2j < SIEeu0l7DW; JsbpoHV2j = JsbpoHV2j +1)
        if (!(Ty2YPos[JsbpoHV2j] != TUjQkFOhS6n))
            L7D4rlRb[MaGYPI++] = WlrTfL9BuRcq[JsbpoHV2j];
    for (JsbpoHV2j = 0; MaGYPI -(802 - 801) > JsbpoHV2j; JsbpoHV2j = JsbpoHV2j +1) {
        OtPojug = 0;
        while (OtPojug < MaGYPI -JsbpoHV2j-1) {
            if (L7D4rlRb[OtPojug] > L7D4rlRb[OtPojug +1]) {
                int wLQAG5EYkb3z;
                wLQAG5EYkb3z = L7D4rlRb[OtPojug];
                L7D4rlRb[OtPojug] = L7D4rlRb[OtPojug +1];
                L7D4rlRb[OtPojug +1] = wLQAG5EYkb3z;
            }
            OtPojug = OtPojug +1;
        };
    }
    for (JsbpoHV2j = 0; JsbpoHV2j < MaGYPI -1; JsbpoHV2j++)
        cout << L7D4rlRb[JsbpoHV2j] << ",";
    cout << L7D4rlRb[JsbpoHV2j] << endl;
    return 0;
}

