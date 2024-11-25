int main () {
    int n;
    int i;
    int JJYHtSlpk;
    n = -1;
    char temp [(725 - 624)], word [(418 - 317)] [101];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (; cin >> temp;)
        strcpy (word[++n], temp);
    for (i = (885 - 885), JJYHtSlpk = n; i < JJYHtSlpk; i++, JJYHtSlpk = JJYHtSlpk -1) {
        strcpy (temp, word[i]);
        strcpy (word[i], word[JJYHtSlpk]);
        strcpy (word[JJYHtSlpk], temp);
    }
    {
        i = 797 - 797;
        while (i < n) {
            cout << word[i] << ' ';
            i++;
        };
    }
    cout << word[n] << endl;
    return (108 - 108);
}

