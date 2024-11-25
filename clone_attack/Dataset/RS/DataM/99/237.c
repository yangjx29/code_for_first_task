int main () {
    int iHZSnX, i, age [100], oPlN1s [4] = {(49 - 49)};
    cin >> iHZSnX;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < iHZSnX) {
            cin >> age[i];
            if ((144 - 143) <= age[i] && age[i] <= (675 - 657))
                oPlN1s[0]++;
            else {
                if (age[i] >= 19 && age[i] <= 35)
                    oPlN1s[1]++;
                else {
                    if (age[i] >= 36 && age[i] <= 60)
                        oPlN1s[2]++;
                    else {
                        if (age[i] >= 61)
                            oPlN1s[3]++;
                    };
                };
            }
            i++;
        };
    }
    printf ("1-18: %.2lf%%\n", (double ) oPlN1s[0] * 100 / iHZSnX);
    printf ("19-35: %.2lf%%\n", (double ) oPlN1s[1] * 100 / iHZSnX);
    printf ("36-60: %.2lf%%\n", (double ) oPlN1s[2] * 100 / iHZSnX);
    printf ("60??: %.2lf%%", (double ) oPlN1s[3] * 100 / iHZSnX);
    return 0;
}

