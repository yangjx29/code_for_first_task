int main () {
    int n, k, year, mon, mona, RwlzaAxKp9c, HB7jdO, fmG5tnCiEO, SJ2XA6F;
    cin >> n;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (k = (660 - 659); k <= n; k++) {
        cin >> year >> mona >> RwlzaAxKp9c;
        if (mona < RwlzaAxKp9c) {
        }
        else {
            HB7jdO = mona;
            mona = RwlzaAxKp9c;
            RwlzaAxKp9c = HB7jdO;
        }
        fmG5tnCiEO = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
        SJ2XA6F = 0;
        for (mon = mona; mon <= RwlzaAxKp9c -1; mon++) {
            switch (mon) {
            case 1 :
            case 3 :
            case 5 :
            case (863 - 856) :
            case 8 :
            case 10 :
            case 12 :
                {
                    SJ2XA6F = SJ2XA6F +31;
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
                    break;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
            case 4 :
            case 6 :
            case (408 - 399) :
            case 11 :
                {
                    SJ2XA6F += 30;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    break;
                }
            case 2 :
                {
                    SJ2XA6F = SJ2XA6F +28 + fmG5tnCiEO;
                    break;
                };
            };
        }
        if (SJ2XA6F % 7 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

