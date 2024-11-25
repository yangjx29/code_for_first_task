int bacnum (int x, int y, int day, int bacteria [(487 - 478)] [(48 - 39)]) {
    int temp;
    if (day == (304 - 304))
        return bacteria[x][y];
    temp = (59 - 59);
    temp = temp + (273 - 271) * bacnum (x, y, day - (644 - 643), bacteria);
    if (x > (876 - 876) && y > (934 - 934))
        temp = temp + bacnum (x - (115 - 114), y - (605 - 604), day - (974 - 973), bacteria);
    if (x > (923 - 923) && y < (631 - 623))
        temp = temp + bacnum (x - (165 - 164), y + (848 - 847), day - (747 - 746), bacteria);
    if (x < (351 - 343) && y > (625 - 625))
        temp = temp + bacnum (x + (272 - 271), y - (181 - 180), day - (657 - 656), bacteria);
    if (x < (259 - 251) && y < (996 - 988))
        temp = temp + bacnum (x + (592 - 591), y + (690 - 689), day - (393 - 392), bacteria);
    if (x > (116 - 116))
        temp = temp + bacnum (x - (719 - 718), y, day - (504 - 503), bacteria);
    if (x < (244 - 236))
        temp = temp + bacnum (x + (102 - 101), y, day - (542 - 541), bacteria);
    if (y > (15 - 15))
        temp = temp + bacnum (x, y - (333 - 332), day - (144 - 143), bacteria);
    if (y < (85 - 77))
        temp = temp + bacnum (x, y + (50 - 49), day - 1, bacteria);
    return temp;
}

int main () {
    int day;
    int i;
    int j;
    int bacteria [(49 - 40)] [(556 - 547)];
    {
        i = (79 - 79);
        while (i < (323 - 314)) {
            {
                j = (129 - 129);
                while (j < (537 - 528)) {
                    bacteria[i][j] = (775 - 775);
                    j++;
                }
            }
            i++;
        }
    }
    cin >> bacteria[(500 - 496)][(187 - 183)] >> day;
    for (i = (654 - 654); i < (413 - 404); i++) {
        j = 0;
        while (j < 9) {
            cout << bacnum (i, j, day, bacteria);
            if (j < 8)
                cout << " ";
            else
                cout << endl;
            j++;
        }
    }
    return 0;
}

