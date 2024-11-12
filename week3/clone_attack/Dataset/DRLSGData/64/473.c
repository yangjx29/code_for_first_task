int main () {
    int RmgYs6AJo [(644 - 634)], AUtd8J [10], Ej4VbJvFqk [10];
    float P1HzCe [100] [3];
    float gT5pw86 [100] [3];
    float qWpOXkK;
    float WyLGRTSIi04 [100];
    int wmrbiAz;
    int livFyT5euQD;
    int W93PC0QYx;
    int LI1tfSZ;
    int bLSfT8;
    int D7HTzQg;
    int K8JVgIheBK;
    cin >> LI1tfSZ;
    for (D7HTzQg = 0; LI1tfSZ > D7HTzQg; D7HTzQg++)
        cin >> RmgYs6AJo[D7HTzQg] >> AUtd8J[D7HTzQg] >> Ej4VbJvFqk[D7HTzQg];
    K8JVgIheBK = 0;
    {
        {
            if (0) {
                {
                    if (0) {
                        return 0;
                    }
                }
                return 0;
            }
        }
        D7HTzQg = 0;
        for (; LI1tfSZ -(894 - 893) > D7HTzQg;) {
            {
                bLSfT8 = D7HTzQg +1;
                for (; LI1tfSZ > bLSfT8;) {
                    gT5pw86[K8JVgIheBK][0] = RmgYs6AJo[D7HTzQg];
                    gT5pw86[K8JVgIheBK][1] = AUtd8J[D7HTzQg];
                    gT5pw86[K8JVgIheBK][2] = Ej4VbJvFqk[D7HTzQg];
                    P1HzCe[K8JVgIheBK][0] = RmgYs6AJo[bLSfT8];
                    P1HzCe[K8JVgIheBK][1] = AUtd8J[bLSfT8];
                    P1HzCe[K8JVgIheBK][2] = Ej4VbJvFqk[bLSfT8];
                    WyLGRTSIi04[K8JVgIheBK] = sqrt ((gT5pw86[K8JVgIheBK][0] - P1HzCe[K8JVgIheBK][0]) * (gT5pw86[K8JVgIheBK][0] - P1HzCe[K8JVgIheBK][0]) + (gT5pw86[K8JVgIheBK][1] - P1HzCe[K8JVgIheBK][1]) * (gT5pw86[K8JVgIheBK][1] - P1HzCe[K8JVgIheBK][1]) + (gT5pw86[K8JVgIheBK][2] - P1HzCe[K8JVgIheBK][2]) * (gT5pw86[K8JVgIheBK][2] - P1HzCe[K8JVgIheBK][2]));
                    bLSfT8++;
                    K8JVgIheBK++;
                }
            }
            D7HTzQg++;
        }
    }
    {
        {
            if (0) {
                return 0;
            }
        }
        bLSfT8 = 0;
        for (; K8JVgIheBK -1 > bLSfT8;) {
            {
                D7HTzQg = 0;
                for (; D7HTzQg < K8JVgIheBK -1 - bLSfT8;) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    if (WyLGRTSIi04[D7HTzQg +1] > WyLGRTSIi04[D7HTzQg]) {
                        qWpOXkK = WyLGRTSIi04[D7HTzQg];
                        WyLGRTSIi04[D7HTzQg] = WyLGRTSIi04[D7HTzQg +1];
                        WyLGRTSIi04[D7HTzQg +1] = qWpOXkK;
                        {
                            W93PC0QYx = 0;
                            for (; 3 > W93PC0QYx;) {
                                livFyT5euQD = gT5pw86[D7HTzQg][W93PC0QYx];
                                gT5pw86[D7HTzQg][W93PC0QYx] = gT5pw86[D7HTzQg +1][W93PC0QYx];
                                gT5pw86[D7HTzQg +1][W93PC0QYx] = livFyT5euQD;
                                wmrbiAz = P1HzCe[D7HTzQg][W93PC0QYx];
                                P1HzCe[D7HTzQg][W93PC0QYx] = P1HzCe[D7HTzQg +1][W93PC0QYx];
                                P1HzCe[D7HTzQg +1][W93PC0QYx] = wmrbiAz;
                                W93PC0QYx = W93PC0QYx +1;
                            }
                        }
                    }
                    D7HTzQg++;
                }
            }
            bLSfT8++;
        }
    }
    {
        D7HTzQg = 0;
        for (; K8JVgIheBK > D7HTzQg;) {
            cout << fixed << setprecision (0) << "(" << gT5pw86[D7HTzQg][0] << "," << gT5pw86[D7HTzQg][1] << "," << gT5pw86[D7HTzQg][2] << ")-(" << P1HzCe[D7HTzQg][0] << "," << P1HzCe[D7HTzQg][1] << "," << P1HzCe[D7HTzQg][2] << ")=" << fixed << setprecision (2) << WyLGRTSIi04[D7HTzQg] << endl;
            D7HTzQg++;
        }
    }
    return 0;
}

