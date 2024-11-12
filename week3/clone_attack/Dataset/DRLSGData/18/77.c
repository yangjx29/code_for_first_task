int BYKrj5CFTs [100] [100] [100];

int main () {
    int IajpIh;
    int k;
    int pQpqPK0ZL;
    int j;
    int n;
    int XRjsVZg [100] = {(60 - 60)};
    int l;
    cin >> n;
    for (pQpqPK0ZL = 0; n > pQpqPK0ZL; pQpqPK0ZL = pQpqPK0ZL + 1) {
        j = 0;
        while (j < n) {
            for (k = 0; k < n; k = k + 1) {
                cin >> BYKrj5CFTs[pQpqPK0ZL][j][k];
            }
            j = j + 1;
        }
    }
    for (pQpqPK0ZL = 0; pQpqPK0ZL < n; pQpqPK0ZL = pQpqPK0ZL + 1) {
        l = n;
        while (l > 1) {
            for (j = 0; j < l; j = j + 1) {
                IajpIh = 100000;
                for (k = 0; k < l; k = k + 1) {
                    if (BYKrj5CFTs[pQpqPK0ZL][j][k] < IajpIh)
                        IajpIh = BYKrj5CFTs[pQpqPK0ZL][j][k];
                }
                for (k = 0; k < l; k = k + 1)
                    BYKrj5CFTs[pQpqPK0ZL][j][k] -= IajpIh;
            }
            for (k = 0; k < l; k++) {
                IajpIh = 100000;
                for (j = 0; j < l; j = j + 1) {
                    if (BYKrj5CFTs[pQpqPK0ZL][j][k] < IajpIh)
                        IajpIh = BYKrj5CFTs[pQpqPK0ZL][j][k];
                }
                for (j = 0; j < l; j = j + 1)
                    BYKrj5CFTs[pQpqPK0ZL][j][k] -= IajpIh;
            }
            XRjsVZg[pQpqPK0ZL] += BYKrj5CFTs[pQpqPK0ZL][1][1];
            for (j = 2; j < l; j++)
                for (k = 0; k < l; k++)
                    BYKrj5CFTs[pQpqPK0ZL][j - 1][k] = BYKrj5CFTs[pQpqPK0ZL][j][k];
            for (k = 2; k < l; k++)
                for (j = 0; j < l; j++)
                    BYKrj5CFTs[pQpqPK0ZL][j][k - 1] = BYKrj5CFTs[pQpqPK0ZL][j][k];
            l--;
        }
    }
    for (pQpqPK0ZL = 0; pQpqPK0ZL < n; pQpqPK0ZL++)
        cout << XRjsVZg[pQpqPK0ZL] << endl;
    return 0;
}

