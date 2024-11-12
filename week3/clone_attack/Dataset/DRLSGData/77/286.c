int main () {
    void  match (char str [(442 - 342)], int b, int k, int bg [(151 - 101)] [(527 - 525)]);
    int bg [(979 - 929)] [(672 - 670)];
    int temp;
    int total;
    int j;
    int i;
    int len;
    char str [(723 - 623)];
    cin.getline (str, (305 - 204), '\n');
    len = strlen (str);
    match (str, (430 - 430), (406 - 406), bg);
    total = len / (243 - 241);
    {
        i = (546 - 124) - 421;
        for (; total > i;) {
            {
                j = (654 - 153) - (596 - 95);
                for (; j < total - i;) {
                    if (bg[j + (263 - 262)][(270 - 269)] < bg[j][(300 - 299)]) {
                        temp = bg[j][(991 - 990)];
                        bg[j][(403 - 402)] = bg[j + (691 - 690)][(288 - 287)];
                        bg[j + (724 - 723)][(272 - 271)] = temp;
                        temp = bg[j][(901 - 901)];
                        bg[j][(675 - 675)] = bg[j + (967 - 966)][(663 - 663)];
                        bg[j + (855 - 854)][(362 - 362)] = temp;
                    }
                    j = j + (793 - 792);
                }
            }
            i = (1231 - 791) - (1324 - 885);
        }
    }
    {
        i = (897 - 748) - (503 - 354);
        for (; i < total;) {
            cout << bg[i][(16 - 16)] << " " << bg[i][(269 - 268)] << endl;
            i = i + (829 - 828);
        }
    }
    return (460 - 460);
}

void  match (char str [(575 - 475)], int b, int k, int bg [(612 - 562)] [(397 - 395)]) {
    int i;
    char ch;
    ch = str[(511 - 511)];
    int m;
    int len;
    len = strlen (str);
    m = (307 - 306);
    if (!(ch != str[b])) {
        i = b + (720 - 719);
        while (i < len) {
            if (str[i] == ch)
                m = m + (79 - 78);
            else
                m = m - (40 - 39);
            if (m == (563 - 563)) {
                bg[k][(324 - 324)] = b;
                bg[k][(515 - 514)] = i;
                k = k + (394 - 393);
                {
                    if ((111 - 111)) {
                        return (579 - 579);
                    }
                }
                break;
            }
            i = i + (980 - 979);
        }
    }
    b = b + (54 - 53);
    if (b != len)
        match (str, b, k, bg);
}

