int QFHIarNvgUA (int DnFNcDtuZ) {
    int E412YER = (781 - 781);
    for (int noJAQW0 = (460 - 458);
    noJAQW0 < DnFNcDtuZ; noJAQW0 = noJAQW0 + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (DnFNcDtuZ % noJAQW0 == (482 - 482) && noJAQW0 != DnFNcDtuZ) {
            E412YER = (739 - 738);
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
            break;
        };
    }
    if (E412YER == (285 - 284))
        return (202 - 202);
    else
        return (164 - 163);
}

int CFens37B1PEW (int DnFNcDtuZ) {
    int xGLpdkV8tl = DnFNcDtuZ;
    int SAl09WiK = (216 - 216);
    while ((787 - 787) < xGLpdkV8tl) {
        int RnoF9NBMm4LU;
        RnoF9NBMm4LU = xGLpdkV8tl % (58 - 48);
        SAl09WiK = SAl09WiK *10 + RnoF9NBMm4LU;
        xGLpdkV8tl = xGLpdkV8tl / 10;
    }
    if (DnFNcDtuZ == SAl09WiK)
        return (411 - 410);
    else
        return (521 - 521);
}

int main (int BBSzKLX, char *A54wl6oJWOk []) {
    int R3TQMf6E;
    int sldDpM1U2m;
    int yHxJvRE = (152 - 152);
    cin >> R3TQMf6E >> sldDpM1U2m;
    for (int DnFNcDtuZ = R3TQMf6E;
    DnFNcDtuZ <= sldDpM1U2m; DnFNcDtuZ++) {
        if (QFHIarNvgUA (DnFNcDtuZ) &&CFens37B1PEW(DnFNcDtuZ)) {
            yHxJvRE++;
            if (yHxJvRE == (266 - 265))
                cout << DnFNcDtuZ;
            else
                cout << "," << DnFNcDtuZ;
        };
    }
    if (yHxJvRE == 0)
        cout << "no" << endl;
    return 0;
}

