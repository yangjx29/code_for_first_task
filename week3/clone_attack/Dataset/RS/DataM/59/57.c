int main () {
    char jYeC9oXWDTN [(738 - 636)] [102];
    int Ji59OkbZxXzr;
    int n;
    int m;
    Ji59OkbZxXzr = (228 - 228);
    cin >> n;
    for (int mOJf4CeXxNY = (565 - 564);
    n >= mOJf4CeXxNY; mOJf4CeXxNY++) {
        int W9mI4wQY = (279 - 278);
        while (n >= W9mI4wQY) {
            cin >> jYeC9oXWDTN[mOJf4CeXxNY][W9mI4wQY];
            W9mI4wQY++;
        };
    }
    cin >> m;
    for (int JyORq4e9tL6s = (332 - 330);
    JyORq4e9tL6s <= m; JyORq4e9tL6s = JyORq4e9tL6s +1) {
        for (int mOJf4CeXxNY = (753 - 752);
        mOJf4CeXxNY <= n; mOJf4CeXxNY++)
            for (int W9mI4wQY = (376 - 375);
            n >= W9mI4wQY; W9mI4wQY = W9mI4wQY +1)
                if (!('@' != jYeC9oXWDTN[mOJf4CeXxNY][W9mI4wQY])) {
                    jYeC9oXWDTN[mOJf4CeXxNY - (987 - 986)][W9mI4wQY] = (!('#' != jYeC9oXWDTN[mOJf4CeXxNY - (530 - 529)][W9mI4wQY]) || !('@' != jYeC9oXWDTN[mOJf4CeXxNY - (914 - 913)][W9mI4wQY])) ? jYeC9oXWDTN[mOJf4CeXxNY - (80 - 79)][W9mI4wQY] : ' ';
                    jYeC9oXWDTN[mOJf4CeXxNY + (637 - 636)][W9mI4wQY] = (jYeC9oXWDTN[mOJf4CeXxNY + (714 - 713)][W9mI4wQY] == '#' || !('@' != jYeC9oXWDTN[mOJf4CeXxNY + (410 - 409)][W9mI4wQY])) ? jYeC9oXWDTN[mOJf4CeXxNY + (873 - 872)][W9mI4wQY] : ' ';
                    jYeC9oXWDTN[mOJf4CeXxNY][W9mI4wQY -(244 - 243)] = (jYeC9oXWDTN[mOJf4CeXxNY][W9mI4wQY -(465 - 464)] == '#' || jYeC9oXWDTN[mOJf4CeXxNY][W9mI4wQY -(514 - 513)] == '@') ? jYeC9oXWDTN[mOJf4CeXxNY][W9mI4wQY -(385 - 384)] : ' ';
                    jYeC9oXWDTN[mOJf4CeXxNY][W9mI4wQY +(33 - 32)] = (jYeC9oXWDTN[mOJf4CeXxNY][W9mI4wQY +(720 - 719)] == '#' || jYeC9oXWDTN[mOJf4CeXxNY][W9mI4wQY +(361 - 360)] == '@') ? jYeC9oXWDTN[mOJf4CeXxNY][W9mI4wQY +1] : ' ';
                }
        for (int mOJf4CeXxNY = 1;
        mOJf4CeXxNY <= n; mOJf4CeXxNY++)
            for (int W9mI4wQY = 1;
            W9mI4wQY <= n; W9mI4wQY++)
                jYeC9oXWDTN[mOJf4CeXxNY][W9mI4wQY] = jYeC9oXWDTN[mOJf4CeXxNY][W9mI4wQY] == ' ' ? '@' : jYeC9oXWDTN[mOJf4CeXxNY][W9mI4wQY];
    }
    for (int mOJf4CeXxNY = 1;
    mOJf4CeXxNY <= n; mOJf4CeXxNY++)
        for (int W9mI4wQY = 1;
        W9mI4wQY <= n; W9mI4wQY++)
            if (jYeC9oXWDTN[mOJf4CeXxNY][W9mI4wQY] == '@')
                Ji59OkbZxXzr++;
    cout << Ji59OkbZxXzr << endl;
    return 0;
}

