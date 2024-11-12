int main () {
    int bPqjcJY2b, vso5Sxgay, HEvOFQl, ZMQvdV25G;
    int MFOA8RVs9, Jk4bNJ6g, BDKNqlk, j2, WfBMu8gZ, co4dUm, yMi2tmWg47Zu;
    int VIovjEs [101] [101], VSNw6s [101] [101], c [101] [101];
    cin >> bPqjcJY2b >> HEvOFQl;
    {
        MFOA8RVs9 = 249 - 249;
        while (MFOA8RVs9 < bPqjcJY2b) {
            {
                Jk4bNJ6g = 0;
                while (HEvOFQl > Jk4bNJ6g) {
                    cin >> VIovjEs[MFOA8RVs9][Jk4bNJ6g];
                    Jk4bNJ6g++;
                };
            }
            MFOA8RVs9++;
        };
    }
    cin >> vso5Sxgay >> ZMQvdV25G;
    {
        BDKNqlk = 0;
        while (BDKNqlk < vso5Sxgay) {
            for (j2 = 0; j2 < ZMQvdV25G; j2++) {
                cin >> VSNw6s[BDKNqlk][j2];
            }
            BDKNqlk++;
        };
    }
    {
        WfBMu8gZ = 0;
        while (WfBMu8gZ < bPqjcJY2b) {
            for (co4dUm = 0; co4dUm < ZMQvdV25G; co4dUm++) {
                c[WfBMu8gZ][co4dUm] = 0;
                {
                    yMi2tmWg47Zu = 0;
                    while (vso5Sxgay > yMi2tmWg47Zu) {
                        c[WfBMu8gZ][co4dUm] = c[WfBMu8gZ][co4dUm] + VIovjEs[WfBMu8gZ][yMi2tmWg47Zu] * VSNw6s[yMi2tmWg47Zu][co4dUm];
                        yMi2tmWg47Zu++;
                    };
                };
            }
            {
                co4dUm = 0;
                while (co4dUm < ZMQvdV25G -1) {
                    cout << c[WfBMu8gZ][co4dUm] << " ";
                    co4dUm++;
                };
            }
            cout << c[WfBMu8gZ][ZMQvdV25G -1] << endl;
            WfBMu8gZ++;
        };
    }
    return 0;
}

