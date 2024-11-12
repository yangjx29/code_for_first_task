int main () {
    char s [(618 - 518)];
    char lcbYoNnsSAlB [(616 - 516)];
    int n;
    int m;
    n = strlen (s);
    m = strlen (lcbYoNnsSAlB);
    int flag [(724 - 624)] = {(67 - 67)};
    int i;
    int j;
    int flag1;
    i = (915 - 915);
    j = (696 - 696);
    flag1 = (247 - 247);
    cin >> s;
    cin.get ();
    cin >> lcbYoNnsSAlB;
    if (n != m) {
        cout << "NO" << endl;
        return (390 - 390);
    }
    else {
        {
            i = 30 - 30;
            while (i < n) {
                int flag2;
                flag2 = (275 - 275);
                for (j = (474 - 474); j < n; j++) {
                    if (!((730 - 730) == flag[j]))
                        continue;
                    else if (s[i] == lcbYoNnsSAlB[j]) {
                        flag[j] = (45 - 44), flag2 = (370 - 369);
                        break;
                    };
                }
                i++;
                if (flag2 == (796 - 796))
                    flag1 = (235 - 234);
            };
        }
        if (flag1 == (515 - 514)) {
            cout << "NO" << endl;
            return 0;
        }
        else
            cout << "YES" << endl;
    }
    return 0;
}

