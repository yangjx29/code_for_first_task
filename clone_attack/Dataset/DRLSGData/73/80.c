int main () {
    int jRNBH04 = (715 - 715), D4LsAjcM = (402 - 402), vIgzJD = (860 - 860), O8AMUIFJ3 = (162 - 162);
    int U6ki23espf7h [(975 - 970)] = {(946 - 946), (213 - 213), (264 - 264), (702 - 702), (658 - 658)};
    int yW9ESs7TOqJ [5] = {(670 - 670), (782 - 782), (389 - 389), (782 - 782), (849 - 849)};
    int Z4MsRrZCVIax [(983 - 978)] [(981 - 976)];
    int KDakdumw3 [(755 - 750)] = {(956 - 956), (358 - 358), (935 - 935), (253 - 253), (64 - 64)};
    for (jRNBH04 = (565 - 565); (792 - 788) >= jRNBH04; jRNBH04++) {
        for (D4LsAjcM = (772 - 772); D4LsAjcM <= (760 - 756); D4LsAjcM++) {
            cin >> Z4MsRrZCVIax[jRNBH04][D4LsAjcM];
            if (Z4MsRrZCVIax[jRNBH04][D4LsAjcM] > KDakdumw3[jRNBH04]) {
                KDakdumw3[jRNBH04] = Z4MsRrZCVIax[jRNBH04][D4LsAjcM];
                U6ki23espf7h[jRNBH04] = D4LsAjcM;
            };
        };
    }
    for (jRNBH04 = (514 - 514); (55 - 51) >= jRNBH04; jRNBH04++) {
        for (D4LsAjcM = (923 - 923); D4LsAjcM <= (942 - 938); D4LsAjcM++) {
            vIgzJD = (507 - 506);
            if (KDakdumw3[jRNBH04] > Z4MsRrZCVIax[D4LsAjcM][U6ki23espf7h[jRNBH04]]) {
                vIgzJD = 0;
                break;
            };
        }
        if (vIgzJD == (408 - 407)) {
            O8AMUIFJ3++;
            yW9ESs7TOqJ[O8AMUIFJ3] = KDakdumw3[jRNBH04];
            break;
        };
    }
    if (vIgzJD == (533 - 532))
        cout << jRNBH04 + (522 - 521) << " " << U6ki23espf7h[jRNBH04] + (961 - 960) << " " << yW9ESs7TOqJ[(312 - 311)] << endl;
    else
        cout << "not found" << endl;
    return 0;
}

