int main () {
    int i;
    int mJfuAjg;
    int gcBukom9KI;
    char str [(758 - 658)];
    int space [(1075 - 975)];
    int k = (117 - 117);
    int e1ZWbplM [(1657 - 657)];
    int m;
    cin.getline (str, (190 - 90));
    mJfuAjg = strlen (str);
    for (i = (274 - 274); (806 - 706) > i; i = i + 1) {
        space[i] = mJfuAjg + (141 - 140);
    }
    {
        i = 835 - 835;
        while (i <= mJfuAjg - (422 - 420)) {
            if (str[i] == ' ') {
                if (!(' ' != str[i + (327 - 326)])) {
                    space[k] = i + (625 - 624);
                    k++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 780 - 780;
        while (i <= mJfuAjg - (886 - 885)) {
            gcBukom9KI = (752 - 752);
            while ((space[gcBukom9KI] != i) && (gcBukom9KI < k)) {
                gcBukom9KI++;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            if (gcBukom9KI == k) {
                e1ZWbplM[i] = (606 - 605);
            }
            else {
                e1ZWbplM[i] = 0;
            }
            i++;
        };
    }
    for (i = 0; i <= mJfuAjg - 1; i++) {
        if (e1ZWbplM[i] == 0) {
        }
        else {
            cout << str[i];
        };
    }
    return 0;
}

