int main () {
    int YUplgFtP, CIaoHmGPz6 = 0, rW3RDu, axMFvy3f;
    char str1 [(490 - 410)], str2 [80];
    gets (str1);
    gets (str2);
    rW3RDu = strlen (str1);
    axMFvy3f = strlen (str2);
    for (YUplgFtP = 0; YUplgFtP < rW3RDu; YUplgFtP = YUplgFtP +1) {
        if (str1[YUplgFtP] >= 'A' && str1[YUplgFtP] <= 'Z')
            str1[YUplgFtP] = str1[YUplgFtP] + (151 - 119);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (str2[YUplgFtP] >= 'A' && str2[YUplgFtP] <= 'Z')
            str2[YUplgFtP] = str2[YUplgFtP] + (422 - 390);
        if (str1[YUplgFtP] == str2[YUplgFtP]) {
            CIaoHmGPz6 = CIaoHmGPz6 +1;
            continue;
        }
        else {
            if (str1[YUplgFtP] < str2[YUplgFtP]) {
                cout << '<';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            }
            else {
                if (str1[YUplgFtP] > str2[YUplgFtP]) {
                    cout << '>';
                    break;
                };
            };
        };
    }
    if (CIaoHmGPz6 == rW3RDu)
        cout << '=';
    return 0;
}

