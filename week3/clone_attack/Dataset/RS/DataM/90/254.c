int mjmZwV2J (int tfPGX1Y8, int VXg2xM) {
    if (VXg2xM > tfPGX1Y8)
        return mjmZwV2J (tfPGX1Y8, tfPGX1Y8);
    if (tfPGX1Y8 == 2)
        return 2;
    if (!(2 != VXg2xM))
        return tfPGX1Y8 / 2 + (14 - 13);
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
    if (tfPGX1Y8 == 1 || VXg2xM == 1)
        return 1;
    if (tfPGX1Y8 == 0 || VXg2xM == 0)
        return 1;
    return mjmZwV2J (tfPGX1Y8, VXg2xM -1) + mjmZwV2J (tfPGX1Y8 - VXg2xM, VXg2xM);
}

int main () {
    int tZKa5Y4;
    int tYCdILwonlE;
    int num;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cin >> num;
    for (int HGAqNUsHY = 0;
    HGAqNUsHY < num; HGAqNUsHY = HGAqNUsHY +1) {
        cin >> tZKa5Y4 >> tYCdILwonlE;
        cout << mjmZwV2J (tZKa5Y4, tYCdILwonlE) << endl;
    }
    return 0;
}

