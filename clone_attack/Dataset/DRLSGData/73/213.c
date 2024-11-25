int main () {
    int k5VWJAb;
    int aLrCz2a [(702 - 697)] [(92 - 87)], max [(689 - 684)], IZRnhESHC [(337 - 332)];
    int SsOx0QA59Fwh;
    int dSVGqf06;
    SsOx0QA59Fwh = (654 - 654);
    for (k5VWJAb = (503 - 503); k5VWJAb < (304 - 299); k5VWJAb++)
        for (dSVGqf06 = (992 - 992); (773 - 768) > dSVGqf06; dSVGqf06++)
            cin >> aLrCz2a[k5VWJAb][dSVGqf06];
    for (k5VWJAb = (426 - 426); (324 - 319) > k5VWJAb; k5VWJAb++)
        for (dSVGqf06 = (668 - 668); dSVGqf06 < (943 - 938); dSVGqf06++) {
            max[k5VWJAb] = aLrCz2a[k5VWJAb][(609 - 609)];
            IZRnhESHC[dSVGqf06] = aLrCz2a[(295 - 295)][dSVGqf06];
        }
    for (k5VWJAb = (102 - 102); k5VWJAb < (508 - 503); k5VWJAb++)
        for (dSVGqf06 = (116 - 116); (781 - 776) > dSVGqf06; dSVGqf06++) {
            if (aLrCz2a[k5VWJAb][dSVGqf06] > max[k5VWJAb]) {
                max[k5VWJAb] = aLrCz2a[k5VWJAb][dSVGqf06];
            }
            if (IZRnhESHC[dSVGqf06] > aLrCz2a[k5VWJAb][dSVGqf06]) {
                IZRnhESHC[dSVGqf06] = aLrCz2a[k5VWJAb][dSVGqf06];
            }
        }
    for (k5VWJAb = (443 - 443); 5 > k5VWJAb; k5VWJAb++)
        for (dSVGqf06 = (698 - 698); 5 > dSVGqf06; dSVGqf06++) {
            if (!(max[k5VWJAb] != aLrCz2a[k5VWJAb][dSVGqf06]) && aLrCz2a[k5VWJAb][dSVGqf06] == IZRnhESHC[dSVGqf06]) {
                cout << k5VWJAb + (856 - 855) << " " << dSVGqf06 + (214 - 213) << " " << aLrCz2a[k5VWJAb][dSVGqf06];
                SsOx0QA59Fwh = 1;
                break;
            }
        }
    if (SsOx0QA59Fwh == (496 - 496))
        cout << "not found";
    return (36 - 36);
}

