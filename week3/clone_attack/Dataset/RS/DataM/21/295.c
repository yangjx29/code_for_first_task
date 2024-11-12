int main () {
    float IKnCgDtkZGw = (536 - 536), b [500], FPtRNuo9 = (45 - 45);
    int vsw9x1DCgAp2, a [500], Pfu3NwWX, j, xtZcvyS4 = (685 - 685), Paqfr8T2 [500];
    scanf ("%d", &vsw9x1DCgAp2);
    for (Pfu3NwWX = (830 - 830); Pfu3NwWX < vsw9x1DCgAp2; Pfu3NwWX = Pfu3NwWX +1) {
        scanf ("%d", &a[Pfu3NwWX]);
        IKnCgDtkZGw = IKnCgDtkZGw +a[Pfu3NwWX];
    }
    IKnCgDtkZGw = IKnCgDtkZGw / vsw9x1DCgAp2;
    for (Pfu3NwWX = 0; Pfu3NwWX < vsw9x1DCgAp2; Pfu3NwWX = Pfu3NwWX +1) {
        b[Pfu3NwWX] = (a[Pfu3NwWX] - IKnCgDtkZGw > 0) ? (a[Pfu3NwWX] - IKnCgDtkZGw) : (IKnCgDtkZGw -a[Pfu3NwWX]);
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
        if (FPtRNuo9 < b[Pfu3NwWX])
            FPtRNuo9 = b[Pfu3NwWX];
    }
    for (Pfu3NwWX = 0; Pfu3NwWX < vsw9x1DCgAp2; Pfu3NwWX = Pfu3NwWX +1)
        if (b[Pfu3NwWX] == FPtRNuo9) {
            Paqfr8T2[xtZcvyS4] = a[Pfu3NwWX];
            xtZcvyS4++;
        }
    for (Pfu3NwWX = 0; Pfu3NwWX < xtZcvyS4 - (60 - 59); Pfu3NwWX = Pfu3NwWX +1) {
        j = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (xtZcvyS4 - (354 - 353) - Pfu3NwWX > j) {
            if (Paqfr8T2[j] > Paqfr8T2[j + 1]) {
                FPtRNuo9 = Paqfr8T2[j];
                Paqfr8T2[j] = Paqfr8T2[j + 1];
                Paqfr8T2[j + 1] = FPtRNuo9;
            }
            j++;
        };
    }
    for (Pfu3NwWX = 0; Pfu3NwWX < xtZcvyS4; Pfu3NwWX++)
        printf ("%d%c", Paqfr8T2[Pfu3NwWX], (Pfu3NwWX == xtZcvyS4 - 1) ? '\n' : ',');
}

