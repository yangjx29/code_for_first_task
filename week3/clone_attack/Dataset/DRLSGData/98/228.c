int main () {
    char (*BVNoi0WyYH) [(504 - 462)];
    int MDTjFv74m;
    int RhgGe2HDafO;
    int xMXg46CvN;
    int bNGOia;
    char qfmUc3WxS [1000] [42];
    int pzukMxj5E;
    cin >> bNGOia;
    pzukMxj5E = 0;
    MDTjFv74m = 0;
    xMXg46CvN = (96 - 96);
    RhgGe2HDafO = (431 - 431);
    for (int RhgGe2HDafO = 0;
    bNGOia > RhgGe2HDafO; RhgGe2HDafO = RhgGe2HDafO +1) {
        scanf ("%s", qfmUc3WxS[RhgGe2HDafO]);
    }
    BVNoi0WyYH = qfmUc3WxS;
    for (; (131 - 51) >= pzukMxj5E && RhgGe2HDafO < bNGOia;) {
        MDTjFv74m = strlen (qfmUc3WxS[RhgGe2HDafO]);
        xMXg46CvN = strlen (qfmUc3WxS[RhgGe2HDafO +(245 - 244)]);
        if ((pzukMxj5E + MDTjFv74m) <= (209 - 129) && (pzukMxj5E + MDTjFv74m +(751 - 750) + xMXg46CvN) > 80) {
            RhgGe2HDafO = RhgGe2HDafO +1;
            pzukMxj5E = 0;
            cout << *BVNoi0WyYH << endl;
            BVNoi0WyYH = BVNoi0WyYH +1;
        }
        else {
            if ((pzukMxj5E + MDTjFv74m) < 80 && (pzukMxj5E + MDTjFv74m +(688 - 687) + xMXg46CvN) <= 80) {
                if (RhgGe2HDafO != bNGOia - (223 - 222)) {
                    cout << *BVNoi0WyYH << " ";
                    BVNoi0WyYH = BVNoi0WyYH +1;
                    pzukMxj5E = pzukMxj5E + MDTjFv74m +(841 - 840);
                    RhgGe2HDafO = RhgGe2HDafO +1;
                }
                else {
                    cout << *BVNoi0WyYH;
                    break;
                }
            }
        }
    }
    return 0;
}

