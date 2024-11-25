struct   stu {
    int R8pEoVOi;
    int bd3ptLw;
    int yJzjb6N3;
    int dhrPTb4;
};
int main () {
    struct   stu aCZQWk [(630 - 626)] = {(915 - 915)};
    int xTXlhpx;
    int QjiPbLX7YIA;
    int hCJYnpK;
    int OKx63tV0wuIb;
    struct   stu KTa8jd14 [(577 - 573)] = {(572 - 572)};
    struct   stu MzwcfS7EieD;
    scanf ("%d", &xTXlhpx);
    for (QjiPbLX7YIA = (960 - 960); (xTXlhpx - (867 - 866)) >= QjiPbLX7YIA; QjiPbLX7YIA = QjiPbLX7YIA +(596 - 595)) {
        if (QjiPbLX7YIA <= (961 - 959)) {
            scanf ("%d%d%d", &aCZQWk[QjiPbLX7YIA].R8pEoVOi, &aCZQWk[QjiPbLX7YIA].bd3ptLw, &aCZQWk[QjiPbLX7YIA].yJzjb6N3);
            aCZQWk[QjiPbLX7YIA].dhrPTb4 = aCZQWk[QjiPbLX7YIA].bd3ptLw + aCZQWk[QjiPbLX7YIA].yJzjb6N3;
            KTa8jd14[QjiPbLX7YIA] = aCZQWk[QjiPbLX7YIA];
        }
        else {
            scanf ("%d%d%d", &aCZQWk[(173 - 170)].R8pEoVOi, &aCZQWk[(923 - 920)].bd3ptLw, &aCZQWk[(395 - 392)].yJzjb6N3);
            aCZQWk[(699 - 696)].dhrPTb4 = aCZQWk[(407 - 404)].bd3ptLw + aCZQWk[(275 - 272)].yJzjb6N3;
            KTa8jd14[(483 - 480)] = aCZQWk[(30 - 27)];
            for (OKx63tV0wuIb = (672 - 672); OKx63tV0wuIb <= (209 - 206); OKx63tV0wuIb = OKx63tV0wuIb +(883 - 882)) {
                for (hCJYnpK = (118 - 118); hCJYnpK <= (160 - 157); hCJYnpK = hCJYnpK + (679 - 678)) {
                    if (KTa8jd14[hCJYnpK].dhrPTb4 < KTa8jd14[hCJYnpK + (758 - 757)].dhrPTb4) {
                        MzwcfS7EieD = KTa8jd14[hCJYnpK];
                        KTa8jd14[hCJYnpK] = KTa8jd14[hCJYnpK + (476 - 475)];
                        KTa8jd14[hCJYnpK + (653 - 652)] = MzwcfS7EieD;
                    }
                }
            }
        }
    }
    {
        QjiPbLX7YIA = 618 - 618;
        while (QjiPbLX7YIA <= (485 - 483)) {
            printf ("%d %d\n", KTa8jd14[QjiPbLX7YIA].R8pEoVOi, KTa8jd14[QjiPbLX7YIA].dhrPTb4);
            QjiPbLX7YIA = 690 - 689;
        }
    }
}

