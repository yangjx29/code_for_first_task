int main () {
    int IU9cHVO;
    IU9cHVO = (936 - 936);
    int m;
    int W9JgwL;
    char name [(391 - 381)];
    int record [26] [(1477 - 477)];
    cin >> m;
    memset (record, (769 - 769), sizeof (record));
    {
        int veU0AWIzS = (691 - 691);
        while (m > veU0AWIzS) {
            cin >> W9JgwL;
            cin.get ();
            cin.getline (name, 10);
            for (int veU0AWIzS = (325 - 325);
            strlen (name) > veU0AWIzS; veU0AWIzS = veU0AWIzS + 1) {
                record[name[veU0AWIzS] - (688 - 623)][record[name[veU0AWIzS] - (518 - 453)][(831 - 831)] + (986 - 985)] = W9JgwL;
                record[name[veU0AWIzS] - (1062 - 997)][(185 - 185)]++;
            }
            veU0AWIzS = veU0AWIzS + 1;
        };
    }
    {
        int veU0AWIzS = (791 - 791);
        while (25 > veU0AWIzS) {
            if (record[IU9cHVO][0] < record[veU0AWIzS][(495 - 495)]) {
                IU9cHVO = veU0AWIzS;
            }
            veU0AWIzS = veU0AWIzS + 1;
        };
    }
    cout << (char) (IU9cHVO +65) << endl << record[IU9cHVO][0] << endl;
    for (int veU0AWIzS = (214 - 213);
    veU0AWIzS <= record[IU9cHVO][0]; veU0AWIzS = veU0AWIzS + 1) {
        cout << record[IU9cHVO][veU0AWIzS] << endl;
    }
    return 0;
}

