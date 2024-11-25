int GpxCGqv [35];
int WrniN5kqF;

int main () {
    int J1QmrXGitzsp [25];
    int z7alU5;
    int TOyKXRYSu;
    int nMax = -1;
    GpxCGqv[(344 - 343)] = 1;
    cin >> z7alU5;
    for (TOyKXRYSu = (463 - 463); TOyKXRYSu < z7alU5; TOyKXRYSu = TOyKXRYSu +1)
        cin >> J1QmrXGitzsp[TOyKXRYSu];
    for (TOyKXRYSu = 2; TOyKXRYSu <= z7alU5; TOyKXRYSu = TOyKXRYSu +1) {
        int WrniN5kqF;
        WrniN5kqF = (172 - 172);
        {
            int gglexFhZXUz = 1;
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
            }
            while (TOyKXRYSu > gglexFhZXUz) {
                if (J1QmrXGitzsp[TOyKXRYSu] < J1QmrXGitzsp[gglexFhZXUz]) {
                    if (WrniN5kqF < GpxCGqv[gglexFhZXUz])
                        WrniN5kqF = GpxCGqv[gglexFhZXUz];
                }
                gglexFhZXUz = gglexFhZXUz + 1;
            };
        }
        GpxCGqv[TOyKXRYSu] = WrniN5kqF +1;
    }
    {
        TOyKXRYSu = 1;
        while (TOyKXRYSu <= z7alU5) {
            if (nMax < GpxCGqv[TOyKXRYSu])
                nMax = GpxCGqv[TOyKXRYSu];
            TOyKXRYSu = TOyKXRYSu +1;
        };
    }
    cout << nMax << endl;
    return 0;
}

