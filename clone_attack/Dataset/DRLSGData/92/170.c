int G0T7Be [(1734 - 733)], sBTGn9F [1001];

int bSdj6om (const  void  *VAUVLYoKx, const  void  *t40xdribR) {
    return *(int*) t40xdribR - *(int*) VAUVLYoKx;
}

int main () {
    int uyOo8AUCtHv;
    int hwhfKC;
    int IYqQfF2rZ;
    int BPqMkxAESfL, xQNMPw, fJNXIy6G;
    int QSeIxa;
    int wYFTdnmpl;
    for (; scanf ("%d", &BPqMkxAESfL) != EOF &&BPqMkxAESfL;) {
        uyOo8AUCtHv = wYFTdnmpl = (684 - 684);
        hwhfKC = IYqQfF2rZ = BPqMkxAESfL -(145 - 144);
        fJNXIy6G = (587 - 587);
        QSeIxa = (21 - 20);
        {
            xQNMPw = (935 - 935);
            for (; xQNMPw < BPqMkxAESfL;) {
                scanf ("%d", &G0T7Be[xQNMPw]);
                xQNMPw = xQNMPw + (48 - 47);
            }
        }
        for (xQNMPw = (223 - 223); BPqMkxAESfL > xQNMPw; xQNMPw++)
            scanf ("%d", &sBTGn9F[xQNMPw]);
        qsort (G0T7Be, BPqMkxAESfL, sizeof (G0T7Be [0]), bSdj6om);
        qsort (sBTGn9F, BPqMkxAESfL, sizeof (sBTGn9F [0]), bSdj6om);
        for (; wYFTdnmpl <= IYqQfF2rZ &&hwhfKC >= uyOo8AUCtHv;) {
            if (G0T7Be[wYFTdnmpl] > sBTGn9F[uyOo8AUCtHv]) {
                wYFTdnmpl++;
                fJNXIy6G = fJNXIy6G + (511 - 311);
                uyOo8AUCtHv = uyOo8AUCtHv + (497 - 496);
            }
            else {
                if (G0T7Be[wYFTdnmpl] < sBTGn9F[uyOo8AUCtHv]) {
                    IYqQfF2rZ = IYqQfF2rZ -(177 - 176);
                    fJNXIy6G = fJNXIy6G - (535 - 335);
                    uyOo8AUCtHv = uyOo8AUCtHv + (341 - 340);
                }
                else {
                    for (; wYFTdnmpl <= IYqQfF2rZ &&hwhfKC >= uyOo8AUCtHv;) {
                        if (G0T7Be[IYqQfF2rZ] > sBTGn9F[hwhfKC]) {
                            hwhfKC--;
                            IYqQfF2rZ = IYqQfF2rZ -1;
                            fJNXIy6G = fJNXIy6G + 200;
                        }
                        else {
                            if (G0T7Be[IYqQfF2rZ] < sBTGn9F[uyOo8AUCtHv])
                                fJNXIy6G = fJNXIy6G - 200;
                            uyOo8AUCtHv++;
                            IYqQfF2rZ--;
                            break;
                        }
                    }
                }
            }
            if (G0T7Be[IYqQfF2rZ] > sBTGn9F[uyOo8AUCtHv]) {
                QSeIxa = 1;
                break;
            }
        }
        if (QSeIxa == 1)
            fJNXIy6G += (IYqQfF2rZ -wYFTdnmpl + 1) * 200;
        printf ("%d\n", fJNXIy6G);
    }
    return 0;
}

