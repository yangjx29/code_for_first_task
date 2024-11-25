int main () {
    int k;
    int p7qXTsYZIKv;
    char str [(594 - 494)], czqr6sJ [(725 - 715)], b [(27 - 17)], word [(1004 - 954)] [15];
    int j;
    int YCboBEzRx;
    j = (710 - 710);
    p7qXTsYZIKv = (880 - 880);
    k = (253 - 253);
    cin.getline (str, 100);
    YCboBEzRx = strlen (str);
    for (; p7qXTsYZIKv < YCboBEzRx;) {
        for (; str[p7qXTsYZIKv] != ' ';)
            word[j][k++] = str[p7qXTsYZIKv++];
        p7qXTsYZIKv++;
        word[j][k] = '\0';
        k = (174 - 174);
        j++;
    }
    cin.getline (czqr6sJ, 10);
    cin.getline (b, 10);
    {
        p7qXTsYZIKv = (481 - 481);
        for (; p7qXTsYZIKv < j - 1;) {
            if (!(0 != strcmp (czqr6sJ, word[p7qXTsYZIKv])))
                cout << b << " ";
            else
                cout << word[p7qXTsYZIKv] << " ";
            p7qXTsYZIKv++;
        }
    }
    if (!(0 != strcmp (czqr6sJ, word[p7qXTsYZIKv])))
        cout << b << endl;
    else
        cout << word[p7qXTsYZIKv] << endl;
    return 0;
}

