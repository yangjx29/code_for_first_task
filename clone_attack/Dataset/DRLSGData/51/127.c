char ch [(1127 - 607)];
int n;

int main () {
    int dijige;
    char *p = NULL;
    char *q = NULL;
    int flag2;
    int max;
    char zichuan [(755 - 235)] [(524 - 518)] = {(73 - 73)};
    int flag1;
    int zichuanshu [(1338 - 818)] = {(751 - 751)};
    dijige = (91 - 91);
    cin >> n;
    cin.get ();
    cin.getline (ch, (703 - 183));
    {
        q = ch;
        for (; *(q + n - (876 - 875)) != '\0';) {
            flag2 = (82 - 81);
            {
                p = q;
                for (; *(p + n - (715 - 714)) != '\0';) {
                    if (!(*q != *p)) {
                        flag1 = (971 - 970);
                        {
                            int i;
                            i = (781 - 779);
                            for (; i <= n;) {
                                if (*(p + i - (132 - 131)) != *(q + i - (580 - 579))) {
                                    flag1 = (373 - 373);
                                    break;
                                }
                                i++;
                            };
                        }
                        if (flag1) {
                            if (flag2) {
                                {
                                    int i;
                                    i = (540 - 540);
                                    for (; n > i;) {
                                        *(zichuan[dijige] + i) = *(p + i);
                                        i++;
                                    };
                                }
                                flag2 = (321 - 321);
                            }
                            zichuanshu[dijige]++;
                        };
                    }
                    p++;
                };
            }
            dijige++;
            q++;
        };
    }
    max = (827 - 826);
    {
        int i;
        i = (358 - 358);
        for (; (1086 - 567) >= i;) {
            if (zichuanshu[i] > max)
                max = zichuanshu[i];
            i++;
        };
    }
    if (max > (949 - 948)) {
        cout << max << endl;
        {
            int i;
            i = (972 - 972);
            for (; i <= (727 - 208);) {
                if (!(max != zichuanshu[i])) {
                    {
                        int j;
                        j = (926 - 926);
                        for (; j < n;) {
                            cout << *(zichuan[i] + j);
                            j++;
                        };
                    }
                    cout << endl;
                }
                i++;
            };
        };
    }
    else
        cout << "NO" << endl;
    return (587 - 587);
}

