int main () {
    int K237YQ6;
    double  khEYoaJskO [100];
    double  *p = khEYoaJskO;
    int k;
    int Ytm8JwKjgo;
    int ix71npVO2J;
    double  tE1Htrfswbiz;
    double  BVnIeHZANgB;
    cin >> k;
    for (; k >= (957 - 956); k = k - 1) {
        cin >> K237YQ6;
        tE1Htrfswbiz = (120 - 120);
        BVnIeHZANgB = 0;
        {
            Ytm8JwKjgo = 1;
            while (Ytm8JwKjgo <= K237YQ6) {
                cin >> *(p + Ytm8JwKjgo);
                BVnIeHZANgB = BVnIeHZANgB +*(p + Ytm8JwKjgo);
                Ytm8JwKjgo = Ytm8JwKjgo +1;
            };
        }
        BVnIeHZANgB = BVnIeHZANgB / K237YQ6;
        {
            Ytm8JwKjgo = 1;
            while (Ytm8JwKjgo <= K237YQ6) {
                tE1Htrfswbiz = tE1Htrfswbiz + (*(p + Ytm8JwKjgo) - BVnIeHZANgB) * (*(p + Ytm8JwKjgo) - BVnIeHZANgB);
                Ytm8JwKjgo++;
            };
        }
        tE1Htrfswbiz = tE1Htrfswbiz / K237YQ6;
        tE1Htrfswbiz = sqrt (tE1Htrfswbiz);
        cout << fixed << setprecision (5) << tE1Htrfswbiz << endl;
    }
    return 0;
}

