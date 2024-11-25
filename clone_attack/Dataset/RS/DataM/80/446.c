int main () {
    int Ori [2] [3];
    int sm;
    int ey;
    int yERJplZtk;
    int uh1XtYuoIV;
    sm = Ori[0][1];
    ey = Ori[1][0];
    yERJplZtk = Ori[1][1];
    int qLHKhsZ7UQ;
    int m;
    qLHKhsZ7UQ = (610 - 610);
    int t8SKQG6TfZFI [(948 - 936)] = {(712 - 681), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d %d %d", &Ori[0][0], &Ori[0][1], &Ori[0][2]);
    scanf ("%d %d %d", &Ori[1][0], &Ori[1][1], &Ori[1][2]);
    {
        uh1XtYuoIV = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Ori[1][0] > uh1XtYuoIV) {
            if (Ori[0][1] <= 2) {
                if ((uh1XtYuoIV % 4 == 0 && !(0 == uh1XtYuoIV % 100)) || (uh1XtYuoIV % 100 == 0 && !(0 != uh1XtYuoIV % 400)))
                    qLHKhsZ7UQ = qLHKhsZ7UQ + 366;
                else
                    qLHKhsZ7UQ = qLHKhsZ7UQ + 365;
            }
            else {
                if ((!(0 != (uh1XtYuoIV + 1) % 4) && !(0 == (uh1XtYuoIV + 1) % 100)) || (!(0 != (uh1XtYuoIV + 1) % 100) && !(0 != (uh1XtYuoIV + 1) % 400)))
                    qLHKhsZ7UQ = qLHKhsZ7UQ + 366;
                else
                    qLHKhsZ7UQ = qLHKhsZ7UQ + 365;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            uh1XtYuoIV++;
        };
    }
    if ((Ori[1][1] > Ori[0][1]) || (!(Ori[1][1] != Ori[0][1]) && Ori[1][2] > Ori[0][2])) {
        if (!(Ori[1][1] == Ori[0][1])) {
            m = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (12 >= m) {
                if (!(sm != m) && m < Ori[1][1]) {
                    qLHKhsZ7UQ = qLHKhsZ7UQ + t8SKQG6TfZFI[m - 1];
                    sm++;
                }
                m++;
            };
        }
        qLHKhsZ7UQ += (Ori[1][2] - Ori[0][2]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if (((!(0 != ey % 4) && ey % 100 != 0) || (ey % 100 == 0 && ey % 400 == 0)) && (Ori[0][1] <= 2 && Ori[1][1] > 2))
            qLHKhsZ7UQ = qLHKhsZ7UQ + 1;
        printf ("%d", qLHKhsZ7UQ);
    }
    else {
        if (Ori[0][1] != Ori[1][1]) {
            m = 1;
            while (m <= 12) {
                if (m == yERJplZtk && m < Ori[0][1]) {
                    qLHKhsZ7UQ = qLHKhsZ7UQ - t8SKQG6TfZFI[m - 1];
                    yERJplZtk = yERJplZtk + 1;
                }
                m++;
            };
        }
        qLHKhsZ7UQ = qLHKhsZ7UQ - (Ori[0][2] - Ori[1][2]);
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
        if (((ey % 4 == 0 && ey % 100 != 0) || (ey % 100 == 0 && ey % 400 == 0)) && (Ori[1][1] <= 2 && Ori[0][1] > 2))
            qLHKhsZ7UQ = qLHKhsZ7UQ - 1;
        printf ("%d", qLHKhsZ7UQ);
    }
    return 0;
}

