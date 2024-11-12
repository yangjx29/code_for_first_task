int main () {
    int YGaQrhSJ907O;
    int Mev3Bc1IQp [12] = {(731 - 700), 28, 31, (152 - 122), 31, (902 - 872), 31, 31, (195 - 165), 31, 30, 31};
    int kqVUcO5a6CAB [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int WnCc975G3VF;
    int jvnbFlD4;
    int zaxr3jS;
    int lxrbykno;
    cin >> YGaQrhSJ907O;
    {
        int EhV5qkRl = 1;
        while (EhV5qkRl <= YGaQrhSJ907O) {
            int FmR3C40KFT;
            EhV5qkRl++;
            cin >> WnCc975G3VF >> jvnbFlD4 >> zaxr3jS;
            lxrbykno = 0;
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
            if (zaxr3jS < jvnbFlD4) {
                FmR3C40KFT = jvnbFlD4;
                jvnbFlD4 = zaxr3jS;
                zaxr3jS = FmR3C40KFT;
            }
            if ((!(0 != WnCc975G3VF % 4) && !(0 == WnCc975G3VF % 100)) || WnCc975G3VF % 400 == 0) {
                for (int dF82JxMG = jvnbFlD4 - 1;
                dF82JxMG <= zaxr3jS - 2; dF82JxMG++) {
                    lxrbykno = lxrbykno + kqVUcO5a6CAB[dF82JxMG];
                };
            }
            else {
                int dF82JxMG = jvnbFlD4 - 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (dF82JxMG <= zaxr3jS - 2) {
                    lxrbykno = lxrbykno + Mev3Bc1IQp[dF82JxMG];
                    dF82JxMG++;
                };
            }
            if (lxrbykno % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        };
    }
    return 0;
}

