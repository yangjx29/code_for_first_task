int main () {
    double  YQ7XuF9za = 0, PKg5PcQeVw = 0;
    int n = 0, shyLmg = 0, vz3bqyw = 0, yt23a4b09n = 0;
    int num [301];
    int GEDXtPBQT2yC [301];
    cin >> n;
    memset (num, 0, sizeof (num));
    for (shyLmg = 0; shyLmg < n; shyLmg = shyLmg + 1)
        cin >> num[shyLmg];
    for (shyLmg = 0; shyLmg < n; shyLmg++)
        vz3bqyw = vz3bqyw + num[shyLmg];
    YQ7XuF9za = (double ) vz3bqyw / n;
    for (shyLmg = 0; shyLmg < n; shyLmg++)
        if (fabs (num[shyLmg] - YQ7XuF9za) > PKg5PcQeVw)
            PKg5PcQeVw = fabs (num[shyLmg] - YQ7XuF9za);
    memset (GEDXtPBQT2yC, 0, sizeof (GEDXtPBQT2yC));
    for (shyLmg = 0; shyLmg < n; shyLmg++)
        if (fabs (fabs (num[shyLmg] - YQ7XuF9za) - PKg5PcQeVw) < 0.00001) {
            GEDXtPBQT2yC[yt23a4b09n] = num[shyLmg];
            yt23a4b09n++;
        }
    if (yt23a4b09n == 2) {
        if (GEDXtPBQT2yC[(590 - 589)] > GEDXtPBQT2yC[0])
            cout << GEDXtPBQT2yC[0] << "," << GEDXtPBQT2yC[1];
        else
            cout << GEDXtPBQT2yC[1] << "," << GEDXtPBQT2yC[0];
    }
    else
        cout << GEDXtPBQT2yC[0];
    return 0;
}

