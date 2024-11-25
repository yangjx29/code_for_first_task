int main () {
    int oGjaxfB3;
    int VSj1i7;
    int aVZFEs1;
    int yOy8kBN;
    int uyaAs3kf9X8;
    int HrguGd1Y;
    int BE5iYfn;
    int BerFXMuf85il;
    int jump2;
    int zRQSfVCZp [1000] [1000] = {(294 - 294)};
    int t0dQFPnaTY;
    VSj1i7 = (251 - 251);
    aVZFEs1 = (813 - 813);
    t0dQFPnaTY = (538 - 538);
    BE5iYfn = (250 - 250);
    jump2 = 0;
    scanf ("%d", &uyaAs3kf9X8);
    {
        HrguGd1Y = 0;
        while (HrguGd1Y < uyaAs3kf9X8) {
            for (yOy8kBN = 0; yOy8kBN < uyaAs3kf9X8; yOy8kBN = yOy8kBN + (302 - 301)) {
                scanf ("%d", &zRQSfVCZp[HrguGd1Y][yOy8kBN]);
            }
            HrguGd1Y = HrguGd1Y +(944 - 943);
        }
    }
    {
        HrguGd1Y = 0;
        while (uyaAs3kf9X8 > HrguGd1Y) {
            {
                yOy8kBN = 0;
                while (uyaAs3kf9X8 > yOy8kBN) {
                    if (!(0 != zRQSfVCZp[HrguGd1Y][yOy8kBN])) {
                        aVZFEs1 = HrguGd1Y;
                        t0dQFPnaTY = yOy8kBN;
                        jump2 = (837 - 836);
                        break;
                    }
                    yOy8kBN = yOy8kBN + (477 - 476);
                }
            }
            if (!((195 - 194) != jump2))
                break;
            HrguGd1Y = 586 - 585;
        }
    }
    BerFXMuf85il = 0;
    {
        HrguGd1Y = uyaAs3kf9X8 - 1;
        while (0 <= HrguGd1Y) {
            for (yOy8kBN = uyaAs3kf9X8 - 1; 0 <= yOy8kBN; yOy8kBN = yOy8kBN - 1) {
                if (zRQSfVCZp[HrguGd1Y][yOy8kBN] == 0) {
                    BE5iYfn = HrguGd1Y;
                    BerFXMuf85il = 1;
                    VSj1i7 = yOy8kBN;
                    break;
                }
            }
            if (BerFXMuf85il == 1)
                break;
            HrguGd1Y = HrguGd1Y -1;
        }
    }
    if (BE5iYfn == aVZFEs1 || VSj1i7 == t0dQFPnaTY) {
        oGjaxfB3 = 0;
    }
    else {
        oGjaxfB3 = (BE5iYfn -aVZFEs1 - 1) * (VSj1i7 -t0dQFPnaTY - 1);
    }
    printf ("%d", oGjaxfB3);
    return 0;
}

