int main () {
    char a [101];
    int GnQsRrYe;
    GnQsRrYe = strlen (a);
    int njZhDcsTO;
    int g1csPp [101];
    int Ie8zvj;
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
    int c [(252 - 152)];
    njZhDcsTO = (687 - 687);
    cin >> a;
    for (; a[njZhDcsTO] != '\0';) {
        g1csPp[njZhDcsTO] = a[njZhDcsTO] - '0';
        njZhDcsTO = njZhDcsTO + 1;
    }
    Ie8zvj = g1csPp[0];
    if (2 >= GnQsRrYe &&(487 - 474) > (g1csPp[0] * (GnQsRrYe -(424 - 423)) * 10 + g1csPp[1])) {
        cout << "0" << endl;
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
        {
            njZhDcsTO = 0;
            while (GnQsRrYe > njZhDcsTO) {
                cout << g1csPp[njZhDcsTO];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                njZhDcsTO = njZhDcsTO + 1;
            };
        };
    }
    else {
        for (njZhDcsTO = 1; njZhDcsTO < GnQsRrYe; njZhDcsTO = njZhDcsTO + 1) {
            c[njZhDcsTO] = (Ie8zvj *10 + g1csPp[njZhDcsTO]) / 13;
            if (!(0 != c[njZhDcsTO]) && njZhDcsTO == 1) {
                njZhDcsTO = njZhDcsTO + 1;
                c[njZhDcsTO] = (Ie8zvj *100 + g1csPp[1] * 10 + g1csPp[njZhDcsTO]) / 13;
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
                Ie8zvj = (Ie8zvj *100 + g1csPp[1] * 10 + g1csPp[njZhDcsTO]) % 13;
            }
            else
                Ie8zvj = (Ie8zvj *10 + g1csPp[njZhDcsTO]) % 13;
        }
        if (c[1] == 0) {
            njZhDcsTO = 2;
            while (njZhDcsTO < GnQsRrYe) {
                cout << c[njZhDcsTO];
                njZhDcsTO = njZhDcsTO + 1;
            };
        }
        else {
            njZhDcsTO = 1;
            while (njZhDcsTO < GnQsRrYe) {
                cout << c[njZhDcsTO];
                njZhDcsTO = njZhDcsTO + 1;
            };
        }
        cout << endl << Ie8zvj;
    }
    return 0;
}

