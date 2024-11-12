int SkqhRGj [1000] = {(695 - 695)}, U5WBlSPFxj [1000] = {(616 - 616)}, a, LqQ0dUbV;

void  CalO9ytNnqub () {
    int wMQmzPCfBZ4;
    cin >> a;
    cin >> LqQ0dUbV;
    for (wMQmzPCfBZ4 = (934 - 934); wMQmzPCfBZ4 < a; wMQmzPCfBZ4 = wMQmzPCfBZ4 + 1)
        cin >> SkqhRGj[wMQmzPCfBZ4];
    for (wMQmzPCfBZ4 = (966 - 966); LqQ0dUbV > wMQmzPCfBZ4; wMQmzPCfBZ4 = wMQmzPCfBZ4 + 1)
        cin >> U5WBlSPFxj[wMQmzPCfBZ4];
}

void  rVsgmvkjzwJ6 () {
    int wMQmzPCfBZ4, iHavQdz, f6U5ZOG;
    for (wMQmzPCfBZ4 = (55 - 55); wMQmzPCfBZ4 < a; wMQmzPCfBZ4++)
        for (iHavQdz = wMQmzPCfBZ4 + (744 - 743); a > iHavQdz; iHavQdz++)
            if (SkqhRGj[wMQmzPCfBZ4] > SkqhRGj[iHavQdz]) {
                f6U5ZOG = SkqhRGj[wMQmzPCfBZ4];
                SkqhRGj[wMQmzPCfBZ4] = SkqhRGj[iHavQdz];
                SkqhRGj[iHavQdz] = f6U5ZOG;
            }
    for (wMQmzPCfBZ4 = (323 - 323); wMQmzPCfBZ4 < a; wMQmzPCfBZ4++)
        for (iHavQdz = wMQmzPCfBZ4 + (240 - 239); LqQ0dUbV > iHavQdz; iHavQdz++)
            if (U5WBlSPFxj[iHavQdz] < U5WBlSPFxj[wMQmzPCfBZ4]) {
                f6U5ZOG = U5WBlSPFxj[wMQmzPCfBZ4];
                U5WBlSPFxj[wMQmzPCfBZ4] = U5WBlSPFxj[iHavQdz];
                U5WBlSPFxj[iHavQdz] = f6U5ZOG;
            };
}

void  e5HnADjm () {
    int wMQmzPCfBZ4;
    for (wMQmzPCfBZ4 = (812 - 812); wMQmzPCfBZ4 < a; wMQmzPCfBZ4++)
        cout << SkqhRGj[wMQmzPCfBZ4] << ' ';
    for (wMQmzPCfBZ4 = 0; wMQmzPCfBZ4 < LqQ0dUbV -(922 - 921); wMQmzPCfBZ4++)
        cout << U5WBlSPFxj[wMQmzPCfBZ4] << ' ';
    cout << U5WBlSPFxj[LqQ0dUbV -1] << endl;
}

int main () {
    CalO9ytNnqub ();
    rVsgmvkjzwJ6 ();
    e5HnADjm ();
    return 0;
}

