int main () {
    int TOlmnTowI1;
    int num;
    int diUS0RfwG7;
    int wES7UqOKA;
    int Mf4gpSj;
    int j;
    int NOG6qlK;
    int t;
    int LVTWrMzHP [501] = {0};
    int lAgshJ [501];
    TOlmnTowI1 = 1;
    num = 0;
    char oxicbzqf [501];
    char *hzRrFuYTQ;
    cin >> diUS0RfwG7;
    cin >> oxicbzqf;
    hzRrFuYTQ = oxicbzqf;
    NOG6qlK = strlen (oxicbzqf);
    {
        Mf4gpSj = 0;
        while (Mf4gpSj < NOG6qlK -diUS0RfwG7) {
            if (!(0 != LVTWrMzHP[Mf4gpSj])) {
                t = 1;
                for (j = Mf4gpSj +1; j <= NOG6qlK -diUS0RfwG7; j++) {
                    if (LVTWrMzHP[j] == 0) {
                        wES7UqOKA = 0;
                        while ((*(hzRrFuYTQ + j + wES7UqOKA) == *(hzRrFuYTQ + Mf4gpSj +wES7UqOKA)) && (diUS0RfwG7 > wES7UqOKA)) {
                            wES7UqOKA++;
                        }
                        if (!(diUS0RfwG7 != wES7UqOKA)) {
                            t++;
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
                            LVTWrMzHP[j] = 1;
                        };
                    };
                }
                if (t > TOlmnTowI1) {
                    lAgshJ[1] = Mf4gpSj;
                    TOlmnTowI1 = t;
                    num = 1;
                }
                else {
                    if (t == TOlmnTowI1) {
                        num++;
                        lAgshJ[num] = Mf4gpSj;
                    };
                };
            }
            Mf4gpSj++;
        };
    }
    if (TOlmnTowI1 == 1) {
        cout << "NO";
    }
    else {
        cout << TOlmnTowI1 << endl;
        for (Mf4gpSj = 1; Mf4gpSj <= num; Mf4gpSj++) {
            for (j = 0; j < diUS0RfwG7; j++) {
                cout << *(hzRrFuYTQ + lAgshJ[Mf4gpSj] + j);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            cout << endl;
        };
    }
    return 0;
}

