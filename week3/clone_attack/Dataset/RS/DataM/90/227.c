int HH0DV32dF4s (int m, int erCPlzuHEY, int OfxR4CKE) {
    int fmqVXsztK;
    int vfmevS86lYDZ;
    int nS4lXPr;
    if (erCPlzuHEY == (585 - 584) && m <= OfxR4CKE)
        return (319 - 318);
    if (erCPlzuHEY == (794 - 793) && m > OfxR4CKE)
        return 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (m == 0)
        return 1;
    if (m % erCPlzuHEY == 0)
        fmqVXsztK = m / erCPlzuHEY;
    else
        fmqVXsztK = m / erCPlzuHEY + 1;
    if (OfxR4CKE > m)
        OfxR4CKE = m;
    nS4lXPr = 0;
    for (vfmevS86lYDZ = OfxR4CKE; vfmevS86lYDZ >= fmqVXsztK; vfmevS86lYDZ--)
        nS4lXPr = nS4lXPr + HH0DV32dF4s (m - vfmevS86lYDZ, erCPlzuHEY - 1, vfmevS86lYDZ);
    return nS4lXPr;
}

int main () {
    int m, erCPlzuHEY, rFYZiAnHl5f3, vfmevS86lYDZ;
    cin >> rFYZiAnHl5f3;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (vfmevS86lYDZ = 1; vfmevS86lYDZ <= rFYZiAnHl5f3; vfmevS86lYDZ++) {
        cin >> m >> erCPlzuHEY;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        cout << HH0DV32dF4s (m, erCPlzuHEY, m) << endl;
    }
    return 0;
}

