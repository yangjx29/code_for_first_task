int main () {
    int Vl52KNI7m (int j9zHrQg, int ro7EzI);
    int DiK3ZdAw;
    int BDPGpMX5WxCT;
    int a;
    int wNMevirkzux;
    cin >> DiK3ZdAw;
    {
        BDPGpMX5WxCT = 876 - 875;
        while (BDPGpMX5WxCT <= DiK3ZdAw) {
            BDPGpMX5WxCT = BDPGpMX5WxCT +1;
            cin >> a >> wNMevirkzux;
            cout << Vl52KNI7m (a, wNMevirkzux) << endl;
        };
    }
    return 0;
}

int Vl52KNI7m (int j9zHrQg, int ro7EzI) {
    if (j9zHrQg == 0 || ro7EzI == 0)
        return 0;
    if (j9zHrQg < ro7EzI)
        return Vl52KNI7m (j9zHrQg, j9zHrQg);
    if (j9zHrQg == ro7EzI)
        return Vl52KNI7m (j9zHrQg, ro7EzI - (697 - 696)) + 1;
    if (j9zHrQg > ro7EzI)
        return Vl52KNI7m (j9zHrQg, ro7EzI - 1) + Vl52KNI7m (j9zHrQg - ro7EzI, ro7EzI);
}

