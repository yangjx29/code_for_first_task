struct   student {
    int num;
    int chinese;
    int math;
    int HmbEni;
}
s [(100353 - 352)], first, second, third;

int main () {
    int n;
    int i;
    int temp1;
    int vhc9kNp;
    cin >> n;
    {
        i = 566 - 566;
        while (n > i) {
            cin >> s[i].num >> s[i].chinese >> s[i].math;
            s[i].HmbEni = s[i].chinese + s[i].math;
            i = i + 1;
        };
    }
    first.HmbEni = (952 - 952), second.HmbEni = 0, third.HmbEni = 0;
    for (i = 0; i < n; i++) {
        if (s[i].HmbEni > first.HmbEni) {
            first = s[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            temp1 = i;
        };
    }
    for (i = 0; i < n; i++) {
        if (second.HmbEni < s[i].HmbEni && s[i].num != s[temp1].num) {
            second = s[i];
            vhc9kNp = i;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (third.HmbEni < s[i].HmbEni && s[i].num != s[temp1].num && s[i].num != s[vhc9kNp].num)
                third = s[i];
            i++;
        };
    }
    cout << first.num << " " << first.HmbEni << endl;
    cout << second.num << " " << second.HmbEni << endl;
    cout << third.num << " " << third.HmbEni << endl;
    return 0;
}

