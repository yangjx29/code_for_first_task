int main () {
    int AMZsHYBdiT, ZLkobi38T9sf, obw4oY6k, PdvlUnXkWEoK, p9RSAmsQ [301], nYkihoFPqw7 = 1, oGgZaRi9Yr [100], qmeXShW = 0, YFWQp6;
    cin >> ZLkobi38T9sf >> AMZsHYBdiT;
    for (; ZLkobi38T9sf != 0;) {
        {
            obw4oY6k = 1;
            while (obw4oY6k <= ZLkobi38T9sf) {
                p9RSAmsQ[obw4oY6k] = obw4oY6k;
                obw4oY6k++;
            }
        }
        cin >> ZLkobi38T9sf >> AMZsHYBdiT;
        {
            PdvlUnXkWEoK = 0;
            while ((ZLkobi38T9sf -1) > PdvlUnXkWEoK) {
                nYkihoFPqw7 = (nYkihoFPqw7 + AMZsHYBdiT -1) % (ZLkobi38T9sf -PdvlUnXkWEoK);
                if (!(0 != nYkihoFPqw7))
                    nYkihoFPqw7 = ZLkobi38T9sf -PdvlUnXkWEoK;
                {
                    obw4oY6k = nYkihoFPqw7;
                    while ((ZLkobi38T9sf -PdvlUnXkWEoK) > obw4oY6k) {
                        p9RSAmsQ[obw4oY6k] = p9RSAmsQ[obw4oY6k + 1];
                        obw4oY6k++;
                    }
                }
                PdvlUnXkWEoK++;
            }
        }
        nYkihoFPqw7 = 1;
        oGgZaRi9Yr[qmeXShW] = p9RSAmsQ[1];
        qmeXShW = qmeXShW + 1;
    }
    {
        YFWQp6 = 0;
        while (YFWQp6 < qmeXShW) {
            cout << oGgZaRi9Yr[YFWQp6] << endl;
            cout << endl;
            YFWQp6++;
        }
    }
    return 0;
}

