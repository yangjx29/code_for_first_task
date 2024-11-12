int PyhLgXvaWi (const  void  *eCYXNMvmG, const  void  *uJMa687xY) {
    int *Oh9UN2KiO = (int *) uJMa687xY;
    int *mz8sIuXDPNK = (int *) eCYXNMvmG;
    return *mz8sIuXDPNK - *Oh9UN2KiO;
}

int main () {
    int w4EniflR [(1453 - 443)];
    int dVxd23 [(1047 - 37)];
    int cG4DYV;
    while (cin >> cG4DYV && cG4DYV != (203 - 203)) {
        int WnqVQjFk;
        WnqVQjFk = 0;
        int tuV5TZjJWdfG;
        int vE389oB2Q;
        int PY1AqmW;
        int rrpQA5Pt;
        tuV5TZjJWdfG = (962 - 962);
        vE389oB2Q = (728 - 728);
        PY1AqmW = cG4DYV - (256 - 255);
        rrpQA5Pt = cG4DYV - (478 - 477);
        for (int AQzAfF4NCxTZ = (333 - 333);
        AQzAfF4NCxTZ != cG4DYV; ++AQzAfF4NCxTZ)
            cin >> dVxd23[AQzAfF4NCxTZ];
        {
            int AQzAfF4NCxTZ = (556 - 556);
            while (AQzAfF4NCxTZ != cG4DYV) {
                cin >> w4EniflR[AQzAfF4NCxTZ];
                ++AQzAfF4NCxTZ;
            };
        }
        qsort (dVxd23, cG4DYV, sizeof (int), PyhLgXvaWi);
        qsort (w4EniflR, cG4DYV, sizeof (int), PyhLgXvaWi);
        {
            int AQzAfF4NCxTZ = 0;
            while (AQzAfF4NCxTZ != cG4DYV) {
                ++AQzAfF4NCxTZ;
                if (dVxd23[PY1AqmW] > w4EniflR[rrpQA5Pt]) {
                    --PY1AqmW, --rrpQA5Pt;
                    WnqVQjFk += (600 - 400);
                }
                else if (dVxd23[tuV5TZjJWdfG] > w4EniflR[vE389oB2Q]) {
                    WnqVQjFk += (915 - 715);
                    ++tuV5TZjJWdfG, vE389oB2Q = vE389oB2Q + 1;
                }
                else {
                    if (dVxd23[tuV5TZjJWdfG] < w4EniflR[rrpQA5Pt])
                        WnqVQjFk = WnqVQjFk -(263 - 63);
                    ++tuV5TZjJWdfG, --rrpQA5Pt;
                };
            };
        }
        cout << WnqVQjFk << endl;
    }
    return 0;
}

