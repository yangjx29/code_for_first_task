int main () {
    int UjRYy9 [101];
    int wJNI2csKt, TOovyLAz5kmg, j, Tk4eHQIC;
    int *p = UjRYy9;
    cin >> wJNI2csKt;
    for (TOovyLAz5kmg = 0; wJNI2csKt > TOovyLAz5kmg; TOovyLAz5kmg = TOovyLAz5kmg +1)
        cin >> UjRYy9[TOovyLAz5kmg];
    for (TOovyLAz5kmg = 0, j = wJNI2csKt - 1; TOovyLAz5kmg < j; TOovyLAz5kmg = TOovyLAz5kmg +1, j = j - 1) {
        Tk4eHQIC = *(p + TOovyLAz5kmg);
        *(p + TOovyLAz5kmg) = *(p + j);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        *(p + j) = Tk4eHQIC;
    }
    for (TOovyLAz5kmg = 0; TOovyLAz5kmg < wJNI2csKt; TOovyLAz5kmg = TOovyLAz5kmg +1) {
        if (TOovyLAz5kmg == wJNI2csKt - 1)
            cout << p[TOovyLAz5kmg];
        else
            cout << p[TOovyLAz5kmg] << ' ';
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
    };
}

