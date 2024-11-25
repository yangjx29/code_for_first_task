int mNGSm2WBLcAy (int a, int xJnCWYjG) {
    if (a == xJnCWYjG)
        return a;
    if (xJnCWYjG > a)
        return mNGSm2WBLcAy (xJnCWYjG, a);
    if (!(0 != a % 2))
        return mNGSm2WBLcAy (a / 2, xJnCWYjG);
    if (a % 2 == 1)
        return mNGSm2WBLcAy ((a - 1) / 2, xJnCWYjG);
}

int main () {
    int x, atxbv59SQ;
    cin >> x >> atxbv59SQ;
    if (x >= atxbv59SQ)
        cout << mNGSm2WBLcAy (x, atxbv59SQ) << endl;
    else
        cout << mNGSm2WBLcAy (atxbv59SQ, x) << endl;
    return 0;
}

