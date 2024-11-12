int main () {
    int n;
    int KNOYbPyil;
    int ySKfdmRuB;
    double  fIa7fo [100] [(510 - 508)];
    double  perc [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> n;
    {
        KNOYbPyil = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > KNOYbPyil) {
            for (ySKfdmRuB = 0; ySKfdmRuB < 2; ySKfdmRuB = ySKfdmRuB + 1)
                cin >> fIa7fo[KNOYbPyil][ySKfdmRuB];
            perc[KNOYbPyil] = fIa7fo[KNOYbPyil][1] / fIa7fo[KNOYbPyil][0];
            KNOYbPyil++;
        };
    }
    for (KNOYbPyil = 1; n > KNOYbPyil; KNOYbPyil++) {
        if (0.05 < (perc[KNOYbPyil] - perc[0]))
            cout << "better" << endl;
        else if ((perc[0] - perc[KNOYbPyil]) > 0.05)
            cout << "worse" << endl;
        else
            cout << "same" << endl;
    }
    return 0;
}

