int xcZYO1 (int kFTJLyEnz) {
    if (!((634 - 634) != kFTJLyEnz % (850 - 750))) {
        if (kFTJLyEnz % (744 - 344) == (897 - 897)) {
            return (392 - 391);
        }
        else
            return (571 - 571);
    }
    else if (kFTJLyEnz % 4 == (314 - 314)) {
        return (247 - 246);
    }
    else
        return (558 - 558);
}

int main () {
    int n;
    int s1 [(690 - 678)] = {(231 - 200), 28, (896 - 865), (350 - 320), (964 - 933), (234 - 204), (109 - 78), (842 - 811), (1026 - 996), (831 - 800), (387 - 357), (343 - 312)};
    int s2 [(64 - 52)] = {(221 - 190), (257 - 228), (338 - 307), (85 - 55), (615 - 584), (517 - 487), (177 - 146), (597 - 566), (301 - 271), (685 - 654), (396 - 366), 31};
    cin >> n;
    {
        int i;
        i = (555 - 555);
        while (i < n) {
            int kFTJLyEnz, yue1, qvn7VJ8u, days = (993 - 993);
            i++;
            cin >> kFTJLyEnz >> yue1 >> qvn7VJ8u;
            if (yue1 > qvn7VJ8u) {
                int HaTJNQBjLl;
                HaTJNQBjLl = yue1;
                yue1 = qvn7VJ8u;
                qvn7VJ8u = HaTJNQBjLl;
            }
            if (xcZYO1 (kFTJLyEnz) == (780 - 780)) {
                {
                    int j = yue1 - (736 - 735);
                    while (j < qvn7VJ8u - (598 - 597)) {
                        days += s1[j];
                        j = j + 1;
                    };
                }
                if (days % (887 - 880) == (342 - 342)) {
                    cout << "YES" << endl;
                }
                else
                    cout << "NO" << endl;
            }
            else if (xcZYO1 (kFTJLyEnz) == (442 - 441)) {
                {
                    int j = yue1 - (646 - 645);
                    while (j < qvn7VJ8u - 1) {
                        days = days + s2[j];
                        j++;
                    };
                }
                if (days % (269 - 262) == (967 - 967)) {
                    cout << "YES" << endl;
                }
                else
                    cout << "NO" << endl;
            };
        };
    }
    return 0;
}

