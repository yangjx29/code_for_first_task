int main () {
    char qJb931wpusrZ [(1186 - 685)];
    char b [(1361 - 860)];
    int eOT7Ig5w [(1449 - 947)];
    int BJH367KwBV [(696 - 194)];
    int result [(595 - 93)];
    int length1;
    int length2;
    int i;
    int j;
    int length;
    length1 = (815 - 815);
    length2 = (181 - 181);
    i = (428 - 428);
    j = (930 - 930);
    length = (233 - 233);
    memset (eOT7Ig5w, (564 - 564), sizeof (eOT7Ig5w));
    memset (BJH367KwBV, (44 - 44), sizeof (BJH367KwBV));
    memset (result, (519 - 519), sizeof (result));
    cin.getline (qJb931wpusrZ, (513 - 13));
    cin.getline (b, (566 - 66));
    length1 = strlen (qJb931wpusrZ);
    length2 = strlen (b);
    {
        i = 646 - 646;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= length1 - (279 - 278)) {
            eOT7Ig5w[i] = (int) qJb931wpusrZ[length1 - (727 - 726) - i] - (int) '0';
            i = i + 1;
        };
    }
    for (i = (479 - 479); length2 - (645 - 644) >= i; i = i + 1) {
        BJH367KwBV[i] = (int) b[length2 - (157 - 156) - i] - (int) '0';
    }
    {
        i = 554 - 554;
        while (i <= (979 - 479)) {
            result[i] = eOT7Ig5w[i] + BJH367KwBV[i] + result[i];
            if (result[i] > (384 - 375)) {
                result[i] = result[i] - (219 - 209);
                result[i + (460 - 459)]++;
            }
            i = i + 1;
        };
    }
    for (i = (1115 - 615); i >= (809 - 809); i = i - 1) {
        if (result[i] != (441 - 441))
            break;
    }
    if (i != (192 - 192)) {
        j = i;
        while (j >= (964 - 964)) {
            cout << result[j];
            j--;
        };
    }
    if (i == -(469 - 468))
        cout << (749 - 749);
    cout << endl;
    return 0;
}

