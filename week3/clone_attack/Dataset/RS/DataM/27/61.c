int main () {
    double  v1TI20s57;
    double  y7mykeJ8hcKj;
    double  rWaIfRj9;
    double  delta;
    double  dB2Tuyh5k;
    double  x2;
    double  mAkQLdCoDE;
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
    double  RKyURM8VjEg;
    int tTeoWpZ;
    cin >> tTeoWpZ;
    for (int fsbL79OZ = 1;
    fsbL79OZ <= tTeoWpZ; fsbL79OZ = fsbL79OZ + 1) {
        cin >> v1TI20s57 >> y7mykeJ8hcKj >> rWaIfRj9;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        delta = y7mykeJ8hcKj * y7mykeJ8hcKj - 4 * v1TI20s57 * rWaIfRj9;
        if (delta > 0) {
            dB2Tuyh5k = (-y7mykeJ8hcKj + sqrt (delta)) / (2 * v1TI20s57);
            x2 = (-y7mykeJ8hcKj - sqrt (delta)) / (2 * v1TI20s57);
            cout << "x1=";
            printf ("%.5f", dB2Tuyh5k);
            cout << ";x2=";
            printf ("%.5f\n", x2);
            cout << endl;
        }
        else {
            if (delta == 0) {
                dB2Tuyh5k = (-y7mykeJ8hcKj) / (2 * v1TI20s57);
                cout << "x1=x2=";
                cout << endl;
                printf ("%.5f", dB2Tuyh5k);
            }
            else {
                mAkQLdCoDE = (-y7mykeJ8hcKj) / (2 * v1TI20s57);
                delta = -delta;
                RKyURM8VjEg = (sqrt (delta)) / (2 * v1TI20s57);
                if (mAkQLdCoDE == 0) {
                    mAkQLdCoDE = abs (mAkQLdCoDE);
                }
                cout << "x1=";
                printf ("%.5f", mAkQLdCoDE);
                cout << "+";
                cout << "i;x2=";
                cout << "-";
                cout << "i" << endl;
                printf ("%.5f", RKyURM8VjEg);
                printf ("%.5f", mAkQLdCoDE);
                printf ("%.5f", RKyURM8VjEg);
            };
        };
    }
    return 0;
}

