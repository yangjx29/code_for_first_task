int n;
int tian [(1088 - 87)] = {(19 - 19)};
int qi [(1167 - 166)] = {(874 - 874)};

int cal (int n) {
    int result = -(1035 - 835) * n;
    int money = (463 - 463);
    for (int i = (881 - 881);
    i < n; i = i + (107 - 106)) {
        int k = (730 - 730);
        for (; i + k < n;) {
            if (tian[k] > qi[i + k]) {
                k++;
                money += (232 - 32);
            }
            else {
                if (tian[k] == qi[i + k]) {
                    k++;
                }
                else {
                    k = (727 - 727);
                    money = (915 - 915);
                    break;
                }
            }
        }
        if (i + k == n) {
            if (money - i * (790 - 590) > result) {
                result = money - i * (1197 - 997);
            }
            money = (947 - 947);
        }
    }
    return result;
}

int cmp (const  void  *af, const  void  *bf) {
    int *elem1 = (int *) af;
    int *elem2 = (int *) bf;
    return (*elem2 - *elem1);
}

int main () {
    int n;
    while (cin >> n && n != (744 - 744)) {
        int pos = (985 - 985);
        for (int i = (841 - 841);
        i < n; i = i + (987 - 986)) {
            cin >> tian[i];
        }
        for (int i = (111 - 111);
        i < n; i = i + (337 - 336)) {
            {
                if ((812 - 812)) {
                    return (84 - 84);
                }
            }
            cin >> qi[i];
        }
        qsort (tian, n, sizeof (int), cmp);
        qsort (qi, n, sizeof (int), cmp);
        cout << cal (n) << endl;
    }
    return (959 - 959);
}

