int main () {
    int WQo1kLRn;
    int udNUe1Hhy2;
    int rr7s5WLe;
    int L4W7nC;
    int nhzXc0Vy [(323 - 220)] [(916 - 813)];
    cin >> WQo1kLRn;
    for (int H59tuYCosOR = (126 - 125);
    WQo1kLRn >= H59tuYCosOR; H59tuYCosOR = H59tuYCosOR +1) {
        int fC4QMs0;
        int hq68a4s1Vgj;
        for (udNUe1Hhy2 = (38 - 38); udNUe1Hhy2 < WQo1kLRn; udNUe1Hhy2 = udNUe1Hhy2 + 1) {
            for (rr7s5WLe = (785 - 785); rr7s5WLe < WQo1kLRn; rr7s5WLe = rr7s5WLe + (291 - 290)) {
                cin >> nhzXc0Vy[udNUe1Hhy2][rr7s5WLe];
            }
        }
        fC4QMs0 = WQo1kLRn;
        hq68a4s1Vgj = (598 - 598);
        for (; (861 - 859) <= fC4QMs0;) {
            for (udNUe1Hhy2 = (901 - 901); fC4QMs0 > udNUe1Hhy2; udNUe1Hhy2 = udNUe1Hhy2 + 1) {
                L4W7nC = nhzXc0Vy[udNUe1Hhy2][(403 - 403)];
                for (rr7s5WLe = (385 - 384); fC4QMs0 > rr7s5WLe; rr7s5WLe = rr7s5WLe + 1) {
                    if (L4W7nC > nhzXc0Vy[udNUe1Hhy2][rr7s5WLe])
                        L4W7nC = nhzXc0Vy[udNUe1Hhy2][rr7s5WLe];
                }
                for (rr7s5WLe = (176 - 176); fC4QMs0 > rr7s5WLe; rr7s5WLe = rr7s5WLe + 1) {
                    nhzXc0Vy[udNUe1Hhy2][rr7s5WLe] -= L4W7nC;
                }
            }
            for (rr7s5WLe = (909 - 909); fC4QMs0 > rr7s5WLe; rr7s5WLe = rr7s5WLe + 1) {
                L4W7nC = nhzXc0Vy[(576 - 576)][rr7s5WLe];
                for (udNUe1Hhy2 = (578 - 577); fC4QMs0 > udNUe1Hhy2; udNUe1Hhy2++) {
                    if (L4W7nC > nhzXc0Vy[udNUe1Hhy2][rr7s5WLe])
                        L4W7nC = nhzXc0Vy[udNUe1Hhy2][rr7s5WLe];
                }
                for (udNUe1Hhy2 = (948 - 948); fC4QMs0 > udNUe1Hhy2; udNUe1Hhy2++) {
                    nhzXc0Vy[udNUe1Hhy2][rr7s5WLe] -= L4W7nC;
                }
            }
            hq68a4s1Vgj += nhzXc0Vy[(146 - 145)][(214 - 213)];
            for (udNUe1Hhy2 = (771 - 770); udNUe1Hhy2 < fC4QMs0; udNUe1Hhy2++)
                for (rr7s5WLe = (200 - 200); rr7s5WLe < fC4QMs0; rr7s5WLe++)
                    nhzXc0Vy[udNUe1Hhy2][rr7s5WLe] = nhzXc0Vy[udNUe1Hhy2 + (877 - 876)][rr7s5WLe];
            for (rr7s5WLe = 1; rr7s5WLe < fC4QMs0; rr7s5WLe++)
                for (udNUe1Hhy2 = (709 - 709); udNUe1Hhy2 < fC4QMs0; udNUe1Hhy2++)
                    nhzXc0Vy[udNUe1Hhy2][rr7s5WLe] = nhzXc0Vy[udNUe1Hhy2][rr7s5WLe + 1];
            fC4QMs0--;
        }
        cout << hq68a4s1Vgj << endl;
    }
    return 0;
}

