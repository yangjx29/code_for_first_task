int E6zI8EW (int IkJThdj1Uw, int k, int index, int CDWbLaJGz);

int main () {
    int IkJThdj1Uw, k;
    cin >> IkJThdj1Uw >> k;
    cout << E6zI8EW (IkJThdj1Uw, k, 1, 1) << endl;
    return 0;
}

int E6zI8EW (int IkJThdj1Uw, int k, int index, int CDWbLaJGz) {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (index == IkJThdj1Uw) {
        return CDWbLaJGz *IkJThdj1Uw+k;
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
    }
    else if (index == 1) {
        int CliJwHRAt30, WZb1KyjOR;
        {
            int xDFXz9eYIm = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (1) {
                WZb1KyjOR = E6zI8EW (IkJThdj1Uw, k, index + 1, CDWbLaJGz +xDFXz9eYIm);
                CliJwHRAt30 = WZb1KyjOR / (IkJThdj1Uw -1);
                if (WZb1KyjOR != 0 && (WZb1KyjOR +CliJwHRAt30+k) % IkJThdj1Uw == k)
                    break;
                xDFXz9eYIm++;
            };
        }
        return WZb1KyjOR +CliJwHRAt30+k;
    }
    else {
        int CliJwHRAt30, WZb1KyjOR = E6zI8EW (IkJThdj1Uw, k, index + 1, CDWbLaJGz);
        CliJwHRAt30 = WZb1KyjOR / (IkJThdj1Uw -1);
        if ((WZb1KyjOR +CliJwHRAt30+k) % IkJThdj1Uw != k || WZb1KyjOR == 0 || (WZb1KyjOR +CliJwHRAt30+k) / IkJThdj1Uw != CliJwHRAt30)
            return 0;
        else
            return WZb1KyjOR +CliJwHRAt30+k;
    };
}

