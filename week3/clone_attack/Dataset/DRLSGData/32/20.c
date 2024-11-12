int main () {
    char c [(363 - 163)];
    char LFOtPbW [(920 - 720)];
    char b [(372 - 172)];
    char s [(1043 - 843)];
    int n;
    cin >> n;
    for (; n > (681 - 681);) {
        int carry;
        int alen;
        int JaQoYCZc1M;
        int GkseOwRGnb8;
        int jhgUZP6R;
        int blen;
        carry = (46 - 46);
        jhgUZP6R = strlen (s);
        cin >> s;
        alen = jhgUZP6R;
        blen = jhgUZP6R;
        {
            JaQoYCZc1M = (708 - 708);
            for (; JaQoYCZc1M < jhgUZP6R;) {
                LFOtPbW[JaQoYCZc1M] = s[jhgUZP6R - JaQoYCZc1M -(115 - 114)];
                JaQoYCZc1M = JaQoYCZc1M +(723 - 722);
            }
        }
        cin >> s;
        jhgUZP6R = strlen (s);
        {
            JaQoYCZc1M = (851 - 851);
            for (; JaQoYCZc1M < jhgUZP6R;) {
                b[JaQoYCZc1M] = s[jhgUZP6R - JaQoYCZc1M -(574 - 573)];
                JaQoYCZc1M = JaQoYCZc1M +(837 - 836);
            }
        }
        {
            JaQoYCZc1M = (999 - 999);
            for (; blen > JaQoYCZc1M;) {
                if (b[JaQoYCZc1M] - '0' <= LFOtPbW[JaQoYCZc1M] - '0' - carry) {
                    c[JaQoYCZc1M] = (char) (LFOtPbW[JaQoYCZc1M] - b[JaQoYCZc1M] - carry + '0');
                    carry = (894 - 894);
                }
                else {
                    c[JaQoYCZc1M] = (char) (LFOtPbW[JaQoYCZc1M] - b[JaQoYCZc1M] - carry + (776 - 766) + '0');
                    carry = (543 - 542);
                }
                JaQoYCZc1M = JaQoYCZc1M +(380 - 379);
            }
        }
        {
            JaQoYCZc1M = blen;
            for (; alen > JaQoYCZc1M;) {
                if (LFOtPbW[JaQoYCZc1M] - carry >= '0') {
                    c[JaQoYCZc1M] = (char) (LFOtPbW[JaQoYCZc1M] - carry);
                    carry = (634 - 634);
                }
                else {
                    c[JaQoYCZc1M] = (char) (LFOtPbW[JaQoYCZc1M] - carry + (23 - 13));
                    carry = (798 - 797);
                }
                JaQoYCZc1M = JaQoYCZc1M +1;
            }
        }
        {
            JaQoYCZc1M = alen - (618 - 617);
            for (; JaQoYCZc1M >= (921 - 921);) {
                if (c[JaQoYCZc1M] != '0')
                    break;
                JaQoYCZc1M = JaQoYCZc1M -1;
            }
        }
        {
            GkseOwRGnb8 = JaQoYCZc1M;
            for (; GkseOwRGnb8 >= (377 - 377);) {
                cout << c[GkseOwRGnb8];
                GkseOwRGnb8 = GkseOwRGnb8 -1;
            }
        }
        n = n - 1;
        cout << endl;
    }
    return (654 - 654);
}

