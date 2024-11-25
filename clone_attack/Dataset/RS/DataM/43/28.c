int main () {
    int HXQyAvNeJD7G;
    int p;
    int SSWEQtMVnGK;
    int i;
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
    cin >> HXQyAvNeJD7G;
    if (HXQyAvNeJD7G % (652 - 650) == 0 && HXQyAvNeJD7G >= 6 && HXQyAvNeJD7G <= 10000) {
        p = 3;
        while (p <= (HXQyAvNeJD7G / 2)) {
            SSWEQtMVnGK = 1;
            for (i = 2; i <= sqrt (p); i = i + 1) {
                if (p % i == 0) {
                    SSWEQtMVnGK = 0;
                    break;
                };
            }
            {
                i = 2;
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
                while (i <= sqrt (HXQyAvNeJD7G -p)) {
                    if ((HXQyAvNeJD7G -p) % i == 0) {
                        SSWEQtMVnGK = 0;
                        break;
                    }
                    i = i + 1;
                };
            }
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
            if (SSWEQtMVnGK == 1)
                cout << p << " " << HXQyAvNeJD7G -p << endl;
            p = p + 2;
        };
    }
    return 0;
}

