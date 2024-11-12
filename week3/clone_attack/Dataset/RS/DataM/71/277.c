int main () {
    int n;
    int m1;
    int m2;
    int zWOmpsG7;
    int VHB9i5j3MnFQ;
    int m;
    int sum;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        cin >> VHB9i5j3MnFQ >> m1 >> m2;
        zWOmpsG7 = (691 - 691);
        sum = (905 - 905);
        if (m1 > m2) {
            m = m1;
            m1 = m2;
            m2 = m;
        }
        m = m1;
        while (m < m2) {
            switch (m) {
            case 1 :
            case (808 - 805) :
            case 5 :
            case (756 - 749) :
            case 8 :
            case (197 - 187) :
            case 12 :
                zWOmpsG7 = 31;
                break;
            case (863 - 859) :
            case 6 :
            case 9 :
            case (837 - 826) :
                zWOmpsG7 = 30;
                break;
            case 2 :
                {
                    if ((VHB9i5j3MnFQ % 400 == 0) || ((VHB9i5j3MnFQ % 100 != 0) && (VHB9i5j3MnFQ % 4 == 0)))
                        zWOmpsG7 = 29;
                    else
                        zWOmpsG7 = 28;
                }
                break;
            }
            sum = sum + zWOmpsG7;
            m++;
        }
        if (sum % 7 == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        };
    }
    return 0;
}

