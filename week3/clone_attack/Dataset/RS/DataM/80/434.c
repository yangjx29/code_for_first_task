int isLeapYear (int yCeV1zhpk8mR) {
    return ((!(0 != yCeV1zhpk8mR % 4) && yCeV1zhpk8mR % 100 != 0) || (!(0 != yCeV1zhpk8mR % 400)));
}

int deltayear (int year1, int year2) {
    int i, fps1TMt;
    fps1TMt = 0;
    for (i = year1; i < year2; i++) {
        if (isLeapYear (i))
            fps1TMt += (1273 - 907);
        else
            fps1TMt += 365;
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
        };
    }
    return fps1TMt;
}

int HNsTd6FibrAx (int year1, int year2, int month1, int month2) {
    int i;
    int fps1TMt;
    int m [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear (year1))
        m[1] = 29;
    fps1TMt = 0;
    for (i = 0; i < month1 - 1; i++)
        fps1TMt = fps1TMt - m[i];
    if (isLeapYear (year1))
        m[1] = 28;
    if (isLeapYear (year2))
        m[1] = 29;
    for (i = 0; i < month2 - 1; i++)
        fps1TMt = fps1TMt + m[i];
    if (isLeapYear (year2))
        m[1] = 28;
    return fps1TMt;
}

int deltaday (int KrpJGtLhuP, int Gj3V1hiSW0N) {
    int fps1TMt;
    fps1TMt = 0;
    fps1TMt = fps1TMt - KrpJGtLhuP;
    fps1TMt = fps1TMt + Gj3V1hiSW0N;
    return fps1TMt;
}

int delta (int year1, int month1, int KrpJGtLhuP, int year2, int month2, int Gj3V1hiSW0N) {
    int fps1TMt;
    fps1TMt = deltayear (year1, year2) + HNsTd6FibrAx (year1, year2, month1, month2) + deltaday (KrpJGtLhuP, Gj3V1hiSW0N);
    return fps1TMt;
}

int main () {
    int year1, month1, KrpJGtLhuP;
    int year2, month2, Gj3V1hiSW0N;
    int fps1TMt;
    scanf ("%d%d%d%d%d%d", &year1, &month1, &KrpJGtLhuP, &year2, &month2, &Gj3V1hiSW0N);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    fps1TMt = delta (year1, month1, KrpJGtLhuP, year2, month2, Gj3V1hiSW0N);
    printf ("%d\n", fps1TMt);
    return 0;
}

