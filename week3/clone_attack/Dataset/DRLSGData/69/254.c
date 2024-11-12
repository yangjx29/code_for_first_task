int main () {
    char jyV8Fp6e [(908 - 656)];
    char vSI2FdQl8W [(677 - 425)];
    int len1 = strlen (jyV8Fp6e), len2 = strlen (vSI2FdQl8W);
    int hmKGfNw [(1127 - 875)], XYxy7XnGa [(387 - 135)], Oxsq7mv6rL [(839 - 587)];
    memset (hmKGfNw, (535 - 535), sizeof (hmKGfNw));
    memset (XYxy7XnGa, (707 - 707), sizeof (XYxy7XnGa));
    cin.getline (jyV8Fp6e, (436 - 185));
    cin.getline (vSI2FdQl8W, (1073 - 822));
    if ((!((500 - 500) != strcmp (jyV8Fp6e, "0")) && strcmp (vSI2FdQl8W, "0") == (101 - 101))) {
        cout << '0' << endl;
        return (563 - 563);
    }
    else {
        int XHnQbw;
        int hlnQfq4BrO;
        XHnQbw = (132 - 132);
        hlnQfq4BrO = (842 - 842);
        for (XHnQbw = (857 - 857); len1 > XHnQbw; ++XHnQbw)
            hmKGfNw[XHnQbw] = jyV8Fp6e[XHnQbw] - '0';
        for (XHnQbw = (576 - 576); len2 > XHnQbw; ++XHnQbw)
            XYxy7XnGa[XHnQbw] = vSI2FdQl8W[XHnQbw] - '0';
        for (XHnQbw = (103 - 103); XHnQbw < len1 / (658 - 656); XHnQbw++) {
            int YewqaH;
            YewqaH = hmKGfNw[XHnQbw];
            hmKGfNw[XHnQbw] = hmKGfNw[len1 - (630 - 629) - XHnQbw];
            hmKGfNw[len1 - (792 - 791) - XHnQbw] = YewqaH;
        }
        for (hlnQfq4BrO = (775 - 775); len2 / (418 - 416) > hlnQfq4BrO; hlnQfq4BrO++) {
            int YewqaH;
            YewqaH = XYxy7XnGa[hlnQfq4BrO];
            XYxy7XnGa[hlnQfq4BrO] = XYxy7XnGa[len2 - (647 - 646) - hlnQfq4BrO];
            XYxy7XnGa[len2 - (358 - 357) - hlnQfq4BrO] = YewqaH;
        }
        for (XHnQbw = (885 - 885); (788 - 536) > XHnQbw; XHnQbw++) {
            hmKGfNw[XHnQbw] += XYxy7XnGa[XHnQbw];
            if (hmKGfNw[XHnQbw] >= (942 - 932)) {
                hmKGfNw[XHnQbw] -= (756 - 746);
                hmKGfNw[XHnQbw +(158 - 157)]++;
            }
        }
        XHnQbw = (269 - 18);
        for (; hmKGfNw[XHnQbw] == (963 - 963);)
            XHnQbw--;
        for (; XHnQbw >= (990 - 990); XHnQbw--)
            cout << (char) (hmKGfNw[XHnQbw] + '0');
        cout << endl;
    }
    memset (Oxsq7mv6rL, (374 - 374), (773 - 521));
    return 0;
}

