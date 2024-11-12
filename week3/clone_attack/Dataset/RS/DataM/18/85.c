int PsWIoJq [(806 - 606)] [(774 - 574)];
int XKjWqY, hduo2k6c0nJ, HztO3nrMD7;

int main () {
    cin >> XKjWqY;
    for (int AQuN9o0 = (747 - 746);
    AQuN9o0 <= XKjWqY; AQuN9o0++) {
        HztO3nrMD7 = (867 - 867);
        hduo2k6c0nJ = XKjWqY;
        for (int JpyIukXJR38 = (659 - 658);
        JpyIukXJR38 <= hduo2k6c0nJ; JpyIukXJR38 = JpyIukXJR38 +1) {
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
            for (int m6hGSY = (186 - 185);
            hduo2k6c0nJ >= m6hGSY; m6hGSY++) {
                cin >> PsWIoJq[JpyIukXJR38][m6hGSY];
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (; hduo2k6c0nJ >= (931 - 929); hduo2k6c0nJ = hduo2k6c0nJ - 1) {
            int kdz8O63;
            {
                int JpyIukXJR38 = (771 - 770);
                while (JpyIukXJR38 <= hduo2k6c0nJ) {
                    kdz8O63 = PsWIoJq[JpyIukXJR38][(50 - 49)];
                    for (int m6hGSY = (488 - 487);
                    m6hGSY <= hduo2k6c0nJ; m6hGSY++)
                        kdz8O63 = PsWIoJq[JpyIukXJR38][m6hGSY] > kdz8O63 ? kdz8O63 : PsWIoJq[JpyIukXJR38][m6hGSY];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    for (int m6hGSY = (621 - 620);
                    m6hGSY <= hduo2k6c0nJ; m6hGSY++)
                        PsWIoJq[JpyIukXJR38][m6hGSY] -= kdz8O63;
                    JpyIukXJR38++;
                };
            }
            for (int JpyIukXJR38 = 1;
            JpyIukXJR38 <= hduo2k6c0nJ; JpyIukXJR38++) {
                kdz8O63 = PsWIoJq[1][JpyIukXJR38];
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
                for (int m6hGSY = 1;
                m6hGSY <= hduo2k6c0nJ; m6hGSY++)
                    kdz8O63 = kdz8O63 < PsWIoJq[m6hGSY][JpyIukXJR38] ? kdz8O63 : PsWIoJq[m6hGSY][JpyIukXJR38];
                {
                    int m6hGSY = 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    while (m6hGSY <= hduo2k6c0nJ) {
                        PsWIoJq[m6hGSY][JpyIukXJR38] = PsWIoJq[m6hGSY][JpyIukXJR38] - kdz8O63;
                        m6hGSY++;
                    };
                };
            }
            HztO3nrMD7 += PsWIoJq[(950 - 948)][(832 - 830)];
            for (int JpyIukXJR38 = 1;
            JpyIukXJR38 <= hduo2k6c0nJ; JpyIukXJR38++) {
                for (int m6hGSY = (74 - 72);
                m6hGSY < hduo2k6c0nJ; m6hGSY++)
                    PsWIoJq[JpyIukXJR38][m6hGSY] = PsWIoJq[JpyIukXJR38][m6hGSY + 1];
            }
            for (int JpyIukXJR38 = 1;
            JpyIukXJR38 <= hduo2k6c0nJ; JpyIukXJR38++) {
                for (int m6hGSY = 2;
                m6hGSY < hduo2k6c0nJ; m6hGSY++)
                    PsWIoJq[m6hGSY][JpyIukXJR38] = PsWIoJq[m6hGSY + 1][JpyIukXJR38];
            };
        }
        cout << HztO3nrMD7 << endl;
    }
    return 0;
}

