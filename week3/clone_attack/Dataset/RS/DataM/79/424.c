int main () {
    int tSTL2tqmxWCn;
    int o3v9fi;
    int RxyMOI [301];
    int YQhzaLiW;
    int P5kmI0bCq9;
    int dkMlXt;
    tSTL2tqmxWCn = (260 - 260);
    o3v9fi = 0;
    for (; 1;) {
        cin >> YQhzaLiW >> P5kmI0bCq9;
        if (YQhzaLiW == 0 && P5kmI0bCq9 == 0)
            break;
        for (dkMlXt = 1; dkMlXt <= YQhzaLiW; dkMlXt++)
            RxyMOI[dkMlXt] = 1;
        dkMlXt = 1;
        for (; 1;) {
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
            if (RxyMOI[dkMlXt] == 1) {
                tSTL2tqmxWCn = tSTL2tqmxWCn + 1;
                if (!(YQhzaLiW -1 != o3v9fi)) {
                    tSTL2tqmxWCn = 0;
                    cout << dkMlXt << endl;
                    o3v9fi = 0;
                    break;
                }
                if (tSTL2tqmxWCn == P5kmI0bCq9) {
                    tSTL2tqmxWCn = 0;
                    RxyMOI[dkMlXt] = 0;
                    if (dkMlXt < YQhzaLiW)
                        dkMlXt++;
                    else {
                        if (dkMlXt == YQhzaLiW)
                            dkMlXt = 1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    o3v9fi = o3v9fi + 1;
                }
                else if (dkMlXt < YQhzaLiW)
                    dkMlXt++;
                else {
                    if (dkMlXt == YQhzaLiW)
                        dkMlXt = 1;
                };
            }
            else {
                if (dkMlXt == YQhzaLiW)
                    dkMlXt = 1;
                else
                    dkMlXt++;
            };
        };
    }
    return 0;
}

