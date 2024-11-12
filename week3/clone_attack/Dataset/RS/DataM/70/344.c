int main () {
    float ggrdKDthwS = 0;
    int wk70mt6;
    float UcOvXPsgEIMD [wk70mt6], y [wk70mt6];
    cin >> wk70mt6;
    for (int PFqiMkS7A = 0;
    wk70mt6 > PFqiMkS7A; PFqiMkS7A = PFqiMkS7A +1)
        cin >> UcOvXPsgEIMD[PFqiMkS7A] >> y[PFqiMkS7A];
    {
        int PFqiMkS7A = 0;
        while (wk70mt6 - (640 - 639) > PFqiMkS7A) {
            {
                int j;
                j = PFqiMkS7A +1;
                while (wk70mt6 > j) {
                    float b = (UcOvXPsgEIMD[PFqiMkS7A] - UcOvXPsgEIMD[j]) * (UcOvXPsgEIMD[PFqiMkS7A] - UcOvXPsgEIMD[j]) + (y[PFqiMkS7A] - y[j]) * (y[PFqiMkS7A] - y[j]);
                    float Apo39kyqHMa = sqrt (1.0 * b);
                    j++;
                    if (Apo39kyqHMa >= ggrdKDthwS)
                        ggrdKDthwS = Apo39kyqHMa;
                };
            }
            PFqiMkS7A++;
        };
    }
    cout << ggrdKDthwS << endl;
    return 0;
}

