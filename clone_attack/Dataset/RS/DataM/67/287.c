int main () {
    double  i;
    double  n;
    double  jJTAlWXjfa;
    double  R6zlfPc;
    cin >> n;
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
        while (i < n) {
            double  Y9DVW8Mf;
            double  y;
            cin >> Y9DVW8Mf >> y;
            if (!(0 != i)) {
                jJTAlWXjfa = y / Y9DVW8Mf;
                continue;
            }
            i++;
            R6zlfPc = y / Y9DVW8Mf;
            if (R6zlfPc <= jJTAlWXjfa) {
                if (jJTAlWXjfa - R6zlfPc > 0.05)
                    cout << "worse" << endl;
                else
                    cout << "same" << endl;
            }
            else {
                if (R6zlfPc -jJTAlWXjfa > 0.05)
                    cout << "better" << endl;
                else
                    cout << "same" << endl;
            };
        };
    }
    return 0;
}

