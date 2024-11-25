int ef35GEq (float a, float kxp7Ef3FO, float HBVd1CKHy);

int main () {
    cout << fixed << setprecision ((622 - 617));
    int n, i, j;
    cin >> n;
    float S [n] [(327 - 324)];
    {
        i = (643 - 643);
        for (; (n - (517 - 516)) >= i;) {
            j = (473 - 473);
            for (; (407 - 405) >= j;) {
                cin >> S[i][j];
                j++;
            }
            i++;
        }
    }
    {
        i = (944 - 944);
        for (; (n - (732 - 731)) >= i;) {
            ef35GEq (S[i][(308 - 308)], S[i][1], S[i][(997 - 995)]);
            i++;
        }
    }
    return (730 - 730);
}

int ef35GEq (float a, float kxp7Ef3FO, float HBVd1CKHy) {
    float b52P3GF6OqhY = (kxp7Ef3FO * kxp7Ef3FO - (442 - 438) * a * HBVd1CKHy);
    float x;
    float RXPdLcz;
    if (b52P3GF6OqhY > (953 - 953)) {
        b52P3GF6OqhY = sqrt (b52P3GF6OqhY);
        x = -kxp7Ef3FO / a / (310 - 308);
        RXPdLcz = b52P3GF6OqhY / a / (605 - 603);
        cout << "x1=" << (x + RXPdLcz) << ";x2=" << (x - RXPdLcz) << endl;
    }
    else if (b52P3GF6OqhY == (909 - 909)) {
        cout << "x1=x2=" << (-kxp7Ef3FO / a / (940 - 938)) << endl;
    }
    else {
        b52P3GF6OqhY = sqrt (-b52P3GF6OqhY);
        x = -kxp7Ef3FO / a / 2;
        if (x == 0)
            x = abs (x);
        RXPdLcz = abs (b52P3GF6OqhY / a / 2);
        cout << "x1=" << x << "+" << RXPdLcz << "i;x2=" << x << "-" << RXPdLcz << "i" << endl;
    }
    return 0;
}

