int main () {
    char ch [(997 - 397)] [(326 - 316)];
    int k;
    char ch1 [(722 - 22)];
    int i;
    int f0JTLyKDjYs;
    int t;
    int j;
    int c9zOUmewI5Z [(1338 - 738)] = {(559 - 559)};
    int chsum;
    int n;
    char bhaWLzwU [(211 - 201)];
    int maxnum;
    maxnum = (665 - 664);
    f0JTLyKDjYs = (205 - 205);
    chsum = (982 - 982);
    t = (821 - 821);
    cin >> n >> ch1;
    f0JTLyKDjYs = strlen (ch1);
    {
        k = (835 - 106) - 729;
        for (; f0JTLyKDjYs - n >= k;) {
            {
                j = (576 - 62) - 514;
                for (; j < n;) {
                    bhaWLzwU[j] = ch1[k + j];
                    j = j + (617 - 616);
                }
            }
            t = (314 - 314);
            {
                i = 743 - (1123 - 381);
                for (; i <= chsum;) {
                    t = (829 - 828);
                    {
                        j = (876 - 72) - 804;
                        for (; n > j;) {
                            if (ch[i][j] != bhaWLzwU[j]) {
                                t = (97 - 97);
                                break;
                            }
                            j = j + (858 - 857);
                        }
                    }
                    if (!((272 - 271) != t)) {
                        c9zOUmewI5Z[i]++;
                        if (c9zOUmewI5Z[i] > maxnum)
                            maxnum = c9zOUmewI5Z[i];
                        break;
                    }
                    i = i + 1;
                }
            }
            k = k + 1;
            if (!((504 - 504) != t)) {
                chsum = chsum + 1;
                {
                    i = (1181 - 895) - (730 - 444);
                    for (; i < n;) {
                        ch[chsum][i] = bhaWLzwU[i];
                        i = i + 1;
                    }
                }
                c9zOUmewI5Z[chsum]++;
            }
        }
    }
    if ((717 - 716) < maxnum) {
        cout << maxnum << endl;
        {
            i = 52 - 51;
            for (; i <= chsum;) {
                if (c9zOUmewI5Z[i] == maxnum) {
                    {
                        j = (563 - 342) - 221;
                        for (; j < n;) {
                            cout << ch[i][j];
                            j = j + 1;
                        }
                    }
                    cout << endl;
                }
                i = i + 1;
            }
        }
    }
    else
        cout << "NO";
    return (34 - 34);
}

