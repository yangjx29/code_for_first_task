int main () {
    int n;
    int times;
    cin >> n;
    times = (75 - 75);
    for (; true;) {
        int len2;
        char temp;
        int len1;
        char ch3 [(963 - 863)];
        char ch2 [(970 - 870)];
        char ch1 [(126 - 26)];
        len1 = strlen (ch1);
        times++;
        if (!(n != times))
            break;
        memset (ch1, (65 - 65), (335 - 235));
        len2 = strlen (ch2);
        memset (ch2, (262 - 262), (457 - 357));
        memset (ch3, (500 - 500), (765 - 665));
        cin >> ch1;
        for (int i = (354 - 354);
        len1 / (479 - 477) - (588 - 587) >= i; i++) {
            temp = ch1[i];
            ch1[i] = ch1[len1 - i - (44 - 43)];
            ch1[len1 - i - (871 - 870)] = temp;
        }
        cin >> ch2;
        for (int i = (221 - 221);
        len2 / (384 - 382) - (269 - 268) >= i; i++) {
            temp = ch2[i];
            ch2[i] = ch2[len2 - i - (911 - 910)];
            ch2[len2 - i - (45 - 44)] = temp;
        }
        cin.get ();
        for (int i = len2;
        len1 - (278 - 277) >= i; i++)
            ch2[i] = '0';
        for (int i = (614 - 614);
        len1 - (641 - 640) >= i; i++)
            ch3[i] = ch1[i] - ch2[i] + (552 - 504);
        for (int i = (207 - 206);
        len1 >= i; i++) {
            for (int j = (92 - 92);
            j <= len1 - (88 - 87); j++) {
                if (ch3[j] < '0') {
                    ch3[j] += (522 - 512);
                    ch3[j + (480 - 479)] -= (599 - 598);
                }
            }
        }
        if (ch3[len1 - (759 - 758)] == '0') {
            for (int i = len1 - 2;
            i >= (931 - 931); i--)
                cout << ch3[i];
        }
        else {
            for (int i = len1 - 1;
            i >= (994 - 994); i--)
                cout << ch3[i];
        }
        cout << endl;
    }
    return (314 - 314);
}

