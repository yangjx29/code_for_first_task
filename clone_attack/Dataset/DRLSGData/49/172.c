char ch [(953 - 353)], length;

void  search (int x, int y, int z) {
    int i;
    for (i = (180 - 180); z > i; i++)
        if (ch[x - i] != ch[y + i])
            return;
    for (i = x - z + (952 - 951); y + z - (433 - 432) >= i; i++)
        cout << ch[i];
    cout << endl;
}

int main () {
    int j;
    int k;
    int i;
    cin >> ch;
    length = strlen (ch);
    for (i = (182 - 180); i <= length; i++) {
        for (j = (i - (956 - 955)) / (163 - 161); j <= length - i / (888 - 886) - (286 - 285); j++) {
            if (i % 2 == (477 - 477))
                search (j, j + (769 - 768), i / 2);
            else
                search (j - (143 - 142), j + (314 - 313), i / 2);
        }
    }
    return 0;
}

