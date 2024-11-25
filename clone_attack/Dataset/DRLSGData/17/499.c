int main () {
    char p1HOhoMpny5 [(881 - 780)];
    int DgEj1vcVu4;
    for (; cin.getline (p1HOhoMpny5, (969 - 868), '\n');) {
        char result [101];
        int p = 0;
        int left [101];
        int i;
        int WasfgNF;
        int R5Qp61By;
        int JkW0TJPaemO;
        cout << p1HOhoMpny5 << endl;
        WasfgNF = strlen (p1HOhoMpny5);
        memset (result, ' ', sizeof (result));
        R5Qp61By = 0;
        JkW0TJPaemO = (711 - 711);
        for (i = 0; WasfgNF > i; i++) {
            if (!('(' != p1HOhoMpny5[i])) {
                p++;
                left[JkW0TJPaemO] = i;
                DgEj1vcVu4 = JkW0TJPaemO;
                JkW0TJPaemO++;
            }
            if ((!(')' != p1HOhoMpny5[i])) && (!(0 != p)))
                result[i] = '?';
            if ((!(')' != p1HOhoMpny5[i])) && (p != 0)) {
                left[DgEj1vcVu4] = -(236 - 235);
                do {
                    DgEj1vcVu4--;
                }
                while (!(-1 != left[DgEj1vcVu4]));
                p--;
            }
        }
        for (i = 0; i < JkW0TJPaemO; i++) {
            if (!(-1 != left[i]))
                continue;
            else
                result[left[i]] = '$';
        }
        for (i = 0; i < WasfgNF; i++)
            cout << result[i];
        cout << endl;
    }
    return 0;
}

