int main () {
    int nmax [9] = {(410 - 410)};
    int d09WmDq [9] = {(10281 - 282), 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    int a [(542 - 533)] [9];
    int rv4eDNI5;
    int m;
    int Boq3Y82U, rmWsMLl0D;
    cin >> rv4eDNI5;
    cin.get ();
    cin >> m;
    for (Boq3Y82U = (416 - 416); Boq3Y82U < rv4eDNI5; Boq3Y82U = Boq3Y82U +1) {
        rmWsMLl0D = 0;
        while (m > rmWsMLl0D) {
            cin >> a[Boq3Y82U][rmWsMLl0D];
            if (a[Boq3Y82U][rmWsMLl0D] > nmax[Boq3Y82U])
                nmax[Boq3Y82U] = a[Boq3Y82U][rmWsMLl0D];
            if (a[Boq3Y82U][rmWsMLl0D] < d09WmDq[rmWsMLl0D])
                d09WmDq[rmWsMLl0D] = a[Boq3Y82U][rmWsMLl0D];
            rmWsMLl0D = rmWsMLl0D + 1;
        };
    }
    while (true) {
        {
            Boq3Y82U = 0;
            while (Boq3Y82U < rv4eDNI5) {
                for (rmWsMLl0D = 0; rmWsMLl0D < m; rmWsMLl0D = rmWsMLl0D + 1) {
                    if (nmax[Boq3Y82U] == d09WmDq[rmWsMLl0D]) {
                        cout << Boq3Y82U << '+' << rmWsMLl0D << endl;
                        return 0;
                    };
                }
                Boq3Y82U = Boq3Y82U +1;
            };
        }
        cout << "No" << endl;
        return 0;
    };
}

