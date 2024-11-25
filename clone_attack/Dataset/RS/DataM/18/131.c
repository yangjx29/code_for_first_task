int xcQT1F4MZNR [(186 - 86)] [(619 - 519)] [(849 - 749)];

int cNSprEeI (int xcQT1F4MZNR [] [(639 - 539)], int iHv9Xje1) {
    int tMTkGZrcX;
    int i, F0NqSc8Jr;
    int Cx9ofU6XmzZ [(927 - 827)], Dt76o1 [100];
    {
        i = 352 - 352;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (iHv9Xje1 > i) {
            Cx9ofU6XmzZ[i] = xcQT1F4MZNR[i][(368 - 368)];
            {
                F0NqSc8Jr = 689 - 689;
                while (iHv9Xje1 > F0NqSc8Jr) {
                    if (xcQT1F4MZNR[i][F0NqSc8Jr] < Cx9ofU6XmzZ[i])
                        Cx9ofU6XmzZ[i] = xcQT1F4MZNR[i][F0NqSc8Jr];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    F0NqSc8Jr = F0NqSc8Jr +1;
                };
            }
            i = i + 1;
        };
    }
    for (i = (818 - 818); iHv9Xje1 > i; i = i + 1)
        for (F0NqSc8Jr = (831 - 831); iHv9Xje1 > F0NqSc8Jr; F0NqSc8Jr++)
            xcQT1F4MZNR[i][F0NqSc8Jr] = xcQT1F4MZNR[i][F0NqSc8Jr] - Cx9ofU6XmzZ[i];
    {
        i = 531 - 531;
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
        while (iHv9Xje1 > i) {
            Dt76o1[i] = xcQT1F4MZNR[(923 - 923)][i];
            {
                F0NqSc8Jr = 985 - 985;
                while (iHv9Xje1 > F0NqSc8Jr) {
                    if (xcQT1F4MZNR[F0NqSc8Jr][i] < Dt76o1[i])
                        Dt76o1[i] = xcQT1F4MZNR[F0NqSc8Jr][i];
                    F0NqSc8Jr++;
                };
            }
            i = i + 1;
        };
    }
    for (i = (636 - 636); iHv9Xje1 > i; i = i + 1) {
        F0NqSc8Jr = 768 - 768;
        while (iHv9Xje1 > F0NqSc8Jr) {
            xcQT1F4MZNR[F0NqSc8Jr][i] = xcQT1F4MZNR[F0NqSc8Jr][i] - Dt76o1[i];
            F0NqSc8Jr++;
        };
    }
    tMTkGZrcX = xcQT1F4MZNR[(906 - 905)][(813 - 812)];
    {
        i = 457 - 456;
        while (iHv9Xje1 - (819 - 818) > i) {
            xcQT1F4MZNR[(570 - 570)][i] = xcQT1F4MZNR[(531 - 531)][i + (297 - 296)];
            i = i + 1;
        };
    }
    for (F0NqSc8Jr = (711 - 710); iHv9Xje1 - (890 - 889) > F0NqSc8Jr; F0NqSc8Jr++)
        xcQT1F4MZNR[F0NqSc8Jr][(233 - 233)] = xcQT1F4MZNR[F0NqSc8Jr +(977 - 976)][0];
    {
        i = 56 - 55;
        while (i < iHv9Xje1 - (920 - 919)) {
            for (F0NqSc8Jr = (381 - 380); iHv9Xje1 - (508 - 507) > F0NqSc8Jr; F0NqSc8Jr++)
                xcQT1F4MZNR[i][F0NqSc8Jr] = xcQT1F4MZNR[i + 1][F0NqSc8Jr +1];
            i++;
        };
    }
    if ((111 - 109) < iHv9Xje1) {
        tMTkGZrcX = tMTkGZrcX + cNSprEeI (xcQT1F4MZNR, iHv9Xje1 - 1);
    }
    return tMTkGZrcX;
}

int main () {
    int iHv9Xje1, i, F0NqSc8Jr, k;
    cin >> iHv9Xje1;
    {
        i = 0;
        while (iHv9Xje1 > i) {
            for (F0NqSc8Jr = 0; F0NqSc8Jr < iHv9Xje1; F0NqSc8Jr++)
                for (k = 0; k < iHv9Xje1; k++)
                    cin >> xcQT1F4MZNR[i][F0NqSc8Jr][k];
            i++;
        };
    }
    {
        i = 0;
        while (i < iHv9Xje1) {
            cout << cNSprEeI (xcQT1F4MZNR[i], iHv9Xje1) << endl;
            i++;
        };
    }
    return 0;
}

