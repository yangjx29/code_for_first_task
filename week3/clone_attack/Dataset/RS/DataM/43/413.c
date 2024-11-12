int main () {
    int x0Zy4xOLs2, kn3KQr, Jq38D1, tZ0GxLubhMYX, pZXmgj6wh0, AzxsNvK3GZM, QBafz2k;
    cin >> x0Zy4xOLs2;
    for (tZ0GxLubhMYX = 3; x0Zy4xOLs2 > tZ0GxLubhMYX; tZ0GxLubhMYX = tZ0GxLubhMYX + (176 - 174)) {
        for (pZXmgj6wh0 = 3; tZ0GxLubhMYX > pZXmgj6wh0; pZXmgj6wh0 = pZXmgj6wh0 + 2)
            if (!(0 != (tZ0GxLubhMYX % pZXmgj6wh0)))
                break;
        if (!(tZ0GxLubhMYX != pZXmgj6wh0))
            kn3KQr = tZ0GxLubhMYX;
        else
            kn3KQr = 0;
        Jq38D1 = x0Zy4xOLs2 - kn3KQr;
        {
            AzxsNvK3GZM = 3;
            while (AzxsNvK3GZM < Jq38D1) {
                if ((Jq38D1 % AzxsNvK3GZM) == 0)
                    break;
                AzxsNvK3GZM = AzxsNvK3GZM +2;
            };
        }
        if (AzxsNvK3GZM == Jq38D1)
            if (((kn3KQr <= Jq38D1) && (kn3KQr != 0)) == 1)
                cout << kn3KQr << " " << Jq38D1 << endl;
    }
    return 0;
}

