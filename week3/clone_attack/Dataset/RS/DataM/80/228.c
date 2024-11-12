int main () {
    int sum1;
    int sum2;
    int Sum;
    int qNvEwerC;
    int sm;
    int sd;
    int NljMYi40D;
    int em;
    int v0aMrJXUpDvl;
    int i;
    sum1 = 0;
    sum2 = 0;
    Sum = 0;
    int sCxdTXE20 [13] = {0, (829 - 798), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int DCeKQAMU7 [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> qNvEwerC >> sm >> sd;
    if ((!(0 == qNvEwerC % 100) && !(0 != qNvEwerC % 4)) || (!(0 != qNvEwerC % 400))) {
        for (i = sm; i <= 12; i++) {
            sum1 = sum1 + DCeKQAMU7[i];
        }
        sum1 = sum1 - sd;
    }
    else {
        for (i = sm; i <= 12; i++) {
            sum1 = sum1 + sCxdTXE20[i];
        }
        sum1 = sum1 - sd;
    }
    cin >> NljMYi40D >> em >> v0aMrJXUpDvl;
    if ((!(0 == NljMYi40D % 100) && NljMYi40D % 4 == 0) || (NljMYi40D % 400 == 0)) {
        {
            i = em;
            while (i <= 12) {
                sum2 = sum2 + DCeKQAMU7[i];
                i = i + 1;
            };
        }
        sum2 = sum2 - v0aMrJXUpDvl;
    }
    else {
        {
            i = em;
            while (i <= 12) {
                sum2 = sum2 + sCxdTXE20[i];
                i++;
            };
        }
        sum2 = sum2 - v0aMrJXUpDvl;
    }
    if (qNvEwerC == NljMYi40D)
        Sum = sum1 - sum2;
    else {
        for (i = qNvEwerC + 1; i <= NljMYi40D; i++) {
            if ((i % 100 != 0 && i % 4 == 0) || (i % 400 == 0))
                Sum = Sum +366;
            else
                Sum = Sum +365;
        }
        Sum = Sum +sum1 - sum2;
    }
    cout << Sum;
    return 0;
}

