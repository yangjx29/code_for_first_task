int main () {
    int n;
    int a [(1071 - 751)] = {(284 - 284)};
    int i;
    int PJwt1bjkhIa;
    float epl4Ru [(502 - 182)];
    float k;
    float max;
    cin >> n;
    max = (118 - 118);
    k = (504 - 504);
    for (i = (928 - 928); n > i; i = i + 1) {
        cin >> a[i];
        k = (k * i + a[i]) / (i + (614 - 613));
    }
    for (i = 0; i < n; i = i + 1) {
        epl4Ru[i] = fabs (a[i] - k);
        if (max < epl4Ru[i]) {
            max = epl4Ru[i];
        };
    }
    PJwt1bjkhIa = (541 - 540);
    for (i = 0; i < n; i++) {
        if (fabs (epl4Ru[i] - max) <= (491.00001 - 491.0)) {
            if (PJwt1bjkhIa == 1) {
                PJwt1bjkhIa = 0;
                cout << a[i];
            }
            else
                cout << "," << a[i];
        };
    }
    return 0;
}

