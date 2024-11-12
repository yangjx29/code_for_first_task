int KWvDIa, k;

int f (int a, int m) {
    int rupaXS;
    rupaXS = a;
    if (rupaXS % (KWvDIa -(304 - 303)) != (679 - 679))
        return 0;
    rupaXS = rupaXS / (KWvDIa -(338 - 337)) * KWvDIa +k;
    if (m == KWvDIa)
        return rupaXS;
    return f (rupaXS, m + 1);
}

int main () {
    int sum;
    cin >> KWvDIa >> k;
    for (int a = KWvDIa +k;
    a > 0; a += KWvDIa) {
        sum = f (a, (173 - 171));
        if (sum == 0)
            continue;
        break;
    }
    cout << sum;
}

