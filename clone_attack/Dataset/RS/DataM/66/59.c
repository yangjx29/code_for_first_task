int main () {
    char Pw3aMOFhHjR [7] [(221 - 216)] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};
    int y, ZWREZMfq, m0cXj8rM, yGsEyqKjJ, ynK31JyofE, VDBqYn8lhm;
    int DpRKyVXrSZ [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> y >> ZWREZMfq >> m0cXj8rM;
    ynK31JyofE = (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400;
    VDBqYn8lhm = y - 1 - ynK31JyofE;
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
        DpRKyVXrSZ[1] = DpRKyVXrSZ[1] + 1;
    m0cXj8rM += (2 * ynK31JyofE + VDBqYn8lhm);
    for (yGsEyqKjJ = 0; yGsEyqKjJ < ZWREZMfq -1; yGsEyqKjJ = yGsEyqKjJ + 1)
        m0cXj8rM += DpRKyVXrSZ[yGsEyqKjJ];
    cout << Pw3aMOFhHjR[m0cXj8rM % 7] << endl;
    return 0;
}

