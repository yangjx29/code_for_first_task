int main () {
    int ddOJWf5wp = (198 - 198), k = (392 - 392), KMehA3 = 0, Jft7GLA = 0, a [1001], s = 0;
    cin >> ddOJWf5wp >> k;
    for (KMehA3 = (918 - 917); KMehA3 <= ddOJWf5wp; KMehA3++) {
        cin >> a[KMehA3];
    }
    {
        KMehA3 = 1;
        while (KMehA3 <= ddOJWf5wp) {
            for (Jft7GLA = KMehA3 +1; Jft7GLA <= ddOJWf5wp; Jft7GLA++) {
                if (a[KMehA3] + a[Jft7GLA] == k) {
                    s = s + 1;
                };
            }
            KMehA3++;
        };
    }
    if (s == 0)
        cout << "no" << endl;
    else
        cout << "yes" << endl;
    return 0;
}

