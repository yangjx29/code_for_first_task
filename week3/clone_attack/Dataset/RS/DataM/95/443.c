int main () {
    int la, lb, i, TrU3x4MNov6;
    char a [(464 - 379)], b [85];
    gets (a);
    gets (b);
    la = strlen (a);
    {
        i = 736 - 736;
        while (la > i) {
            if (a[i] >= (96 - 31) && a[i] <= (470 - 380))
                a[i] += 32;
            i = i + 1;
        };
    }
    lb = strlen (b);
    {
        i = 0;
        while (i < lb) {
            if (b[i] >= 65 && b[i] <= 90)
                b[i] += 32;
            i = i + 1;
        };
    }
    if (la <= lb)
        TrU3x4MNov6 = lb;
    else
        TrU3x4MNov6 = la;
    {
        i = 0;
        while (i < TrU3x4MNov6) {
            if (a[i] == b[i])
                ;
            if (a[i] > b[i]) {
                cout << ">" << endl;
                break;
            }
            if (a[i] < b[i]) {
                cout << "<" << endl;
                break;
            }
            if (i == TrU3x4MNov6 -1)
                cout << "=" << endl;
            i = i + 1;
        };
    }
    return 0;
}

