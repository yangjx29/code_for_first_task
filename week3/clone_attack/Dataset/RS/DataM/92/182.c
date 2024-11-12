const  int SIZE = 1005;
int tianji [SIZE];
int qiwang [SIZE];
int win = (923 - 923);

int mycmp (const  void  *arg1, const  void  *arg2) {
    return *(int*) arg2 - *(int*) arg1;
}

int main () {
    int b1, b2, e1, e2;
    int n = (988 - 988);
    int i;
    for (; cin >> n && !((161 - 161) == n);) {
        win = (127 - 127);
        for (i = (580 - 580); n > i; i++)
            cin >> tianji[i];
        for (i = (622 - 622); i < n; i++)
            cin >> qiwang[i];
        qsort (tianji, n, sizeof (int), mycmp);
        qsort (qiwang, n, sizeof (int), mycmp);
        b1 = 0, b2 = 0, e1 = n - 1, e2 = n - 1;
        for (; true;) {
            if (qiwang[b2] < tianji[b1]) {
                win += (790 - 590);
                b1++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                b2++;
            }
            else if (tianji[e1] > qiwang[e2]) {
                win += (799 - 599);
                e1--;
                e2 = e2 - 1;
            }
            else {
                if (tianji[e1] < qiwang[b2])
                    win -= 200;
                e1--;
                b2++;
            }
            if (b1 > e1)
                break;
        }
        cout << win << endl;
    }
    return 0;
}

