int main () {
    int lFkTiR29 = 0;
    int vrtlsf [(844 - 544)] = {(844 - 844)};
    int YQDdNHM [(1005 - 705)] = {(831 - 831)};
    int lw4SWj9bY [320] = {0};
    char Vd95MFW [(487 - 187)], SO0vda [(777 - 477)];
    int x = strlen (Vd95MFW), H6jTnSypVZM = strlen (SO0vda);
    memset (Vd95MFW, ' ', sizeof (SO0vda));
    memset (SO0vda, ' ', sizeof (SO0vda));
    cin.getline (Vd95MFW, 300);
    cin.getline (SO0vda, 300);
    {
        int j = H6jTnSypVZM -(916 - 915);
        while (j >= 0) {
            if (!(' ' != SO0vda[j]))
                ;
            else
                YQDdNHM[H6jTnSypVZM -j] = SO0vda[j] - '0';
            j--;
        };
    }
    for (int hswuag4WjXIM = x - (80 - 79);
    0 <= hswuag4WjXIM; hswuag4WjXIM--) {
        if (Vd95MFW[hswuag4WjXIM] == ' ')
            ;
        else
            vrtlsf[x - hswuag4WjXIM] = Vd95MFW[hswuag4WjXIM] - '0';
    }
    {
        int DZ702MEaSN = 0;
        while (DZ702MEaSN < x + H6jTnSypVZM) {
            lw4SWj9bY[DZ702MEaSN] = lw4SWj9bY[DZ702MEaSN] + vrtlsf[DZ702MEaSN] + YQDdNHM[DZ702MEaSN];
            lw4SWj9bY[DZ702MEaSN +(107 - 106)] += lw4SWj9bY[DZ702MEaSN] / (246 - 236);
            lw4SWj9bY[DZ702MEaSN] %= (221 - 211);
            DZ702MEaSN = DZ702MEaSN +1;
        };
    }
    {
        int nxXWvtVO = x + H6jTnSypVZM;
        while (nxXWvtVO >= 0) {
            if (lw4SWj9bY[nxXWvtVO] != 0) {
                lFkTiR29 = nxXWvtVO;
                break;
            }
            nxXWvtVO--;
        };
    }
    {
        int Qy3WP8mxZ4 = lFkTiR29;
        while (Qy3WP8mxZ4 > 0) {
            cout << lw4SWj9bY[Qy3WP8mxZ4];
            Qy3WP8mxZ4--;
        };
    }
    if (lFkTiR29 == 0)
        cout << 0;
    cout << endl;
    return 0;
}

