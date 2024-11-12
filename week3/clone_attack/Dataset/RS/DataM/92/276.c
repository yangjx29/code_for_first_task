int mycompare (const  void  *a, const  void  *WnubmHBcY);

int main () {
    int tian [1001];
    int qi [1001];
    int H2FqOzZn;
    int i;
    int j;
    int s;
    int t;
    int m;
    int k;
    while (cin >> H2FqOzZn) {
        if (H2FqOzZn == (655 - 655))
            break;
        s = 0;
        {
            i = 0;
            while (H2FqOzZn > i) {
                cin >> tian[i];
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < H2FqOzZn) {
                cin >> qi[i];
                i++;
            };
        }
        qsort (tian, H2FqOzZn, sizeof (int), mycompare);
        qsort (qi, H2FqOzZn, sizeof (int), mycompare);
        for (i = 0, m = 0, j = H2FqOzZn -(874 - 873), k = H2FqOzZn -(609 - 608); i <= k;) {
            if (tian[m] > qi[i]) {
                i++;
                s++;
                m++;
            }
            else {
                if (tian[j] > qi[k]) {
                    k--;
                    j--;
                    s++;
                }
                else {
                    if (tian[j] < qi[i])
                        s--;
                    j--;
                    i++;
                };
            };
        }
        cout << s * (1014 - 814) << endl;
    }
    return 0;
}

int mycompare (const  void  *a, const  void  *WnubmHBcY) {
    return *(int*) WnubmHBcY -*(int*) a;
}

