int main (int argc, char *Sb5VKPlve []) {
    double  Xxqycwp;
    double  PKPRBtbx;
    double  *YsX4Zbk3;
    double  GNGzVU [1000];
    double  dAgzrHp;
    double  x;
    Xxqycwp = 0;
    PKPRBtbx = 0;
    int Ukpo2bL1;
    int KzU0fS;
    int wX0iUj;
    YsX4Zbk3 = GNGzVU;
    scanf ("%d", &Ukpo2bL1);
    for (wX0iUj = 0; Ukpo2bL1 > wX0iUj; wX0iUj = wX0iUj + 1) {
        scanf ("%d", &KzU0fS);
        Xxqycwp = 0;
        for (YsX4Zbk3 = GNGzVU; GNGzVU +KzU0fS > YsX4Zbk3; YsX4Zbk3 = YsX4Zbk3 +1) {
            scanf ("%lf", YsX4Zbk3);
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
            Xxqycwp = Xxqycwp +*YsX4Zbk3;
        }
        x = Xxqycwp / KzU0fS;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        PKPRBtbx = 0;
        {
            YsX4Zbk3 = GNGzVU;
            while (YsX4Zbk3 < GNGzVU +KzU0fS) {
                YsX4Zbk3 = YsX4Zbk3 +1;
                PKPRBtbx = PKPRBtbx +pow ((*YsX4Zbk3-x), 2);
            };
        }
        dAgzrHp = sqrt (PKPRBtbx / KzU0fS);
        printf ("%.5f\n", dAgzrHp);
    }
    return 0;
}

