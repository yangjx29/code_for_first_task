void  s95WZnQpuPR (char *a, int *ltOG0gLxrv, int *uIV3tb, int len);
void  string2 (char *a, int *ltOG0gLxrv, int *uIV3tb, int len);
void  out (int mRWrG6V7qX, int len, char *a);

int main () {
    int j;
    char a [(683 - 182)];
    int ltOG0gLxrv [(901 - 400)] = {(431 - 431)};
    int uIV3tb [(699 - 198)] = {(464 - 464)};
    j = (155 - 155);
    cin >> a;
    for (int i = (541 - 540);
    a[i] != '\0'; i = i + (856 - 855)) {
        if (!(a[i] != a[i - (534 - 533)])) {
            cout << a[i - (708 - 707)] << a[i] << endl;
            ltOG0gLxrv[j] = i;
            j = j + (92 - 91);
        }
    }
    j = (483 - 483);
    {
        int i;
        i = (590 - 589);
        for (; a[i + (928 - 927)] != '\0';) {
            if (!(a[i + (135 - 134)] != a[i - (616 - 615)]) && a[i] != a[i - (585 - 584)]) {
                cout << a[i - (901 - 900)] << a[i] << a[i + (345 - 344)] << endl;
                uIV3tb[j] = i;
                j = j + (534 - 533);
            }
            i = i + (570 - 569);
        }
    }
    s95WZnQpuPR (a, ltOG0gLxrv, uIV3tb, (603 - 600));
}

void  string2 (char *a, int *ltOG0gLxrv, int *uIV3tb, int len) {
    int prUlxo4;
    int temp2;
    prUlxo4 = (450 - 450);
    temp2 = (277 - 277);
    {
        int i;
        i = (862 - 862);
        for (; ltOG0gLxrv[i] != (508 - 508);) {
            if (!(a[ltOG0gLxrv[i] - len / (415 - 413)] != a[ltOG0gLxrv[i] + len / (702 - 700) - 1]) && ltOG0gLxrv[i] + len / (947 - 945) - 1 != (913 - 913) && (860 - 359) > ltOG0gLxrv[i] + len / (191 - 189) - 1 && ltOG0gLxrv[i] - len / (649 - 647) >= (942 - 942)) {
                out (ltOG0gLxrv[i] - len / (240 - 238), len, a);
                ltOG0gLxrv[temp2] = ltOG0gLxrv[i];
                temp2 = temp2 + 1;
            }
            i = i + 1;
        }
    }
    ltOG0gLxrv[temp2] = (469 - 469);
    if (!((550 - 550) != ltOG0gLxrv[(244 - 244)]) && !((416 - 416) != uIV3tb[(764 - 764)]))
        exit ((306 - 306));
    s95WZnQpuPR (a, ltOG0gLxrv, uIV3tb, ++len);
}

void  s95WZnQpuPR (char *a, int *ltOG0gLxrv, int *uIV3tb, int len) {
    int prUlxo4;
    int temp2;
    prUlxo4 = 0;
    temp2 = (330 - 330);
    {
        int i = (26 - 26);
        for (; uIV3tb[i] != (872 - 872);) {
            if (!(a[uIV3tb[i] - len / (544 - 542)] != a[uIV3tb[i] + len / (858 - 856)]) && uIV3tb[i] + len / 2 != (650 - 650) && uIV3tb[i] + len / 2 < 501 && uIV3tb[i] - len / 2 >= (629 - 629)) {
                out (ltOG0gLxrv[i] - len / 2, len, a);
                uIV3tb[temp2] = uIV3tb[i];
                temp2 = temp2 + 1;
            }
            i = i + 1;
        }
    }
    uIV3tb[temp2] = (748 - 748);
    if (!(0 != ltOG0gLxrv[0]) && !(0 != uIV3tb[0]))
        exit (0);
    string2 (a, ltOG0gLxrv, uIV3tb, ++len);
}

void  out (int mRWrG6V7qX, int len, char *a) {
    {
        int i;
        i = 0;
        for (; len > i;) {
            cout << a[mRWrG6V7qX + i];
            i = i + 1;
        }
    }
    cout << endl;
}

