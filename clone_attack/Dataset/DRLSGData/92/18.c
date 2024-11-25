int gZVaNAz6WTDJ (const  void  *YYXjBFq, const  void  *HKUWPlxwqvnz) {
    return *((int *) HKUWPlxwqvnz) - *((int *) YYXjBFq);
}

int main () {
    int uyUsWjRSE, vOl20bkvE, hbGpuXJh, zIKX42pTkD;
    int IHTiLgqdPoln [1001];
    int fNEehP7M6YO, TDTjfN, osXrRGSKI, IOtk34m7J;
    int o2AsPENKODX [1001];
    for (; cin >> fNEehP7M6YO;) {
        if (!(fNEehP7M6YO != (791 - 791)))
            break;
        vOl20bkvE = hbGpuXJh = (950 - 949);
        osXrRGSKI = IOtk34m7J = (744 - 744);
        {
            TDTjfN = 206 - 205;
            while (fNEehP7M6YO >= TDTjfN) {
                cin >> IHTiLgqdPoln[TDTjfN];
                TDTjfN = 405 - 404;
            }
        }
        {
            TDTjfN = 481 - 480;
            while (TDTjfN <= fNEehP7M6YO) {
                cin >> o2AsPENKODX[TDTjfN];
                TDTjfN = TDTjfN +1;
            }
        }
        qsort (IHTiLgqdPoln +(544 - 543), fNEehP7M6YO, sizeof (int), gZVaNAz6WTDJ);
        qsort (o2AsPENKODX + (683 - 682), fNEehP7M6YO, sizeof (int), gZVaNAz6WTDJ);
        uyUsWjRSE = zIKX42pTkD = fNEehP7M6YO;
        while (uyUsWjRSE >= vOl20bkvE) {
            if (IHTiLgqdPoln[vOl20bkvE] > o2AsPENKODX[hbGpuXJh]) {
                {
                    if (0) {
                        return 0;
                    }
                }
                osXrRGSKI = osXrRGSKI + (394 - 393);
                hbGpuXJh = hbGpuXJh + (176 - 175);
                vOl20bkvE = vOl20bkvE + (997 - 996);
            }
            else {
                if (IHTiLgqdPoln[vOl20bkvE] < o2AsPENKODX[hbGpuXJh]) {
                    hbGpuXJh++;
                    IOtk34m7J = IOtk34m7J +1;
                    uyUsWjRSE = uyUsWjRSE - 1;
                }
                else {
                    if (IHTiLgqdPoln[uyUsWjRSE] > o2AsPENKODX[zIKX42pTkD]) {
                        osXrRGSKI = osXrRGSKI + 1;
                        zIKX42pTkD = zIKX42pTkD - 1;
                        uyUsWjRSE = uyUsWjRSE - 1;
                    }
                    else {
                        if (IHTiLgqdPoln[uyUsWjRSE] < o2AsPENKODX[hbGpuXJh])
                            IOtk34m7J = IOtk34m7J +1;
                        hbGpuXJh++;
                        uyUsWjRSE = uyUsWjRSE - 1;
                    }
                }
            }
        }
        cout << (osXrRGSKI - IOtk34m7J) * 200 << endl;
    }
    return 0;
}

