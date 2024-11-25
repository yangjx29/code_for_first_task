int main () {
    int mfwOumsKBV;
    int Y24XknBO;
    int zgKyksSQB;
    int P98NpOweVUDJ;
    zgKyksSQB = 0;
    P98NpOweVUDJ = 0;
    double  okQ7lf [(827 - 787)];
    double  XXy6W7dU8qn [40];
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
    int ALESzym9XR;
    cout << endl;
    cin >> ALESzym9XR;
    for (int gu59Ierp = 0;
    gu59Ierp < ALESzym9XR; gu59Ierp = gu59Ierp + 1) {
        char K0O3Knj [10];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cin >> K0O3Knj;
        if (!strcmp (K0O3Knj, "male")) {
            cin >> okQ7lf[zgKyksSQB];
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
            zgKyksSQB++;
        }
        else {
            cin >> XXy6W7dU8qn[P98NpOweVUDJ];
            P98NpOweVUDJ++;
        };
    }
    for (mfwOumsKBV = 0; mfwOumsKBV < zgKyksSQB; mfwOumsKBV = mfwOumsKBV + 1) {
        Y24XknBO = mfwOumsKBV;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (Y24XknBO < zgKyksSQB) {
            if (okQ7lf[mfwOumsKBV] > okQ7lf[Y24XknBO]) {
                double  Y9usrkMITiow;
                Y9usrkMITiow = okQ7lf[mfwOumsKBV];
                okQ7lf[mfwOumsKBV] = okQ7lf[Y24XknBO];
                okQ7lf[Y24XknBO] = Y9usrkMITiow;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            Y24XknBO = Y24XknBO +1;
        };
    }
    for (mfwOumsKBV = 0; P98NpOweVUDJ > mfwOumsKBV; mfwOumsKBV++)
        for (Y24XknBO = mfwOumsKBV; Y24XknBO < P98NpOweVUDJ; Y24XknBO++)
            if (XXy6W7dU8qn[mfwOumsKBV] < XXy6W7dU8qn[Y24XknBO]) {
                double  Y9usrkMITiow;
                Y9usrkMITiow = XXy6W7dU8qn[mfwOumsKBV];
                XXy6W7dU8qn[mfwOumsKBV] = XXy6W7dU8qn[Y24XknBO];
                XXy6W7dU8qn[Y24XknBO] = Y9usrkMITiow;
            }
    for (mfwOumsKBV = 0; mfwOumsKBV < zgKyksSQB; mfwOumsKBV++)
        printf ("%.2lf ", okQ7lf[mfwOumsKBV]);
    for (mfwOumsKBV = 0; mfwOumsKBV < P98NpOweVUDJ -1; mfwOumsKBV++)
        printf ("%.2lf ", XXy6W7dU8qn[mfwOumsKBV]);
    printf ("%.2lf", XXy6W7dU8qn[P98NpOweVUDJ -1]);
    return 0;
}

