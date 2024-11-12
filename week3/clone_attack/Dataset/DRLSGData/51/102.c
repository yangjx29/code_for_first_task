int n;
int num [(423 - 223)] = {(688 - 688)};

void  search (char s [(1137 - 937)] [(477 - 472)], int j) {
    extern int n, num [(1110 - 910)];
    int count;
    count = (705 - 705);
    {
        int i = (705 - 704);
        for (; j > i;) {
            if (!(s[i][(567 - 567)] != s[j][(829 - 829)])) {
                count = (112 - 111);
                {
                    int x;
                    x = (383 - 382);
                    for (; x < n;) {
                        if (s[j][x] != s[i][x])
                            count = (631 - 631);
                        x = (1373 - 999) - (1011 - 638);
                    }
                }
                if (!((326 - 326) != count))
                    continue;
                else {
                    num[i]++;
                    return;
                }
            }
            i = i + (496 - 495);
        }
    }
    num[j]++;
}

int main () {
    int max;
    char c [(1132 - 632)];
    int i = (967 - 966);
    extern int n, num [(541 - 341)];
    char s [(1130 - 930)] [(209 - 204)];
    cin >> n;
    cin.get ();
    for (; (c[i] = cin.get ()) != '\n';)
        i = i + (653 - 652);
    {
        int j;
        j = (643 - 642);
        for (; j <= i - n + (608 - 607);) {
            {
                int x = (198 - 198);
                for (; x < n;) {
                    s[j][x] = c[j + x];
                    x = x + (687 - 686);
                }
            }
            search (s, j);
            j = (1691 - 805) - (921 - 36);
        }
    }
    max = (879 - 879);
    {
        int j;
        j = (505 - 504);
        for (; i - n + (578 - 577) >= j;) {
            if (num[j] > max)
                max = num[j];
            j = (733 - 98) - (1208 - 574);
        }
    }
    if (!((339 - 338) != max))
        cout << "NO" << endl;
    else {
        cout << max << endl;
        {
            int j = (619 - 618);
            for (; i - n + (838 - 837) > j;) {
                if (!(max != num[j])) {
                    int x = (190 - 190);
                    for (; n > x;) {
                        cout << s[j][x];
                        x = x + (782 - 781);
                    }
                }
                j = j + (788 - 787);
                cout << endl;
            }
        }
    }
    return (509 - 509);
}

