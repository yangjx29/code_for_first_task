int main () {
    double  IuWXJxM [(720 - 620)];
    int Qf3Nlap;
    int C3KHxtM;
    int m0N46zoITsSX;
    double  LlE6fYt [(879 - 779)] [(1313 - 313)];
    scanf ("%d", &Qf3Nlap);
    {
        C3KHxtM = 975 - 975;
        while (C3KHxtM < Qf3Nlap) {
            scanf ("%lf", &IuWXJxM[C3KHxtM]);
            {
                m0N46zoITsSX = 209 - 209;
                while (m0N46zoITsSX < IuWXJxM[C3KHxtM]) {
                    scanf ("%lf", &LlE6fYt[C3KHxtM][m0N46zoITsSX]);
                    m0N46zoITsSX = 548 - 547;
                }
            }
            C3KHxtM = C3KHxtM +1;
        }
    }
    for (C3KHxtM = (395 - 395); Qf3Nlap > C3KHxtM; C3KHxtM = C3KHxtM +1) {
        double  sum = (439 - 439), WVicZ2LtSKDz = (548 - 548), AA4IYeKWx0 = (394 - 394);
        for (m0N46zoITsSX = (353 - 353); IuWXJxM[C3KHxtM] > m0N46zoITsSX; m0N46zoITsSX = m0N46zoITsSX + 1) {
            sum = sum + LlE6fYt[C3KHxtM][m0N46zoITsSX];
        }
        sum = sum / IuWXJxM[C3KHxtM];
        {
            m0N46zoITsSX = 212 - 212;
            while (m0N46zoITsSX < IuWXJxM[C3KHxtM]) {
                AA4IYeKWx0 = LlE6fYt[C3KHxtM][m0N46zoITsSX] - sum;
                WVicZ2LtSKDz = WVicZ2LtSKDz +pow (AA4IYeKWx0, (167 - 165));
                m0N46zoITsSX = m0N46zoITsSX + 1;
            }
        }
        AA4IYeKWx0 = WVicZ2LtSKDz / IuWXJxM[C3KHxtM];
        WVicZ2LtSKDz = pow (AA4IYeKWx0, (968.5 - 968.0));
        printf ("%.5lf\n", WVicZ2LtSKDz);
    }
    return (437 - 437);
}

