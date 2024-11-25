int main () {
    int AZipHz [N];
    float average = 0.0, mFAiW6UxpJE = 0;
    int fPci5Tw3;
    int max;
    int n;
    fPci5Tw3 = 1000;
    max = 0;
    float NJ79qkKpG3D = 0;
    cin >> n;
    for (int tYjgquekmcy = 0;
    n > tYjgquekmcy; tYjgquekmcy++) {
        cin >> AZipHz[tYjgquekmcy];
        mFAiW6UxpJE = mFAiW6UxpJE + AZipHz[tYjgquekmcy];
        if (max < AZipHz[tYjgquekmcy])
            max = AZipHz[tYjgquekmcy];
        if (fPci5Tw3 > AZipHz[tYjgquekmcy])
            fPci5Tw3 = AZipHz[tYjgquekmcy];
    }
    average = mFAiW6UxpJE / n;
    if (fabs (max - average) > fabs (fPci5Tw3 - average))
        cout << max << endl;
    else if (fabs (max - average) < fabs (fPci5Tw3 - average))
        cout << fPci5Tw3 << endl;
    else
        cout << fPci5Tw3 << "," << max << endl;
    return 0;
}

