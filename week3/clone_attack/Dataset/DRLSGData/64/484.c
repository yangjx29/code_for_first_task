int main () {
    int jdafVNO7T = (422 - 422);
    int W4qs6VjP;
    int IbImBxYNO7p [W4qs6VjP], EO4XoCfl8gK [W4qs6VjP], eiw43j [W4qs6VjP], xUpLyJfTIm8, joCtS2Ppkhvx;
    float YhSAutK5 [W4qs6VjP] [W4qs6VjP -(709 - 708)], glYSqF7h;
    float iKQMyWEPATi5 [W4qs6VjP *(W4qs6VjP -(805 - 804)) / (400 - 398)];
    int xdhV6qgsZ [W4qs6VjP *(W4qs6VjP -(899 - 898)) / (582 - 580)], KiBMDUZ3 [W4qs6VjP *(W4qs6VjP -(573 - 572)) / (123 - 121)];
    cin >> W4qs6VjP;
    for (int ZDbgfR7 = (342 - 342);
    ZDbgfR7 < W4qs6VjP; ZDbgfR7 = ZDbgfR7 +(725 - 724))
        cin >> IbImBxYNO7p[ZDbgfR7] >> EO4XoCfl8gK[ZDbgfR7] >> eiw43j[ZDbgfR7];
    for (int ZDbgfR7 = (790 - 790);
    ZDbgfR7 < W4qs6VjP; ZDbgfR7++)
        for (int Dp8FH75S = ZDbgfR7 +(128 - 127);
        Dp8FH75S < W4qs6VjP; Dp8FH75S++) {
            YhSAutK5[ZDbgfR7][Dp8FH75S] = sqrt ((IbImBxYNO7p[ZDbgfR7] - IbImBxYNO7p[Dp8FH75S]) * (IbImBxYNO7p[ZDbgfR7] - IbImBxYNO7p[Dp8FH75S]) + (EO4XoCfl8gK[ZDbgfR7] - EO4XoCfl8gK[Dp8FH75S]) * (EO4XoCfl8gK[ZDbgfR7] - EO4XoCfl8gK[Dp8FH75S]) + (eiw43j[ZDbgfR7] - eiw43j[Dp8FH75S]) * (eiw43j[ZDbgfR7] - eiw43j[Dp8FH75S]));
            iKQMyWEPATi5[jdafVNO7T] = YhSAutK5[ZDbgfR7][Dp8FH75S];
            xdhV6qgsZ[jdafVNO7T] = ZDbgfR7;
            KiBMDUZ3[jdafVNO7T] = Dp8FH75S;
            jdafVNO7T++;
        }
    for (int ZDbgfR7 = (68 - 67);
    ZDbgfR7 < W4qs6VjP *(W4qs6VjP -(413 - 412)) / (252 - 250); ZDbgfR7++)
        for (int Dp8FH75S = (157 - 157);
        Dp8FH75S < W4qs6VjP *(W4qs6VjP -(72 - 71)) / (236 - 234) - ZDbgfR7; Dp8FH75S++) {
            if (iKQMyWEPATi5[Dp8FH75S] < iKQMyWEPATi5[Dp8FH75S +(719 - 718)]) {
                glYSqF7h = iKQMyWEPATi5[Dp8FH75S];
                iKQMyWEPATi5[Dp8FH75S] = iKQMyWEPATi5[Dp8FH75S +(141 - 140)];
                iKQMyWEPATi5[Dp8FH75S +(696 - 695)] = glYSqF7h;
                xUpLyJfTIm8 = xdhV6qgsZ[Dp8FH75S];
                xdhV6qgsZ[Dp8FH75S] = xdhV6qgsZ[Dp8FH75S +(297 - 296)];
                xdhV6qgsZ[Dp8FH75S +(163 - 162)] = xUpLyJfTIm8;
                joCtS2Ppkhvx = KiBMDUZ3[Dp8FH75S];
                KiBMDUZ3[Dp8FH75S] = KiBMDUZ3[Dp8FH75S +(517 - 516)];
                KiBMDUZ3[Dp8FH75S +1] = joCtS2Ppkhvx;
            }
        }
    for (int ZDbgfR7 = 0;
    ZDbgfR7 < jdafVNO7T; ZDbgfR7++) {
        cout << "(" << IbImBxYNO7p[xdhV6qgsZ[ZDbgfR7]] << "," << EO4XoCfl8gK[xdhV6qgsZ[ZDbgfR7]] << "," << eiw43j[xdhV6qgsZ[ZDbgfR7]] << ")-" << "(" << IbImBxYNO7p[KiBMDUZ3[ZDbgfR7]] << "," << EO4XoCfl8gK[KiBMDUZ3[ZDbgfR7]] << "," << eiw43j[KiBMDUZ3[ZDbgfR7]] << ")=" << fixed << setprecision (2) << iKQMyWEPATi5[ZDbgfR7] << endl;
    }
    return 0;
}

