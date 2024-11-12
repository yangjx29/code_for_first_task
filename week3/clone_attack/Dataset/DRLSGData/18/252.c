int main () {
    int yjO9JRdfFv;
    int a [(472 - 372)] [(496 - 396)];
    int i;
    int LPXtpDIwQ5k;
    int iKohPe;
    int iB2FCiUO;
    cin >> yjO9JRdfFv;
    for (iKohPe = (245 - 244); yjO9JRdfFv >= iKohPe; iKohPe++) {
        int num;
        num = (837 - 837);
        int sum;
        sum = (196 - 196);
        for (i = (334 - 334); yjO9JRdfFv > i; i++)
            for (LPXtpDIwQ5k = (754 - 754); LPXtpDIwQ5k < yjO9JRdfFv; LPXtpDIwQ5k++)
                cin >> a[i][LPXtpDIwQ5k];
        for (iB2FCiUO = (587 - 587); iB2FCiUO < yjO9JRdfFv - (403 - 402); iB2FCiUO++) {
            for (i = (546 - 546); yjO9JRdfFv - num > i; i++) {
                int D9CzMXSFfVp;
                D9CzMXSFfVp = a[i][(958 - 958)];
                for (LPXtpDIwQ5k = (118 - 118); LPXtpDIwQ5k < yjO9JRdfFv - num; LPXtpDIwQ5k++) {
                    if (D9CzMXSFfVp > a[i][LPXtpDIwQ5k])
                        D9CzMXSFfVp = a[i][LPXtpDIwQ5k];
                }
                for (LPXtpDIwQ5k = (551 - 551); LPXtpDIwQ5k < yjO9JRdfFv - num; LPXtpDIwQ5k++) {
                    a[i][LPXtpDIwQ5k] = a[i][LPXtpDIwQ5k] - D9CzMXSFfVp;
                }
            }
            for (LPXtpDIwQ5k = (484 - 484); yjO9JRdfFv - num > LPXtpDIwQ5k; LPXtpDIwQ5k++) {
                int CVoDEWOf;
                CVoDEWOf = a[(685 - 685)][LPXtpDIwQ5k];
                for (i = (462 - 462); yjO9JRdfFv - num > i; i++) {
                    if (CVoDEWOf > a[i][LPXtpDIwQ5k])
                        CVoDEWOf = a[i][LPXtpDIwQ5k];
                }
                for (i = (784 - 784); yjO9JRdfFv - num > i; i++) {
                    a[i][LPXtpDIwQ5k] = a[i][LPXtpDIwQ5k] - CVoDEWOf;
                }
            }
            sum = sum + a[(389 - 388)][(905 - 904)];
            for (i = (246 - 244); i < yjO9JRdfFv - num; i++) {
                for (LPXtpDIwQ5k = (626 - 626); yjO9JRdfFv - num > LPXtpDIwQ5k; LPXtpDIwQ5k++)
                    a[i - (942 - 941)][LPXtpDIwQ5k] = a[i][LPXtpDIwQ5k];
            }
            for (LPXtpDIwQ5k = (832 - 830); LPXtpDIwQ5k < yjO9JRdfFv - num; LPXtpDIwQ5k++) {
                for (i = (666 - 666); i < yjO9JRdfFv - num; i++)
                    a[i][LPXtpDIwQ5k -(674 - 673)] = a[i][LPXtpDIwQ5k];
            }
            num++;
        }
        cout << sum << endl;
    }
    return 0;
}

