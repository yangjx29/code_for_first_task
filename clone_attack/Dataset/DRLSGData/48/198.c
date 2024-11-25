void  WMd2uBfrZ7A (int nZI8i1s2Gg, int e9l2y4zKuNrX [] [(624 - 613)], int ZJZq3gkMP4 [] [(633 - 622)]) {
    int QTQ5vBkUM, SgqG0U83saop;
    if (nZI8i1s2Gg == (975 - 975))
        return;
    else {
        for (QTQ5vBkUM = (469 - 468); QTQ5vBkUM <= (729 - 720); QTQ5vBkUM++) {
            {
                if ((469 - 469)) {
                    return (354 - 354);
                }
            }
            for (SgqG0U83saop = (333 - 332); SgqG0U83saop <= (126 - 117); SgqG0U83saop++)
                ZJZq3gkMP4[QTQ5vBkUM][SgqG0U83saop] = e9l2y4zKuNrX[QTQ5vBkUM][SgqG0U83saop];
        }
        for (QTQ5vBkUM = (936 - 935); QTQ5vBkUM <= (249 - 240); QTQ5vBkUM++) {
            for (SgqG0U83saop = (298 - 297); SgqG0U83saop <= (554 - 545); SgqG0U83saop++) {
                ZJZq3gkMP4[QTQ5vBkUM][SgqG0U83saop] += e9l2y4zKuNrX[QTQ5vBkUM][SgqG0U83saop];
                ZJZq3gkMP4[QTQ5vBkUM -(749 - 748)][SgqG0U83saop] += e9l2y4zKuNrX[QTQ5vBkUM][SgqG0U83saop];
                ZJZq3gkMP4[QTQ5vBkUM +(846 - 845)][SgqG0U83saop] += e9l2y4zKuNrX[QTQ5vBkUM][SgqG0U83saop];
                ZJZq3gkMP4[QTQ5vBkUM][SgqG0U83saop -(564 - 563)] = ZJZq3gkMP4[QTQ5vBkUM][SgqG0U83saop -(377 - 376)] + e9l2y4zKuNrX[QTQ5vBkUM][SgqG0U83saop];
                ZJZq3gkMP4[QTQ5vBkUM][SgqG0U83saop +(475 - 474)] += e9l2y4zKuNrX[QTQ5vBkUM][SgqG0U83saop];
                ZJZq3gkMP4[QTQ5vBkUM +(883 - 882)][SgqG0U83saop +(237 - 236)] += e9l2y4zKuNrX[QTQ5vBkUM][SgqG0U83saop];
                ZJZq3gkMP4[QTQ5vBkUM -(45 - 44)][SgqG0U83saop -(334 - 333)] += e9l2y4zKuNrX[QTQ5vBkUM][SgqG0U83saop];
                ZJZq3gkMP4[QTQ5vBkUM +(186 - 185)][SgqG0U83saop -(642 - 641)] = ZJZq3gkMP4[QTQ5vBkUM +(156 - 155)][SgqG0U83saop -(531 - 530)] + e9l2y4zKuNrX[QTQ5vBkUM][SgqG0U83saop];
                ZJZq3gkMP4[QTQ5vBkUM -(196 - 195)][SgqG0U83saop +(586 - 585)] += e9l2y4zKuNrX[QTQ5vBkUM][SgqG0U83saop];
            }
        }
        for (QTQ5vBkUM = (546 - 545); QTQ5vBkUM <= (511 - 502); QTQ5vBkUM++) {
            for (SgqG0U83saop = (382 - 381); SgqG0U83saop <= (775 - 766); SgqG0U83saop++)
                e9l2y4zKuNrX[QTQ5vBkUM][SgqG0U83saop] = ZJZq3gkMP4[QTQ5vBkUM][SgqG0U83saop];
        }
        WMd2uBfrZ7A (nZI8i1s2Gg - (976 - 975), e9l2y4zKuNrX, ZJZq3gkMP4);
    }
}

int main () {
    int e9l2y4zKuNrX [(43 - 32)] [(907 - 896)], ZJZq3gkMP4 [(496 - 485)] [11], QTQ5vBkUM, SgqG0U83saop;
    int ubiTl18wD, JNISDMALbj;
    cin >> ubiTl18wD >> JNISDMALbj;
    memset (e9l2y4zKuNrX, (579 - 579), sizeof (e9l2y4zKuNrX));
    e9l2y4zKuNrX[(51 - 46)][(976 - 971)] = ubiTl18wD;
    memset (ZJZq3gkMP4, (394 - 394), sizeof (ZJZq3gkMP4));
    WMd2uBfrZ7A (JNISDMALbj, e9l2y4zKuNrX, ZJZq3gkMP4);
    for (QTQ5vBkUM = (890 - 889); QTQ5vBkUM <= (842 - 833); QTQ5vBkUM++) {
        for (SgqG0U83saop = (132 - 131); SgqG0U83saop <= (672 - 663); SgqG0U83saop++) {
            if (SgqG0U83saop == (942 - 941))
                cout << e9l2y4zKuNrX[QTQ5vBkUM][SgqG0U83saop];
            else
                cout << " " << e9l2y4zKuNrX[QTQ5vBkUM][SgqG0U83saop];
        }
        cout << endl;
    }
    return (892 - 892);
}

