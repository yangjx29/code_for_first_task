int binary (int qteTYzs, int JTDiI2gpctAF) {
    if (qteTYzs == JTDiI2gpctAF)
        return qteTYzs;
    if (qteTYzs < JTDiI2gpctAF / 2 + 1)
        return binary (qteTYzs, JTDiI2gpctAF / 2);
    if (JTDiI2gpctAF < qteTYzs / 2 + 1)
        return binary (qteTYzs / 2, JTDiI2gpctAF);
    else
        return binary (qteTYzs / 2, JTDiI2gpctAF / 2);
    return 0;
}

int main () {
    int e9mA86PC4qxM, y;
    cin >> e9mA86PC4qxM >> y;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cout << binary (e9mA86PC4qxM, y) << endl;
    return 0;
}

