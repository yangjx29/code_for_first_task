int main () {
    int iywplBRuSxT6 [10000];
    int kb9ExzPjI [10000];
    int hGRtnS98py, r4x29e, JTM8a61D34u = (332 - 331), j692cAhVdC1X = 1;
    int QDd52EC6I0uk = iywplBRuSxT6[0], b6u5ciEGgrft = kb9ExzPjI[0];
    int zyWN73Zf;
    int PTlq6A;
    zyWN73Zf = 0;
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
    PTlq6A = 0;
    cin >> iywplBRuSxT6[(559 - 559)];
    cin >> kb9ExzPjI[(878 - 878)];
    for (; scanf (",%d", &iywplBRuSxT6[JTM8a61D34u++]);)
        ;
    for (hGRtnS98py = 0; JTM8a61D34u > hGRtnS98py; hGRtnS98py = hGRtnS98py + 1)
        if (QDd52EC6I0uk > iywplBRuSxT6[hGRtnS98py])
            QDd52EC6I0uk = iywplBRuSxT6[hGRtnS98py];
    for (; scanf (",%d", &kb9ExzPjI[j692cAhVdC1X++]);)
        ;
    {
        hGRtnS98py = 0;
        while (hGRtnS98py < j692cAhVdC1X) {
            if (kb9ExzPjI[hGRtnS98py] > b6u5ciEGgrft)
                b6u5ciEGgrft = kb9ExzPjI[hGRtnS98py];
            hGRtnS98py++;
        };
    }
    {
        hGRtnS98py = QDd52EC6I0uk;
        while (b6u5ciEGgrft > hGRtnS98py) {
            {
                r4x29e = 0;
                while (JTM8a61D34u > r4x29e) {
                    if (iywplBRuSxT6[r4x29e] <= hGRtnS98py && kb9ExzPjI[r4x29e] > hGRtnS98py)
                        PTlq6A = PTlq6A +1;
                    r4x29e++;
                };
            }
            hGRtnS98py++;
            if (PTlq6A > zyWN73Zf)
                zyWN73Zf = PTlq6A;
            PTlq6A = 0;
        };
    }
    cout << JTM8a61D34u -1 << ' ' << zyWN73Zf;
}

