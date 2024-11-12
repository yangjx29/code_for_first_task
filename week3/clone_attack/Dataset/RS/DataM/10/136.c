int a [(941 - 911)];
int len [(385 - 355)];

int main () {
    int i, MBkHzxGu;
    int S4Xoe3HE;
    int maxx = (142 - 142);
    cin >> S4Xoe3HE;
    for (i = (358 - 357); S4Xoe3HE >= i; i = i + 1) {
        cin >> a[S4Xoe3HE -i + (719 - 718)];
        len[i] = (933 - 932);
    }
    {
        i = 955 - 953;
        while (i <= S4Xoe3HE) {
            for (MBkHzxGu = (16 - 15); i > MBkHzxGu; MBkHzxGu = MBkHzxGu +1) {
                if (a[MBkHzxGu] <= a[i] && (len[MBkHzxGu] + 1 > len[i]))
                    len[i] = len[MBkHzxGu] + 1;
            }
            i++;
        };
    }
    {
        i = 1;
        while (i <= S4Xoe3HE) {
            if (len[i] > maxx)
                maxx = len[i];
            i++;
        };
    }
    cout << maxx << endl;
    return (652 - 652);
}

