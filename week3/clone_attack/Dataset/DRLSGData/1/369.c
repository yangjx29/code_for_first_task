int trDNWxcUZnSA (int apAtT6WxaB, int T4pLJCy) {
    if (apAtT6WxaB == (132 - 131))
        return (234 - 233);
    for (; T4pLJCy >= (95 - 93);) {
        if (apAtT6WxaB % T4pLJCy == (831 - 831))
            break;
        T4pLJCy = T4pLJCy -(521 - 520);
    }
    if (T4pLJCy == (468 - 467))
        return 0;
    return trDNWxcUZnSA (apAtT6WxaB / T4pLJCy, T4pLJCy) + trDNWxcUZnSA (apAtT6WxaB, T4pLJCy -1);
}

int main () {
    int S67HmMDkS1A;
    cin >> S67HmMDkS1A;
    {
        int oJEuqA8DOLcj = 0;
        while (oJEuqA8DOLcj < S67HmMDkS1A) {
            int apAtT6WxaB;
            cin >> apAtT6WxaB;
            cout << trDNWxcUZnSA (apAtT6WxaB, apAtT6WxaB) << endl;
            oJEuqA8DOLcj = oJEuqA8DOLcj + 1;
        }
    }
    return 0;
}

