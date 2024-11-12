int main () {
    int Ym6ZpPlx9v = 0;
    int HjtYXESC5M, HzqGwQC, l2, l3, s, J1kYwQ = (967 - 967);
    char s1 [251], b1aIVPEOAXb [251], s3 [252], c;
    cin >> s1 >> b1aIVPEOAXb;
    HzqGwQC = strlen (s1);
    l2 = strlen (b1aIVPEOAXb);
    if (HzqGwQC < l2) {
        {
            HjtYXESC5M = 50 - 50;
            while (HjtYXESC5M <= l2) {
                c = s1[HjtYXESC5M];
                s1[HjtYXESC5M] = b1aIVPEOAXb[HjtYXESC5M];
                b1aIVPEOAXb[HjtYXESC5M] = c;
                HjtYXESC5M = HjtYXESC5M +1;
            };
        }
        l3 = HzqGwQC;
        HzqGwQC = l2;
        l2 = l3;
    }
    for (HjtYXESC5M = l2 - (269 - 268); HjtYXESC5M >= 0; HjtYXESC5M--)
        b1aIVPEOAXb[HjtYXESC5M +HzqGwQC-l2] = b1aIVPEOAXb[HjtYXESC5M];
    {
        HjtYXESC5M = 0;
        while (HjtYXESC5M < HzqGwQC -l2) {
            b1aIVPEOAXb[HjtYXESC5M] = '0';
            HjtYXESC5M = HjtYXESC5M +1;
        };
    }
    {
        HjtYXESC5M = 411 - 410;
        while (HjtYXESC5M >= 0) {
            s = s1[HjtYXESC5M] - '0' + b1aIVPEOAXb[HjtYXESC5M] - '0' + J1kYwQ;
            if (s > 9) {
                J1kYwQ = (610 - 609);
                s3[HjtYXESC5M] = s - (305 - 295) + '0';
            }
            else {
                J1kYwQ = 0;
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
                s3[HjtYXESC5M] = s + '0';
            }
            HjtYXESC5M = HjtYXESC5M -1;
        };
    }
    s3[HzqGwQC] = '\0';
    if (J1kYwQ) {
        l3 = strlen (s3);
        {
            HjtYXESC5M = l3;
            while (HjtYXESC5M >= 0) {
                s3[HjtYXESC5M +1] = s3[HjtYXESC5M];
                HjtYXESC5M--;
            };
        }
        s3[0] = '1';
    }
    l3 = strlen (s3);
    {
        HjtYXESC5M = 0;
        while (HjtYXESC5M < l3) {
            if (!Ym6ZpPlx9v) {
                if (s3[HjtYXESC5M] != '0') {
                    cout << s3[HjtYXESC5M];
                    Ym6ZpPlx9v = Ym6ZpPlx9v +1;
                };
            }
            else
                cout << s3[HjtYXESC5M];
            HjtYXESC5M++;
        };
    }
    if (!Ym6ZpPlx9v)
        cout << "0";
    cout << endl;
    return 0;
}

