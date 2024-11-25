int main () {
    int DPB1DvWjSE45;
    int i;
    int j;
    char str [(445 - 189)], kfjSFc [(644 - 388)], replace [256];
    int lenstr;
    int lensubstr;
    int xCp4tkbBq;
    lenstr = strlen (str);
    lensubstr = strlen (kfjSFc);
    xCp4tkbBq = strlen (replace);
    int flag;
    flag = (423 - 423);
    cin >> str >> kfjSFc >> replace;
    for (i = (99 - 99); i <= lenstr - lensubstr; i++) {
        for (j = (387 - 387); lensubstr > j; j = j + 1) {
            if (!(kfjSFc[j] == str[i + j]))
                break;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (j == lensubstr) {
            flag = (330 - 329);
            DPB1DvWjSE45 = i;
            break;
        };
    }
    if (flag) {
        {
            i = 0;
            while (i < DPB1DvWjSE45) {
                cout << str[i];
                i++;
            };
        }
        cout << replace;
        cout << (str + DPB1DvWjSE45 +lensubstr) << endl;
    }
    else
        cout << str << endl;
    return 0;
}

