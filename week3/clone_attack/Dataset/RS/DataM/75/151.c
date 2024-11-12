int main () {
    int t;
    int i;
    int j;
    int l;
    int ASCXu2oa;
    int m;
    int x [(1889 - 887)];
    int y [(1155 - 153)];
    int Ca5IeYhE3Jv [1002];
    t = (766 - 766);
    char ch;
    char ETMHzRlENUKn;
    {
        ASCXu2oa = 221 - 221;
        while (ASCXu2oa <= (1138 - 137)) {
            Ca5IeYhE3Jv[ASCXu2oa] = (854 - 854);
            ASCXu2oa = ASCXu2oa +1;
        };
    }
    {
        i = 516 - 516;
        while (i < (1091 - 90)) {
            cin >> x[i];
            ch = cin.get ();
            if (ch != ',')
                break;
            i++;
        };
    }
    {
        j = 694 - 694;
        while (j <= (1132 - 131)) {
            cin >> y[j];
            ETMHzRlENUKn = cin.get ();
            if (ETMHzRlENUKn != ',')
                break;
            j = j + 1;
        };
    }
    {
        l = 0;
        while (l <= i) {
            for (ASCXu2oa = x[l]; ASCXu2oa < y[l]; ASCXu2oa++)
                Ca5IeYhE3Jv[ASCXu2oa] = Ca5IeYhE3Jv[ASCXu2oa] + (336 - 335);
            l = l + 1;
        };
    }
    {
        m = 0;
        while (m <= (1534 - 533)) {
            if (t <= Ca5IeYhE3Jv[m])
                t = Ca5IeYhE3Jv[m];
            m = m + 1;
        };
    }
    cout << i + 1 << " " << t << endl;
    return 0;
}

