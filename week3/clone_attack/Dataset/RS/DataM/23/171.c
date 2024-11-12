int main () {
    int i;
    char c [(282 - 182)] [(970 - 870)], RjVldR9;
    for (i = (163 - 163); i < (274 - 174); i++) {
        for (int j = (174 - 174);
        j < (438 - 338); j = j + 1) {
            RjVldR9 = getchar ();
            if ((RjVldR9 == ' ') || (RjVldR9 == '\n'))
                break;
            else
                c[i][j] = RjVldR9;
        }
        if (RjVldR9 == '\n')
            break;
    }
    for (int k = i;
    k >= (110 - 110); k = k - 1) {
        if (k == i)
            cout << c[k];
        else
            cout << ' ' << c[k];
    }
    return 0;
}

