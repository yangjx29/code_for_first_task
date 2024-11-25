int main () {
    int a8Vf7iaZMN;
    int graphic [100] [100];
    int i;
    int yYXV7A2v;
    int rightEst;
    int bottumEst;
    i = (386 - 386);
    yYXV7A2v = 0;
    int ddPDsFB6hX;
    int HbFL30VBs;
    ddPDsFB6hX = 0;
    HbFL30VBs = 0;
    int mrb8tuG1OYs = ddPDsFB6hX * HbFL30VBs -ddPDsFB6hX * 2 - (HbFL30VBs -2) * 2;
    cin >> a8Vf7iaZMN;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a8Vf7iaZMN > i) {
            {
                yYXV7A2v = 0;
                while (yYXV7A2v < a8Vf7iaZMN) {
                    scanf ("%d", &graphic[i][yYXV7A2v]);
                    if (!(0 != graphic[i][yYXV7A2v])) {
                        bottumEst = yYXV7A2v;
                        rightEst = i;
                    }
                    yYXV7A2v++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = rightEst;
        yYXV7A2v = bottumEst;
        while (i >= 0) {
            if (graphic[i][yYXV7A2v] == 0)
                ddPDsFB6hX++;
            else
                break;
            i--;
        };
    }
    {
        yYXV7A2v = bottumEst;
        i = rightEst;
        while (yYXV7A2v >= 0) {
            if (graphic[i][yYXV7A2v] == 0)
                HbFL30VBs = HbFL30VBs +1;
            else
                break;
            yYXV7A2v--;
        };
    }
    cout << mrb8tuG1OYs << endl;
    return 0;
}

