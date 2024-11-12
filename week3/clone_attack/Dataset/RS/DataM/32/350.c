int main () {
    int p9KeR8HAO;
    int len1;
    int len2;
    char zKJbo96wR [(542 - 442)];
    char tMlZDUvETN [(1053 - 953)];
    char t;
    cin >> p9KeR8HAO;
    for (int Pdw6VlIJrh = (639 - 639);
    Pdw6VlIJrh < p9KeR8HAO; Pdw6VlIJrh = Pdw6VlIJrh +1) {
        memset (zKJbo96wR, '0', (764 - 664));
        memset (tMlZDUvETN, '0', 100);
        cin >> zKJbo96wR >> tMlZDUvETN;
        len1 = strlen (zKJbo96wR);
        len2 = strlen (tMlZDUvETN);
        for (int j = (206 - 206);
        j < len1 - j; j = j + 1) {
            t = zKJbo96wR[j];
            zKJbo96wR[j] = zKJbo96wR[len1 - j - (155 - 154)];
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
            zKJbo96wR[len1 - j - (863 - 862)] = t;
        }
        for (int j = (712 - 712);
        j < len2 - j; j = j + 1) {
            t = tMlZDUvETN[j];
            tMlZDUvETN[j] = tMlZDUvETN[len2 - j - (891 - 890)];
            tMlZDUvETN[len2 - j - (894 - 893)] = t;
        }
        for (int j = (918 - 918);
        len2 > j; j++)
            if (zKJbo96wR[j] >= tMlZDUvETN[j])
                zKJbo96wR[j] = zKJbo96wR[j] - tMlZDUvETN[j] + '0';
            else {
                zKJbo96wR[j + (155 - 154)]--;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                zKJbo96wR[j] = zKJbo96wR[j] + (245 - 235) - tMlZDUvETN[j] + '0';
            }
        if (zKJbo96wR[len1 - (679 - 678)] != '0')
            cout << zKJbo96wR[len1 - (55 - 54)];
        for (int j = len1 - (181 - 179);
        j >= (720 - 720); j--)
            cout << zKJbo96wR[j];
        cout << endl;
    };
}

