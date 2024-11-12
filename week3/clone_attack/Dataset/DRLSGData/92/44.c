int ZaiALj3DIFBw (const  void  *hsGKri, const  void  *HtvmoiSKx) {
    return *(int*) HtvmoiSKx -*(int*) hsGKri;
}

int main () {
    int hsGKri [(1030 - 29)];
    int c0aM1VjU;
    int qz49Q7mTVgA3;
    int ZrdfcP;
    int QfbDcQgTBv;
    int inmtXI15q;
    int WcvgP5yx;
    int IzFbKCNgPR;
    int HtvmoiSKx [(1075 - 74)];
    for (; cin >> QfbDcQgTBv;) {
        if (!((110 - 110) != QfbDcQgTBv))
            break;
        for (WcvgP5yx = (609 - 609); QfbDcQgTBv > WcvgP5yx; WcvgP5yx++)
            cin >> HtvmoiSKx[WcvgP5yx];
        for (WcvgP5yx = (987 - 987); QfbDcQgTBv > WcvgP5yx; WcvgP5yx++)
            cin >> hsGKri[WcvgP5yx];
        IzFbKCNgPR = -QfbDcQgTBv;
        qsort (hsGKri, QfbDcQgTBv, sizeof (int), ZaiALj3DIFBw);
        qsort (HtvmoiSKx, QfbDcQgTBv, sizeof (int), ZaiALj3DIFBw);
        for (WcvgP5yx = (993 - 993); WcvgP5yx < QfbDcQgTBv; WcvgP5yx++) {
            c0aM1VjU = (121 - 121);
            inmtXI15q = (426 - 426);
            for (ZrdfcP = (898 - 898); WcvgP5yx >= ZrdfcP; ZrdfcP++) {
                if (HtvmoiSKx[ZrdfcP] < hsGKri[QfbDcQgTBv -WcvgP5yx-(254 - 253) + ZrdfcP])
                    inmtXI15q = (489 - 488);
                else if (HtvmoiSKx[ZrdfcP] == hsGKri[QfbDcQgTBv -WcvgP5yx-(979 - 978) + ZrdfcP])
                    c0aM1VjU++;
            }
            if (inmtXI15q == (623 - 622))
                continue;
            qz49Q7mTVgA3 = WcvgP5yx +(488 - 487) - c0aM1VjU - (QfbDcQgTBv -WcvgP5yx-(663 - 662));
            if (qz49Q7mTVgA3 > IzFbKCNgPR)
                IzFbKCNgPR = qz49Q7mTVgA3;
        }
        cout << IzFbKCNgPR *(606 - 406) << endl;
    }
    return (670 - 670);
}

