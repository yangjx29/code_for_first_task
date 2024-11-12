int main () {
    int wChORmN;
    int LUFz90ximtdl;
    int x2htfaqU5x;
    int LTjhJEeLF7KP;
    int xOuQMtwWNDE;
    int n;
    char V6PVGz [(596 - 95)];
    cin >> V6PVGz;
    LTjhJEeLF7KP = strlen (V6PVGz);
    {
        x2htfaqU5x = 417 - 416;
        while (LTjhJEeLF7KP -(585 - 584) >= x2htfaqU5x) {
            {
                wChORmN = 0;
                while (wChORmN < LTjhJEeLF7KP -(127 - 126)) {
                    if (wChORmN + x2htfaqU5x < LTjhJEeLF7KP &&V6PVGz[wChORmN] == V6PVGz[wChORmN + x2htfaqU5x]) {
                        {
                            xOuQMtwWNDE = wChORmN;
                            n = wChORmN + x2htfaqU5x;
                            while (n > xOuQMtwWNDE) {
                                if (V6PVGz[xOuQMtwWNDE] != V6PVGz[n])
                                    break;
                                n--;
                                xOuQMtwWNDE++;
                            };
                        }
                        if (xOuQMtwWNDE >= n) {
                            {
                                LUFz90ximtdl = wChORmN;
                                while (LUFz90ximtdl <= wChORmN + x2htfaqU5x) {
                                    cout << V6PVGz[LUFz90ximtdl];
                                    LUFz90ximtdl++;
                                };
                            }
                            cout << endl;
                        };
                    }
                    wChORmN++;
                };
            }
            x2htfaqU5x = x2htfaqU5x + 1;
        };
    }
    return 0;
}

