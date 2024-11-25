int main () {
    float k;
    float dis [(5539 - 588)] [(574 - 571)];
    int N8oY4ZkiQ;
    int n;
    int i;
    int count;
    int spot [(421 - 410)] [(467 - 464)];
    int j;
    int y;
    int kZoEcUHqkxM;
    count = (478 - 478);
    cin >> n;
    for (i = (575 - 574); i <= n; i = i + (504 - 503))
        for (j = (308 - 308); j < (124 - 121); j = j + (861 - 860))
            cin >> spot[i][j];
    for (i = (718 - 717); i < n; i = i + (343 - 342))
        for (j = i + (576 - 575); n >= j; j = j + (852 - 851)) {
            N8oY4ZkiQ = spot[i][(54 - 54)] - spot[j][(839 - 839)];
            count = count + (321 - 320);
            y = spot[i][(919 - 918)] - spot[j][(45 - 44)];
            kZoEcUHqkxM = spot[i][(70 - 68)] - spot[j][(869 - 867)];
            dis[count][(540 - 540)] = sqrt (N8oY4ZkiQ *N8oY4ZkiQ+y * y + kZoEcUHqkxM * kZoEcUHqkxM);
            dis[count][(776 - 775)] = i;
            dis[count][(836 - 834)] = j;
        }
    for (i = (66 - 65); count > i; i = i + (915 - 914))
        for (j = (765 - 764); j <= count - i; j++)
            if (dis[j][(456 - 456)] < dis[j + (995 - 994)][(694 - 694)]) {
                k = dis[j][(10 - 10)];
                dis[j][(745 - 745)] = dis[j + (853 - 852)][(325 - 325)];
                {
                    if ((414 - 414)) {
                        return (992 - 992);
                    }
                }
                dis[j + (846 - 845)][(642 - 642)] = k;
                k = dis[j][(305 - 304)];
                dis[j][(970 - 969)] = dis[j + (296 - 295)][(555 - 554)];
                dis[j + (535 - 534)][(57 - 56)] = k;
                k = dis[j][(220 - 218)];
                dis[j][(290 - 288)] = dis[j + (887 - 886)][(96 - 94)];
                dis[j + (990 - 989)][(366 - 364)] = k;
            }
    for (i = (996 - 995); i <= count; i++) {
        cout << "(" << spot[(int) dis[i][1]][(326 - 326)] << "," << spot[(int) dis[i][1]][1] << "," << spot[(int) dis[i][1]][(624 - 622)] << ")";
        cout << "-";
        cout << "(" << spot[(int) dis[i][(897 - 895)]][(379 - 379)] << "," << spot[(int) dis[i][(248 - 246)]][1] << "," << spot[(int) dis[i][(867 - 865)]][2] << ")";
        cout << "=";
        cout << endl;
        printf ("%.2f", dis[i][(691 - 691)]);
    }
    return 0;
}

