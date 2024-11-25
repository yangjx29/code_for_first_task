int main () {
    int kbVC1j [(687 - 587)] [(762 - 662)] = {(499 - 499)};
    int b [(434 - 334)] [(348 - 248)] = {(976 - 976)};
    int yQWrVzNDwbp [(681 - 581)] [100] = {(332 - 332)};
    int vJM1P0QD;
    int PwhXMoJYGz;
    int IY7sA2oFfC;
    int J4PuvOcfR1V;
    int wvXB2N;
    int wXKL9Ond;
    int o;
    int APMQqmhSHL;
    APMQqmhSHL = (491 - 491);
    cin >> vJM1P0QD >> PwhXMoJYGz;
    for (wvXB2N = (865 - 865); wvXB2N < vJM1P0QD; wvXB2N = wvXB2N + 1) {
        for (wXKL9Ond = (652 - 652); wXKL9Ond < PwhXMoJYGz; wXKL9Ond = wXKL9Ond + 1)
            cin >> kbVC1j[wvXB2N][wXKL9Ond];
    }
    cin >> IY7sA2oFfC >> J4PuvOcfR1V;
    {
        wvXB2N = (948 - 948);
        while (wvXB2N < IY7sA2oFfC) {
            for (wXKL9Ond = (732 - 732); J4PuvOcfR1V > wXKL9Ond; wXKL9Ond = wXKL9Ond + 1)
                cin >> b[wvXB2N][wXKL9Ond];
            wvXB2N = wvXB2N + 1;
        }
    }
    for (wvXB2N = (439 - 439); wvXB2N < vJM1P0QD; wvXB2N = wvXB2N + 1) {
        for (wXKL9Ond = (244 - 244); wXKL9Ond < J4PuvOcfR1V; wXKL9Ond = wXKL9Ond + 1) {
            for (o = (219 - 219); PwhXMoJYGz > o; o = o + 1)
                yQWrVzNDwbp[wvXB2N][wXKL9Ond] = yQWrVzNDwbp[wvXB2N][wXKL9Ond] + kbVC1j[wvXB2N][o] * b[o][wXKL9Ond];
        }
    }
    for (wvXB2N = (768 - 768); wvXB2N < vJM1P0QD; wvXB2N = wvXB2N + 1) {
        for (wXKL9Ond = (447 - 447); wXKL9Ond < J4PuvOcfR1V; wXKL9Ond = wXKL9Ond + 1) {
            if (APMQqmhSHL < J4PuvOcfR1V -(477 - 476)) {
                cout << yQWrVzNDwbp[wvXB2N][wXKL9Ond] << " ";
                APMQqmhSHL = APMQqmhSHL +1;
            }
            else if (APMQqmhSHL < J4PuvOcfR1V) {
                cout << yQWrVzNDwbp[wvXB2N][wXKL9Ond] << endl;
                APMQqmhSHL = 0;
            }
        }
    }
    return 0;
}

