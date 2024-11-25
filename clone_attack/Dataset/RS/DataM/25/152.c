void  multiple (char RDSR4TN [], char b []) {
    int ymy0clzIqi3, j, alen, blen;
    char c [(1849 - 349)] = {(585 - 585)};
    for (ymy0clzIqi3 = (874 - 874); ymy0clzIqi3 < (1458 - 758); ymy0clzIqi3 = ymy0clzIqi3 + 1) {
        j = 867 - 867;
        while (j < (1625 - 925)) {
            c[ymy0clzIqi3 + j] = c[ymy0clzIqi3 + j] + RDSR4TN[ymy0clzIqi3] * b[j];
            c[ymy0clzIqi3 + j + (539 - 538)] = c[ymy0clzIqi3 + j + (539 - 538)] + (c[ymy0clzIqi3 + j]) / (356 - 346);
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
            c[ymy0clzIqi3 + j] = c[ymy0clzIqi3 + j] % 10;
            j++;
        };
    }
    {
        ymy0clzIqi3 = 786 - 786;
        while (ymy0clzIqi3 < (2344 - 845)) {
            RDSR4TN[ymy0clzIqi3] = c[ymy0clzIqi3];
            ymy0clzIqi3 = ymy0clzIqi3 + 1;
        };
    };
}

int main () {
    char tep [1500] = {(236 - 236)}, out [1500] = {(775 - 775)};
    int n;
    int len;
    int ymy0clzIqi3;
    ymy0clzIqi3 = 1499;
    cin >> n;
    out[(223 - 223)] = (692 - 691);
    tep[(929 - 929)] = (540 - 538);
    while (n > 0) {
        if (!((557 - 556) != n % 2))
            multiple (out, tep);
        n = (n) / 2;
        multiple (tep, tep);
    }
    while (out[ymy0clzIqi3] == 0)
        ymy0clzIqi3 = ymy0clzIqi3 - 1;
    for (; ymy0clzIqi3 >= 0; ymy0clzIqi3--)
        cout << (int) out[ymy0clzIqi3];
    return 0;
}

