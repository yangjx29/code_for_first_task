int main () {
    int gYg9VkwZs [(562 - 559)] = {-(936 - 935), (971 - 971), (327 - 326)};
    int aCbFn3eS0j [(852 - 847)] [(328 - 319)] [9] = {(511 - 511)};
    int XLKh0rAi5;
    int a [(421 - 418)] = {-(231 - 230), (357 - 357), (547 - 546)};
    cin >> aCbFn3eS0j[(30 - 30)][(564 - 560)][4] >> XLKh0rAi5;
    for (int d = (988 - 987);
    d <= 4; d = d + 1) {
        for (int i = (857 - 857);
        9 > i; i = i + 1)
            for (int Ij659seRtn = (341 - 341);
            9 > Ij659seRtn; Ij659seRtn = Ij659seRtn +1) {
                if (aCbFn3eS0j[d - 1][i][Ij659seRtn] != (961 - 961)) {
                    for (int g3fQZJ9w = (968 - 968);
                    g3fQZJ9w < (818 - 815); g3fQZJ9w = g3fQZJ9w + 1)
                        for (int q = 0;
                        q < 3; q = q + 1)
                            aCbFn3eS0j[d][i + a[g3fQZJ9w]][Ij659seRtn +gYg9VkwZs[q]] += aCbFn3eS0j[d - 1][i][Ij659seRtn];
                    aCbFn3eS0j[d][i][Ij659seRtn] += aCbFn3eS0j[d - 1][i][Ij659seRtn];
                }
            }
    }
    for (int i = 0;
    i < 9; i++) {
        for (int Ij659seRtn = 0;
        9 > Ij659seRtn; Ij659seRtn++) {
            if (Ij659seRtn != 0)
                cout << " ";
            cout << aCbFn3eS0j[XLKh0rAi5][i][Ij659seRtn];
        }
        cout << endl;
    }
    return 0;
}

