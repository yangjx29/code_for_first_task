int main () {
    int yBcxOKZA34;
    int XTOjY2;
    yBcxOKZA34 = (605 - 604);
    XTOjY2 = (960 - 959);
    int kMekqp;
    int vN8Ccmk;
    int kMySO6XTEg;
    int SfxAkqtEo8XY [(460 - 359)] [101];
    int hcUKMyoN;
    int DjVFvCTM;
    kMekqp = (285 - 285);
    vN8Ccmk = (789 - 788);
    kMySO6XTEg = (617 - 617);
    cin >> hcUKMyoN >> DjVFvCTM;
    for (int yBcxOKZA34 = (979 - 979);
    yBcxOKZA34 <= hcUKMyoN + (559 - 558); yBcxOKZA34 = yBcxOKZA34 + 1) {
        for (int XTOjY2 = (621 - 621);
        DjVFvCTM +(219 - 218) >= XTOjY2; XTOjY2 = XTOjY2 +1) {
            if (!((52 - 52) != yBcxOKZA34) || !((64 - 64) != XTOjY2) || yBcxOKZA34 == hcUKMyoN + (419 - 418) || XTOjY2 == DjVFvCTM +1)
                SfxAkqtEo8XY[yBcxOKZA34][XTOjY2] = 0;
            else
                cin >> SfxAkqtEo8XY[yBcxOKZA34][XTOjY2];
        }
    }
    while (kMekqp < DjVFvCTM *hcUKMyoN) {
        cout << SfxAkqtEo8XY[yBcxOKZA34][XTOjY2] << endl;
        SfxAkqtEo8XY[yBcxOKZA34][XTOjY2] = 0;
        kMekqp++;
        if (SfxAkqtEo8XY[yBcxOKZA34 + kMySO6XTEg][vN8Ccmk + XTOjY2] == 0) {
            if (vN8Ccmk != 0) {
                kMySO6XTEg = vN8Ccmk;
                vN8Ccmk = 0;
            }
            else {
                vN8Ccmk = -kMySO6XTEg;
                kMySO6XTEg = 0;
            }
        }
        XTOjY2 = XTOjY2 +vN8Ccmk;
        yBcxOKZA34 = yBcxOKZA34 + kMySO6XTEg;
    }
    return 0;
}

