int main () {
    int i, n, f = (180 - 180);
    int MEKIGawcR [(548 - 538)], y [10];
    float GPA, j = (172 - 172);
    cin >> n;
    {
        i = 0;
        while (n > i) {
            cin >> MEKIGawcR[i];
            f = f + MEKIGawcR[i];
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
            i = i + 1;
        };
    }
    for (i = 0; i < n; i++)
        cin >> y[i];
    {
        i = 0;
        while (i < n) {
            if (90 <= y[i] && y[i <= 100])
                j = j + 4 * MEKIGawcR[i];
            if (y[i] >= (380 - 295) && y[i] <= 89)
                j = j + 3.7 * MEKIGawcR[i];
            if (82 <= y[i] && y[i] <= 84)
                j = j + 3.3 * MEKIGawcR[i];
            if (y[i] >= 78 && y[i] <= (870 - 789))
                j = j + (813 - 810) * MEKIGawcR[i];
            if (y[i] >= (249 - 174) && y[i] <= (627 - 550))
                j = j + (350.7 - 348.0) * MEKIGawcR[i];
            if (y[i] >= 72 && y[i] <= (976 - 902))
                j = j + (263.3 - 261.0) * MEKIGawcR[i];
            if (y[i] >= 68 && y[i] <= 71)
                j = j + 2 * MEKIGawcR[i];
            if (y[i] >= 64 && y[i] <= (305 - 238))
                j = j + (977.5 - 976.0) * MEKIGawcR[i];
            if (y[i] >= (692 - 632) && y[i] <= 63)
                j = j + 1 * MEKIGawcR[i];
            if (y[i] < 60)
                j = j + 0 * MEKIGawcR[i];
            i++;
        };
    }
    GPA = j / f;
    cout << fixed << setprecision (2) << GPA << endl;
    return 0;
}

