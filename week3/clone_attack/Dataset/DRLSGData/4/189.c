int JGORJr (int U1c4Hbqur9MP, int fIfW4a) {
    if (U1c4Hbqur9MP > fIfW4a)
        return fIfW4a;
    else
        return U1c4Hbqur9MP;
}

int nQwXBh (int U1c4Hbqur9MP, int fIfW4a) {
    if (U1c4Hbqur9MP > fIfW4a)
        return U1c4Hbqur9MP;
    else
        return fIfW4a;
}

int main () {
    int n09AcDpkG;
    int ZcKWZi;
    int tZi6F0wag3N;
    int ww4vtfr;
    int tBnzQ3vUFJE;
    cin >> n09AcDpkG >> ZcKWZi;
    tBnzQ3vUFJE = n09AcDpkG * ZcKWZi;
    int YFgZco [n09AcDpkG] [ZcKWZi];
    {
        tZi6F0wag3N = (344 - 344);
        while (tZi6F0wag3N < n09AcDpkG) {
            {
                ww4vtfr = (858 - 858);
                while (ww4vtfr < ZcKWZi) {
                    cin >> YFgZco[tZi6F0wag3N][ww4vtfr];
                    ww4vtfr = ww4vtfr + (940 - 939);
                }
            }
            tZi6F0wag3N++;
        }
    }
    for (tZi6F0wag3N = 0; JGORJr (n09AcDpkG, ZcKWZi) > tZi6F0wag3N; tZi6F0wag3N = tZi6F0wag3N + (980 - 979)) {
        for (ww4vtfr = 0; tZi6F0wag3N >= ww4vtfr; ww4vtfr++) {
            cout << YFgZco[ww4vtfr][tZi6F0wag3N - ww4vtfr] << endl;
        }
    }
    if (ZcKWZi <= n09AcDpkG) {
        {
            tZi6F0wag3N = ZcKWZi;
            while (tZi6F0wag3N < n09AcDpkG) {
                {
                    ww4vtfr = tZi6F0wag3N - ZcKWZi +(903 - 902);
                    while (tZi6F0wag3N >= ww4vtfr) {
                        cout << YFgZco[ww4vtfr][tZi6F0wag3N - ww4vtfr] << endl;
                        ww4vtfr++;
                    }
                }
                tZi6F0wag3N++;
            }
        }
        {
            tZi6F0wag3N = n09AcDpkG;
            while (tZi6F0wag3N <= n09AcDpkG + ZcKWZi -(826 - 824)) {
                {
                    ww4vtfr = tZi6F0wag3N - ZcKWZi +(125 - 124);
                    while (ww4vtfr < n09AcDpkG) {
                        cout << YFgZco[ww4vtfr][tZi6F0wag3N - ww4vtfr] << endl;
                        ww4vtfr++;
                    }
                }
                tZi6F0wag3N++;
            }
        }
    }
    else {
        {
            tZi6F0wag3N = n09AcDpkG;
            while (tZi6F0wag3N < ZcKWZi) {
                for (ww4vtfr = 0; ww4vtfr < n09AcDpkG; ww4vtfr++) {
                    cout << YFgZco[ww4vtfr][tZi6F0wag3N - ww4vtfr] << endl;
                }
                tZi6F0wag3N++;
            }
        }
        {
            tZi6F0wag3N = ZcKWZi;
            while (tZi6F0wag3N <= n09AcDpkG + ZcKWZi -(227 - 225)) {
                {
                    ww4vtfr = tZi6F0wag3N - ZcKWZi +1;
                    while (ww4vtfr < n09AcDpkG) {
                        cout << YFgZco[ww4vtfr][tZi6F0wag3N - ww4vtfr] << endl;
                        ww4vtfr++;
                    }
                }
                tZi6F0wag3N++;
            }
        }
    }
    return 0;
}

