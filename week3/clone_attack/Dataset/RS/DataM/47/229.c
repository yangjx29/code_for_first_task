int main () {
    int mBTUPi7eG;
    int NdtFOzh;
    int W1FcqabHz [100];
    int MrJaOL0Mw [100];
    cin >> mBTUPi7eG;
    for (NdtFOzh = 0; mBTUPi7eG > NdtFOzh; NdtFOzh = NdtFOzh +1) {
        cin >> W1FcqabHz[NdtFOzh];
    }
    for (NdtFOzh = 0; NdtFOzh < mBTUPi7eG; NdtFOzh = NdtFOzh +1) {
        MrJaOL0Mw[mBTUPi7eG - 1 - NdtFOzh] = W1FcqabHz[NdtFOzh];
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
        };
    }
    for (NdtFOzh = 0; mBTUPi7eG - 1 > NdtFOzh; NdtFOzh++) {
        cout << MrJaOL0Mw[NdtFOzh] << " ";
    }
    cout << MrJaOL0Mw[NdtFOzh] << endl;
    return 0;
}

