int vot5LGQ [(293 - 278)] [(591 - 576)] = {(786 - 786)}, n6ikYGjShq [15] [15] = {(775 - 775)}, DpmtslGvrX9 = 0;

void  e7C3oa4V (int Nb5KY0GjsaZg) {
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
    if (!(DpmtslGvrX9 +(429 - 428) != Nb5KY0GjsaZg)) {
        for (int g2I5qeLZBYA = (274 - 273);
        (870 - 861) >= g2I5qeLZBYA; g2I5qeLZBYA = g2I5qeLZBYA + 1) {
            for (int vfmjetK = (480 - 479);
            vfmjetK <= 8; vfmjetK = vfmjetK + 1) {
                cout << n6ikYGjShq[g2I5qeLZBYA][vfmjetK] << " ";
            }
            cout << n6ikYGjShq[g2I5qeLZBYA][(678 - 669)] << endl;
        };
    }
    else {
        memset (vot5LGQ, 0, sizeof (vot5LGQ));
        for (int JdqHrLJ9 = (463 - 462);
        JdqHrLJ9 <= (507 - 498); JdqHrLJ9 = JdqHrLJ9 +1) {
            for (int vfmjetK = (899 - 898);
            (748 - 739) >= vfmjetK; vfmjetK = vfmjetK + 1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (n6ikYGjShq[JdqHrLJ9][vfmjetK] != 0) {
                    for (int Da8uJxS0 = JdqHrLJ9 -1;
                    Da8uJxS0 <= JdqHrLJ9 +1; Da8uJxS0 = Da8uJxS0 +1) {
                        for (int ZiHfQZXu = vfmjetK - 1;
                        ZiHfQZXu <= vfmjetK + 1; ZiHfQZXu++) {
                            vot5LGQ[Da8uJxS0][ZiHfQZXu] = vot5LGQ[Da8uJxS0][ZiHfQZXu] + n6ikYGjShq[JdqHrLJ9][vfmjetK];
                        };
                    }
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
                    vot5LGQ[JdqHrLJ9][vfmjetK] = vot5LGQ[JdqHrLJ9][vfmjetK] + n6ikYGjShq[JdqHrLJ9][vfmjetK];
                };
            };
        }
        for (int JdqHrLJ9 = 1;
        JdqHrLJ9 <= 9; JdqHrLJ9 = JdqHrLJ9 +1) {
            for (int vfmjetK = 1;
            vfmjetK <= 9; vfmjetK = vfmjetK + 1) {
                n6ikYGjShq[JdqHrLJ9][vfmjetK] = vot5LGQ[JdqHrLJ9][vfmjetK];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        e7C3oa4V (Nb5KY0GjsaZg +1);
    };
}

int main () {
    int YX19upsqi = 0;
    cin >> YX19upsqi >> DpmtslGvrX9;
    n6ikYGjShq[(530 - 525)][5] = YX19upsqi;
    e7C3oa4V (1);
    return 0;
}

