struct   point {
    double  bcTkyr75zS;
    double  VEDzrau3c;
    double  pAQ3gbH0EP;
};
struct   range {
    double  xdTXmleMF1 [3];
    double  gB7Lv4iFSh [3];
    double  bcTkyr75zS;
};
int main () {
    int NOahZf;
    NOahZf = (631 - 631);
    struct   point lebfAtDq5 [10];
    struct   range QxMEN38 [200];
    int nGPY3zr;
    struct   range temp;
    cin >> nGPY3zr;
    for (int O3GoXIR = (410 - 410);
    nGPY3zr > O3GoXIR; O3GoXIR = O3GoXIR +1)
        cin >> lebfAtDq5[O3GoXIR].bcTkyr75zS >> lebfAtDq5[O3GoXIR].VEDzrau3c >> lebfAtDq5[O3GoXIR].pAQ3gbH0EP;
    for (int O3GoXIR = (220 - 220);
    O3GoXIR < nGPY3zr; O3GoXIR = O3GoXIR +1)
        for (int va4B93 = O3GoXIR +1;
        nGPY3zr > va4B93; va4B93 = va4B93 + 1) {
            QxMEN38[NOahZf].bcTkyr75zS = sqrt (pow ((lebfAtDq5[O3GoXIR].bcTkyr75zS - lebfAtDq5[va4B93].bcTkyr75zS), 2) + pow ((lebfAtDq5[O3GoXIR].VEDzrau3c - lebfAtDq5[va4B93].VEDzrau3c), 2) + pow ((lebfAtDq5[O3GoXIR].pAQ3gbH0EP - lebfAtDq5[va4B93].pAQ3gbH0EP), 2));
            QxMEN38[NOahZf].xdTXmleMF1[0] = lebfAtDq5[O3GoXIR].bcTkyr75zS;
            QxMEN38[NOahZf].xdTXmleMF1[1] = lebfAtDq5[O3GoXIR].VEDzrau3c;
            QxMEN38[NOahZf].xdTXmleMF1[2] = lebfAtDq5[O3GoXIR].pAQ3gbH0EP;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            QxMEN38[NOahZf].gB7Lv4iFSh[0] = lebfAtDq5[va4B93].bcTkyr75zS;
            QxMEN38[NOahZf].gB7Lv4iFSh[1] = lebfAtDq5[va4B93].VEDzrau3c;
            QxMEN38[NOahZf].gB7Lv4iFSh[2] = lebfAtDq5[va4B93].pAQ3gbH0EP;
            NOahZf = NOahZf +1;
        }
    {
        int O3GoXIR = 0;
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
        while (O3GoXIR <= NOahZf) {
            for (int va4B93 = 0;
            va4B93 <= NOahZf -O3GoXIR; va4B93 = va4B93 + 1)
                if (QxMEN38[va4B93].bcTkyr75zS < QxMEN38[va4B93 + 1].bcTkyr75zS) {
                    temp = QxMEN38[va4B93];
                    QxMEN38[va4B93] = QxMEN38[va4B93 + 1];
                    QxMEN38[va4B93 + 1] = temp;
                }
            O3GoXIR = O3GoXIR +1;
        };
    }
    for (int O3GoXIR = 0;
    O3GoXIR < NOahZf; O3GoXIR = O3GoXIR +1)
        cout << fixed << setprecision (0) << '(' << QxMEN38[O3GoXIR].xdTXmleMF1[0] << ',' << QxMEN38[O3GoXIR].xdTXmleMF1[1] << ',' << QxMEN38[O3GoXIR].xdTXmleMF1[2] << ')' << '-' << '(' << QxMEN38[O3GoXIR].gB7Lv4iFSh[0] << ',' << QxMEN38[O3GoXIR].gB7Lv4iFSh[1] << ',' << QxMEN38[O3GoXIR].gB7Lv4iFSh[2] << ')' << '=' << fixed << setprecision (2) << QxMEN38[O3GoXIR].bcTkyr75zS << endl;
}

