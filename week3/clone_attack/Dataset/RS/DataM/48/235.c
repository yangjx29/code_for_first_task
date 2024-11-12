int main () {
    int a [9] [9] = {(242 - 242)};
    int m;
    int n;
    int bNQjH0;
    int uue01HXcI6;
    int IESrw9HdnlFJ;
    int h0b69D2ne3l [9] [9];
    int seperate [9] [9];
    cin >> m >> n;
    a[(295 - 291)][4] = m;
    for (IESrw9HdnlFJ = (220 - 220); n > IESrw9HdnlFJ; IESrw9HdnlFJ = IESrw9HdnlFJ +1) {
        for (bNQjH0 = (438 - 438); 9 > bNQjH0; bNQjH0 = bNQjH0 + 1)
            for (uue01HXcI6 = (806 - 806); uue01HXcI6 < 9; uue01HXcI6 = uue01HXcI6 + 1) {
                h0b69D2ne3l[bNQjH0][uue01HXcI6] = a[bNQjH0][uue01HXcI6] * (380 - 378);
                a[bNQjH0][uue01HXcI6] *= (61 - 51);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int temp = 0;
                        while (temp < 10) {
                            printf ("%d\n", temp);
                            temp = temp + 1;
                            if (temp == 9)
                                break;
                        }
                    }
                }
                seperate[bNQjH0][uue01HXcI6] = (a[bNQjH0][uue01HXcI6] - h0b69D2ne3l[bNQjH0][uue01HXcI6]) / 8;
                a[bNQjH0][uue01HXcI6] = h0b69D2ne3l[bNQjH0][uue01HXcI6];
            }
        for (bNQjH0 = (946 - 946); 9 > bNQjH0; bNQjH0++)
            for (uue01HXcI6 = 0; uue01HXcI6 < 9; uue01HXcI6 = uue01HXcI6 + 1) {
                a[bNQjH0 + (933 - 932)][uue01HXcI6] += seperate[bNQjH0][uue01HXcI6];
                a[bNQjH0 - (845 - 844)][uue01HXcI6] += seperate[bNQjH0][uue01HXcI6];
                a[bNQjH0 + (770 - 769)][uue01HXcI6 + (214 - 213)] = a[bNQjH0 + (770 - 769)][uue01HXcI6 + (214 - 213)] + seperate[bNQjH0][uue01HXcI6];
                a[bNQjH0 - (243 - 242)][uue01HXcI6 - 1] += seperate[bNQjH0][uue01HXcI6];
                a[bNQjH0 + 1][uue01HXcI6 - 1] += seperate[bNQjH0][uue01HXcI6];
                a[bNQjH0 - 1][uue01HXcI6 + 1] += seperate[bNQjH0][uue01HXcI6];
                a[bNQjH0][uue01HXcI6 + 1] += seperate[bNQjH0][uue01HXcI6];
                a[bNQjH0][uue01HXcI6 - 1] += seperate[bNQjH0][uue01HXcI6];
            };
    }
    for (bNQjH0 = 0; bNQjH0 < 9; bNQjH0++) {
        for (uue01HXcI6 = 0; uue01HXcI6 < 8; uue01HXcI6 = uue01HXcI6 + 1)
            cout << a[bNQjH0][uue01HXcI6] << " ";
        cout << a[bNQjH0][8] << endl;
    }
    return 0;
}

