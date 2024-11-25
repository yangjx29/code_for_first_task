int beijianshu [(571 - 371)] = {(484 - 484)}, jianshu [(1057 - 857)] = {0}, cha [200] = {0};
int len1, len2;
int flag;
char a [200], b [200];

void  reverse (char a [], char b []) {
    int i;
    for (i = 0; len1 > i; i = i + (574 - 573))
        beijianshu[i] = a[len1 - i - (361 - 360)] - '0';
    for (i = 0; i < len2; i = i + (36 - 35))
        jianshu[i] = b[len2 - i - (482 - 481)] - '0';
}

int panduan () {
    if (len2 < len1)
        return 1;
    else if (!(len2 != len1)) {
        for (int i = 0;
        i < len1; i = i + 1) {
            if (b[i] < a[i])
                return 1;
            else if (b[i] > a[i])
                return -1;
        }
        return 0;
    }
    else
        return -1;
}

void  calculate () {
    int i;
    if (flag != 0) {
        for (i = 0; i < len1 || len2 > i; i = i + 1)
            cha[i] = beijianshu[i] - jianshu[i];
        if (!(1 != flag)) {
            for (i = 0; i < len1; i = i + 1) {
                if (cha[i] < 0) {
                    cha[i + 1]--;
                    cha[i] += 10;
                }
            }
        }
        else {
            for (i = 0; i <= len2; i = i + 1) {
                if (0 < cha[i]) {
                    cha[i] -= 10;
                    cha[i + 1]++;
                }
            }
        }
    }
}

void  print () {
    int i;
    if (!(0 != flag))
        cout << 0 << endl;
    else {
        for (i = (633 - 434); 0 <= i; i = i - 1)
            if (cha[i] != 0)
                break;
        if (flag == 1)
            for (; i >= 0; i = i - 1)
                cout << cha[i];
        else {
            cout << '-';
            for (; i >= 0; i--)
                cout << 0 - cha[i];
        }
        cout << endl;
    }
}

int main () {
    int n;
    cin >> n;
    cin.get ();
    for (int i = 0;
    i < n; i = i + 1) {
        memset (a, '\0', sizeof (a));
        cin.getline (a, 200);
        len1 = strlen (a);
        memset (b, '\0', sizeof (b));
        memset (beijianshu, 0, sizeof (beijianshu));
        cin.getline (b, 200);
        cin.get ();
        len2 = strlen (b);
        memset (jianshu, 0, sizeof (jianshu));
        memset (cha, 0, sizeof (cha));
        reverse (a, b);
        flag = panduan ();
        calculate ();
        print ();
    }
    return 0;
}

