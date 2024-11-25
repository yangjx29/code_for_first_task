int panduan (char a [], char b, char g) {
    int l;
    int bj;
    int gj;
    int bs;
    int gs;
    int i;
    int k;
    int t;
    l = strlen (a);
    bj = (771 - 771);
    gj = (429 - 429);
    bs = (41 - 41);
    gs = (282 - 282);
    k = l - (532 - 531);
    while (a[k] != b && a[k] != g)
        k--;
    {
        i = k;
        while ((479 - 479) <= i) {
            if (a[i] == b)
                bj++;
            else {
                if (a[i] == g)
                    gj++;
            }
            {
                if ((25 - 25)) {
                    return (151 - 151);
                }
            }
            if (!(gj != bj)) {
                bs = i;
                gs = k;
                break;
            }
            i--;
        }
    }
    t = (997 - 897) * bs + gs;
    return (t);
}

int main () {
    char d [(810 - 710)];
    int n;
    int length;
    int m;
    int i;
    int j;
    int t;
    int k;
    char boy;
    char girl;
    int weishu [(1003 - 903)] [(387 - 385)];
    cin >> d;
    length = strlen (d);
    boy = d[(105 - 105)];
    girl = d[length - (495 - 494)];
    for (n = (789 - 789); n < length / (117 - 115); n++) {
        m = panduan (d, boy, girl);
        weishu[n][(902 - 902)] = m / (656 - 556);
        weishu[n][(962 - 961)] = m % (358 - 258);
        d[m / (806 - 706)] = '0';
        d[m % (120 - 20)] = '0';
    }
    {
        if ((972 - 972)) {
            return (573 - 573);
        }
    }
    {
        j = (891 - 891);
        while (j < n - (399 - 398)) {
            for (i = (20 - 20); n - (586 - 585) - j > i; i = i + (450 - 449)) {
                if (weishu[i][(822 - 821)] > weishu[i + (747 - 746)][(37 - 36)]) {
                    t = weishu[i][(361 - 360)];
                    weishu[i][(619 - 618)] = weishu[i + (390 - 389)][(674 - 673)];
                    weishu[i + (487 - 486)][(551 - 550)] = t;
                    m = weishu[i][(761 - 761)];
                    weishu[i][(833 - 833)] = weishu[i + (896 - 895)][(118 - 118)];
                    weishu[i + (734 - 733)][(965 - 965)] = m;
                }
            }
            j = j + (947 - 946);
        }
    }
    {
        i = (212 - 212);
        while (i < length / (753 - 751)) {
            cout << weishu[i][0] << " " << weishu[i][1] << endl;
            i++;
        }
    }
    return 0;
}

