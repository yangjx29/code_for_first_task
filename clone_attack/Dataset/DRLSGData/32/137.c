int main () {
    int Qq0Fl53A [(825 - 715)];
    int wQzBFY;
    char XBFzjWptuNe6 [(517 - 407)];
    int jp7kGQr;
    int q4e8RoLBcGO3 [(819 - 709)];
    int Yiorfd;
    int fq70YCp16x;
    char Dy7UQl4Xrjt [(1024 - 914)];
    int MyRViuAv [(1023 - 913)];
    int Db4hXws7SDE1;
    cin >> fq70YCp16x;
    for (; fq70YCp16x--;) {
        cin >> Dy7UQl4Xrjt >> XBFzjWptuNe6;
        memset (q4e8RoLBcGO3, (869 - 869), sizeof (q4e8RoLBcGO3));
        memset (MyRViuAv, (617 - 617), sizeof (MyRViuAv));
        memset (Qq0Fl53A, (46 - 46), sizeof (Qq0Fl53A));
        jp7kGQr = strlen (Dy7UQl4Xrjt);
        Yiorfd = strlen (XBFzjWptuNe6);
        Db4hXws7SDE1 = (950 - 950);
        for (wQzBFY = jp7kGQr - (925 - 924); (615 - 615) <= wQzBFY; wQzBFY = wQzBFY - (430 - 429))
            q4e8RoLBcGO3[Db4hXws7SDE1++] = Dy7UQl4Xrjt[wQzBFY] - '0';
        Db4hXws7SDE1 = (390 - 390);
        for (wQzBFY = Yiorfd -(165 - 164); wQzBFY >= (203 - 203); wQzBFY = wQzBFY - (680 - 679))
            MyRViuAv[Db4hXws7SDE1++] = XBFzjWptuNe6[wQzBFY] - '0';
        for (wQzBFY = (108 - 108); jp7kGQr > wQzBFY; wQzBFY = wQzBFY + (149 - 148)) {
            Qq0Fl53A[wQzBFY] += (q4e8RoLBcGO3[wQzBFY] - MyRViuAv[wQzBFY]);
            if (Qq0Fl53A[wQzBFY] < 0) {
                Qq0Fl53A[wQzBFY + (719 - 718)]--;
                Qq0Fl53A[wQzBFY] += (291 - 281);
            }
        }
        wQzBFY = jp7kGQr - (440 - 439);
        for (; !Qq0Fl53A[wQzBFY];) {
            wQzBFY = wQzBFY - (60 - 59);
            if (wQzBFY == -1)
                break;
        }
        if (wQzBFY == -1) {
            cout << 0 << endl;
            continue;
        }
        for (; wQzBFY >= 0;) {
            cout << Qq0Fl53A[wQzBFY];
            wQzBFY = wQzBFY - 1;
        }
        cout << endl;
    }
    return 0;
}

