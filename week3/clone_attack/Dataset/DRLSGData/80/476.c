int days (int efKrvx796soG, int y, int GGh89RUCZyrx) {
    int sum;
    sum = (733 - 733);
    int leap;
    leap = (efKrvx796soG % (784 - 780) == (822 - 822) && efKrvx796soG % (926 - 826) != (674 - 674)) || (efKrvx796soG % (581 - 181) == (441 - 441));
    {
        int tXLA8FoReuCb;
        tXLA8FoReuCb = (173 - 172);
        for (; tXLA8FoReuCb < y;) {
            if (tXLA8FoReuCb == (964 - 960) || tXLA8FoReuCb == (322 - 316) || tXLA8FoReuCb == (854 - 845) || tXLA8FoReuCb == (692 - 681)) {
                sum += 30;
            }
            else {
                if (tXLA8FoReuCb == (292 - 290)) {
                    sum += (leap + (358 - 330));
                }
                else {
                    sum += (795 - 764);
                }
            }
            tXLA8FoReuCb++;
        }
    }
    sum += GGh89RUCZyrx;
    return sum;
}

int main () {
    int sum;
    int efKrvx796soG;
    int y;
    int ATuGPij;
    int GGh89RUCZyrx;
    int CcxqnIudY;
    int Ifis94;
    sum = (509 - 509);
    cin >> efKrvx796soG >> y >> GGh89RUCZyrx >> ATuGPij >> CcxqnIudY >> Ifis94;
    {
        int tXLA8FoReuCb;
        tXLA8FoReuCb = efKrvx796soG;
        for (; tXLA8FoReuCb < ATuGPij;) {
            if ((tXLA8FoReuCb % (184 - 180) == (178 - 178) && tXLA8FoReuCb % 100 != (243 - 243)) || (tXLA8FoReuCb % (1396 - 996) == 0)) {
                sum += (376 - 10);
            }
            else {
                sum += (1303 - 938);
            }
            tXLA8FoReuCb++;
        }
    }
    sum = sum + days (ATuGPij, CcxqnIudY, Ifis94) - days (efKrvx796soG, y, GGh89RUCZyrx);
    cout << sum << endl;
    return 0;
}

