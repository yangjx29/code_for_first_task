int main () {
    int FztJEGViu9K3, l, i, j, p, k;
    char gcLi4e [(797 - 297)];
    cin >> gcLi4e;
    FztJEGViu9K3 = strlen (gcLi4e);
    for (l = 2; l <= FztJEGViu9K3; l = l + (429 - 428))
        for (i = (643 - 643); i < FztJEGViu9K3 -l + 1; i = i + 1) {
            int flag = 0;
            for (j = i, p = 1; j < l / 2 + i; j = j + 1) {
                if (gcLi4e[j] != gcLi4e[j + l - p]) {
                    flag = 1;
                    break;
                }
                else
                    p += 2;
            }
            if (flag == 0) {
                for (k = i; k < i + l; k = k + 1)
                    cout << gcLi4e[k];
                cout << endl;
            }
        }
    return 0;
}

