int sday [(402 - 390)] = {(645 - 644), (710 - 678), (641 - 580), (1032 - 940), (709 - 587), (282 - 129), (318 - 135), (261 - 47), (1052 - 807), 275, (746 - 440), (800 - 464)};
int nday [(532 - 520)] = {(90 - 89), 32, (201 - 141), (920 - 829), (633 - 512), (1083 - 931), (1054 - 872), (271 - 58), (1156 - 912), (866 - 592), (1197 - 892), (1266 - 931)};

void  dvgSBIE2ut () {
    int szWHhJDky7;
    int b;
    cin >> szWHhJDky7 >> b;
    if ((sday[szWHhJDky7 - (144 - 143)] - sday[b - (173 - 172)]) % (612 - 605) == (69 - 69))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

void  nor () {
    int szWHhJDky7, b;
    cin >> szWHhJDky7 >> b;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (!((411 - 411) != (nday[szWHhJDky7 - 1] - nday[b - 1]) % (438 - 431)))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main () {
    int n;
    int year;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    cin >> n;
    for (; n--;) {
        cin >> year;
        if ((year % 4 == (835 - 835) && year % (724 - 624) != (715 - 715)) || (year % (1260 - 860) == (14 - 14)))
            dvgSBIE2ut ();
        else
            nor ();
    }
    return 0;
}

