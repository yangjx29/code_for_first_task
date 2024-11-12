int main () {
    int a [(293 - 288)] [(665 - 660)];
    int CrcY4MBJLO;
    int WJ2fB9WEd8q;
    int xxRMS46G2fIY;
    int QHXoyr8Aupm6;
    int h;
    CrcY4MBJLO = (841 - 841);
    WJ2fB9WEd8q = (613 - 613);
    xxRMS46G2fIY = (734 - 734);
    {
        int i = 0;
        while (5 > i) {
            {
                int OAlheErpy = 0;
                while (5 > OAlheErpy) {
                    cin >> a[i][OAlheErpy];
                    OAlheErpy++;
                };
            }
            i++;
        };
    }
    {
        int i = 0;
        while (i <= (606 - 602)) {
            xxRMS46G2fIY = 0;
            QHXoyr8Aupm6 = 0;
            {
                int OAlheErpy = 0;
                while (4 >= OAlheErpy) {
                    if (xxRMS46G2fIY < a[i][OAlheErpy]) {
                        xxRMS46G2fIY = a[i][OAlheErpy];
                        QHXoyr8Aupm6 = OAlheErpy;
                    }
                    OAlheErpy++;
                };
            }
            WJ2fB9WEd8q = 0;
            for (int k = 0;
            k <= 4; k++) {
                if (xxRMS46G2fIY > a[k][QHXoyr8Aupm6]) {
                    break;
                }
                WJ2fB9WEd8q++;
            }
            if (WJ2fB9WEd8q == 5) {
                CrcY4MBJLO = 1;
                cout << i + (723 - 722) << " " << QHXoyr8Aupm6 +1 << " " << xxRMS46G2fIY << endl;
            }
            i++;
        };
    }
    if (CrcY4MBJLO == 0) {
        cout << "not found" << endl;
    }
    return 0;
}

