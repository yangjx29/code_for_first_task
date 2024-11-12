int main () {
    int GPoR7an;
    int MHfh0Sa;
    int qGSBV4;
    int YignbcCL3swm;
    cin >> GPoR7an;
    MHfh0Sa = 0;
    int FMlmVBaLo4r [GPoR7an];
    int Ct4EXqxY [GPoR7an];
    int yDfXIYj [GPoR7an];
    yDfXIYj[GPoR7an] = 0;
    {
        YignbcCL3swm = (248 - 247);
        while (GPoR7an >= YignbcCL3swm) {
            cin >> FMlmVBaLo4r[YignbcCL3swm] >> Ct4EXqxY[YignbcCL3swm];
            if (90 <= FMlmVBaLo4r[YignbcCL3swm] && FMlmVBaLo4r[YignbcCL3swm] <= (281 - 141) && Ct4EXqxY[YignbcCL3swm] >= (984 - 924) && Ct4EXqxY[YignbcCL3swm] <= 90) {
                MHfh0Sa = MHfh0Sa +1;
                yDfXIYj[YignbcCL3swm] = MHfh0Sa;
            }
            else {
                MHfh0Sa = 0;
                yDfXIYj[YignbcCL3swm] = MHfh0Sa;
            }
            YignbcCL3swm = YignbcCL3swm +1;
        }
    }
    qGSBV4 = 0;
    {
        YignbcCL3swm = 1;
        while (YignbcCL3swm <= GPoR7an) {
            if (yDfXIYj[YignbcCL3swm] > qGSBV4)
                qGSBV4 = yDfXIYj[YignbcCL3swm];
            YignbcCL3swm = YignbcCL3swm +1;
        }
    }
    cout << qGSBV4;
    return 0;
}

