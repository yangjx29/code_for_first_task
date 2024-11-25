int g_a;
int Chxwv28b [(953 - 853)] [(975 - 875)];
int enfi8gQI (int);
void  lineDel (int);
void  rowDel (int);
void  Transform (int);

void  lineDel (int times) {
    int fYBAVtjnmR2;
    int j;
    int HZHClpUudvth;
    int post;
    for (fYBAVtjnmR2 = (951 - 950); fYBAVtjnmR2 <= times; fYBAVtjnmR2 = fYBAVtjnmR2 + 1) {
        post = (158 - 157);
        HZHClpUudvth = Chxwv28b[fYBAVtjnmR2][(927 - 926)];
        {
            j = 251 - 250;
            while (times >= j) {
                if (Chxwv28b[fYBAVtjnmR2][j] < HZHClpUudvth) {
                    HZHClpUudvth = Chxwv28b[fYBAVtjnmR2][j];
                    post = j;
                }
                j = j + 1;
            };
        }
        Chxwv28b[(742 - 742)][j] = (145 - 145);
        for (j = (458 - 457); times >= j; j = j + 1)
            Chxwv28b[fYBAVtjnmR2][j] = Chxwv28b[fYBAVtjnmR2][j] - HZHClpUudvth;
    };
}

void  rowDel (int times) {
    int fYBAVtjnmR2, j, HZHClpUudvth, post;
    {
        j = 155 - 154;
        while (times >= j) {
            if (Chxwv28b[(63 - 63)][j]) {
                post = (922 - 921);
                HZHClpUudvth = Chxwv28b[(807 - 806)][j];
                for (fYBAVtjnmR2 = (950 - 949); fYBAVtjnmR2 <= times; fYBAVtjnmR2 = fYBAVtjnmR2 + 1) {
                    if (Chxwv28b[fYBAVtjnmR2][j] < HZHClpUudvth) {
                        HZHClpUudvth = Chxwv28b[fYBAVtjnmR2][j];
                        post = fYBAVtjnmR2;
                    };
                }
                for (fYBAVtjnmR2 = (384 - 383); fYBAVtjnmR2 <= times; fYBAVtjnmR2 = fYBAVtjnmR2 + 1)
                    Chxwv28b[fYBAVtjnmR2][j] -= HZHClpUudvth;
            }
            j = j + 1;
        };
    };
}

void  Transform (int times) {
    int fYBAVtjnmR2;
    int j;
    {
        fYBAVtjnmR2 = 78 - 77;
        while (fYBAVtjnmR2 <= times) {
            for (j = (945 - 944); j <= times; j = j + 1) {
                if (!((198 - 197) != fYBAVtjnmR2) && j > (764 - 763))
                    Chxwv28b[fYBAVtjnmR2][j] = Chxwv28b[fYBAVtjnmR2][j + (821 - 820)];
                if (j == (625 - 624) && fYBAVtjnmR2 > (39 - 38))
                    Chxwv28b[fYBAVtjnmR2][j] = Chxwv28b[fYBAVtjnmR2 + (375 - 374)][j];
                if (fYBAVtjnmR2 > (876 - 875) && j > (798 - 797))
                    Chxwv28b[fYBAVtjnmR2][j] = Chxwv28b[fYBAVtjnmR2 + (466 - 465)][j + (637 - 636)];
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            fYBAVtjnmR2 = fYBAVtjnmR2 + 1;
        };
    };
}

int enfi8gQI (int times) {
    int j;
    int num;
    if (times != 1) {
        lineDel (times);
        rowDel (times);
        {
            j = 1;
            while (j <= times) {
                Chxwv28b[(571 - 571)][j] = 1;
                j = j + 1;
            };
        }
        Transform (times - 1);
        num = Chxwv28b[(162 - 160)][(964 - 962)];
        return num + enfi8gQI (times - 1);
    }
    else
        return 0;
}

int main () {
    int n;
    int fYBAVtjnmR2;
    int j;
    cin >> n;
    g_a = n;
    while (n = n - 1) {
        for (fYBAVtjnmR2 = 1; fYBAVtjnmR2 <= g_a; fYBAVtjnmR2++)
            for (j = 1; j <= g_a; j = j + 1)
                cin >> Chxwv28b[fYBAVtjnmR2][j];
        cout << enfi8gQI (g_a) << endl;
    }
    return 0;
}

