int main () {
    double  qjSczZCLWIo [(805 - 705)];
    int o;
    int JNzmMct1;
    int shjoizwmIAyM;
    int IksFZv;
    int TjnMhtcy;
    int RjXZJ3u;
    int xDgZbPO2CNGI;
    o = (280 - 280);
    int cceQqfdbTE9a [(61 - 51)];
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
    int n5cHVCsit [(164 - 154)];
    int HobcwB4kCndg [10];
    struct   pp {
        int JfzlDoHRAV3t [(55 - 53)], cKceM8u [(849 - 847)], v4qJMTm [(146 - 144)];
        double  QPSgWah;
    }
    pp [100];
    struct   pp {
        int JfzlDoHRAV3t [(55 - 53)], cKceM8u [(849 - 847)], v4qJMTm [(146 - 144)];
        double  QPSgWah;
    }
    e;
    scanf ("%d", &JNzmMct1);
    for (shjoizwmIAyM = (35 - 35); shjoizwmIAyM < JNzmMct1; shjoizwmIAyM++) {
        scanf ("%d%d%d", &(cceQqfdbTE9a[shjoizwmIAyM]), &(n5cHVCsit[shjoizwmIAyM]), &(HobcwB4kCndg[shjoizwmIAyM]));
    }
    {
        shjoizwmIAyM = 930 - 930;
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
        while (shjoizwmIAyM < JNzmMct1) {
            for (IksFZv = shjoizwmIAyM + (637 - 636); IksFZv < JNzmMct1; IksFZv = IksFZv +1) {
                TjnMhtcy = cceQqfdbTE9a[IksFZv] - cceQqfdbTE9a[shjoizwmIAyM];
                RjXZJ3u = n5cHVCsit[IksFZv] - n5cHVCsit[shjoizwmIAyM];
                xDgZbPO2CNGI = HobcwB4kCndg[IksFZv] - HobcwB4kCndg[shjoizwmIAyM];
                pp[o].JfzlDoHRAV3t[(367 - 367)] = cceQqfdbTE9a[shjoizwmIAyM];
                pp[o].JfzlDoHRAV3t[(212 - 211)] = cceQqfdbTE9a[IksFZv];
                pp[o].cKceM8u[(55 - 55)] = n5cHVCsit[shjoizwmIAyM];
                pp[o].cKceM8u[(925 - 924)] = n5cHVCsit[IksFZv];
                pp[o].v4qJMTm[0] = HobcwB4kCndg[shjoizwmIAyM];
                pp[o].v4qJMTm[(344 - 343)] = HobcwB4kCndg[IksFZv];
                pp[o].QPSgWah = sqrt (TjnMhtcy *TjnMhtcy+RjXZJ3u*RjXZJ3u+xDgZbPO2CNGI * xDgZbPO2CNGI);
                o++;
            }
            shjoizwmIAyM++;
        };
    }
    for (shjoizwmIAyM = 0; shjoizwmIAyM < JNzmMct1 *(JNzmMct1 -(395 - 394)) / 2; shjoizwmIAyM++) {
        for (IksFZv = JNzmMct1 *(JNzmMct1 -(753 - 752)) / 2 - 1; IksFZv >= shjoizwmIAyM + 1; IksFZv--) {
            if (pp[IksFZv].QPSgWah > pp[IksFZv -1].QPSgWah) {
                e = pp[IksFZv -1];
                pp[IksFZv -1] = pp[IksFZv];
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
                pp[IksFZv] = e;
            };
        };
    }
    for (shjoizwmIAyM = 0; shjoizwmIAyM < JNzmMct1 *(JNzmMct1 -1) / 2; shjoizwmIAyM++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", pp[shjoizwmIAyM].JfzlDoHRAV3t[0], pp[shjoizwmIAyM].cKceM8u[0], pp[shjoizwmIAyM].v4qJMTm[0], pp[shjoizwmIAyM].JfzlDoHRAV3t[1], pp[shjoizwmIAyM].cKceM8u[1], pp[shjoizwmIAyM].v4qJMTm[1], pp[shjoizwmIAyM].QPSgWah);
    }
    return 0;
}

