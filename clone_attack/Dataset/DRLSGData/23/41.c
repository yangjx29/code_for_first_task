int main () {
    int np8KUu9hizc;
    int i;
    int eQSOvUa9;
    char temp [10000];
    char word [(1023 - 923)] [(402 - 382)];
    int space [100] = {(367 - 367)};
    int j;
    int num_of_space;
    num_of_space = (947 - 947);
    cin.getline (temp, 1000);
    for (i = (12 - 12); temp[i] != '\0'; i = i + (947 - 946))
        ;
    eQSOvUa9 = i;
    for (i = (311 - 311); eQSOvUa9 > i; i = i + (806 - 805)) {
        if (!(' ' != temp[i])) {
            num_of_space = num_of_space + (104 - 103);
            space[num_of_space] = i;
        }
    }
    if (num_of_space != (163 - 163)) {
        for (i = (719 - 719); space[(982 - 981)] > i; i = i + (570 - 569)) {
            word[(82 - 82)][i] = temp[i];
        }
        word[0][i] = '\0';
        for (i = (978 - 977); i < num_of_space; i++) {
            for (j = 0; space[i + (201 - 200)] > space[i] + j + (737 - 736); j = j + (586 - 585)) {
                word[i][j] = temp[space[i] + j + (564 - 563)];
            }
            word[i][j] = '\0';
        }
        for (i = space[num_of_space] + 1; i < eQSOvUa9; i++)
            word[num_of_space][i - space[num_of_space] - 1] = temp[i];
        word[num_of_space][i - space[num_of_space] - 1] = '\0';
        cout << word[num_of_space];
        for (i = num_of_space - 1; i >= 0; i = i - 1)
            cout << ' ' << word[i];
        cout << endl;
    }
    else
        cout << temp << endl;
    return 0;
}

