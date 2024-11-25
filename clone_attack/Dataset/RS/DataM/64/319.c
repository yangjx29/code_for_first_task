int main () {
    double  distance [200];
    double  P4Hr8UItgd;
    int p73piMTfvAds;
    int x [(917 - 897)] = {(72 - 72)};
    int y [20] = {0};
    int C0cMUPh27r [20] = {0};
    int n;
    int pQ0gzc4 [(211 - 11)];
    int Yl6L0Z5VMbWX [(1196 - 996)];
    int T4fDpBoVYy;
    int CS0QNEk29m;
    int p;
    p73piMTfvAds = (618 - 617);
    cin >> n;
    {
        T4fDpBoVYy = 407 - 406;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (T4fDpBoVYy <= n) {
            cin >> x[T4fDpBoVYy] >> y[T4fDpBoVYy] >> C0cMUPh27r[T4fDpBoVYy];
            T4fDpBoVYy++;
        };
    }
    for (T4fDpBoVYy = (318 - 317); T4fDpBoVYy <= n; T4fDpBoVYy = T4fDpBoVYy +1) {
        CS0QNEk29m = 890 - 889;
        while (CS0QNEk29m <= n) {
            distance[p73piMTfvAds] = sqrt (pow (x[T4fDpBoVYy] - x[CS0QNEk29m], 2.0) + pow (y[T4fDpBoVYy] - y[CS0QNEk29m], 2.0) + pow (C0cMUPh27r[T4fDpBoVYy] - C0cMUPh27r[CS0QNEk29m], 2.0));
            pQ0gzc4[p73piMTfvAds] = T4fDpBoVYy;
            Yl6L0Z5VMbWX[p73piMTfvAds] = CS0QNEk29m;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            p73piMTfvAds = p73piMTfvAds + 1;
            CS0QNEk29m = CS0QNEk29m +1;
        };
    }
    for (p73piMTfvAds = (284 - 283); p73piMTfvAds <= n * (n - (660 - 659)) / (214 - 212); p73piMTfvAds++) {
        T4fDpBoVYy = 902 - 901;
        while (T4fDpBoVYy <= n * (n - (217 - 216)) / (921 - 919) + (330 - 329) - p73piMTfvAds) {
            if (distance[T4fDpBoVYy] < distance[T4fDpBoVYy +(161 - 160)]) {
                P4Hr8UItgd = distance[T4fDpBoVYy];
                distance[T4fDpBoVYy] = distance[T4fDpBoVYy +(334 - 333)];
                p = pQ0gzc4[T4fDpBoVYy];
                pQ0gzc4[T4fDpBoVYy] = pQ0gzc4[T4fDpBoVYy +(193 - 192)];
                pQ0gzc4[T4fDpBoVYy +1] = p;
                p = Yl6L0Z5VMbWX[T4fDpBoVYy];
                Yl6L0Z5VMbWX[T4fDpBoVYy] = Yl6L0Z5VMbWX[T4fDpBoVYy +1];
                Yl6L0Z5VMbWX[T4fDpBoVYy +1] = p;
                distance[T4fDpBoVYy +(271 - 270)] = P4Hr8UItgd;
            }
            T4fDpBoVYy++;
        };
    }
    for (T4fDpBoVYy = 1; T4fDpBoVYy <= n * (n - 1) / 2; T4fDpBoVYy++) {
        cout << "(" << x[pQ0gzc4[T4fDpBoVYy]] << "," << y[pQ0gzc4[T4fDpBoVYy]] << "," << C0cMUPh27r[pQ0gzc4[T4fDpBoVYy]] << ")-(" << x[Yl6L0Z5VMbWX[T4fDpBoVYy]] << "," << y[Yl6L0Z5VMbWX[T4fDpBoVYy]] << "," << C0cMUPh27r[Yl6L0Z5VMbWX[T4fDpBoVYy]] << ")=" << fixed << setprecision (2) << distance[T4fDpBoVYy] << endl;
    }
    return 0;
}

