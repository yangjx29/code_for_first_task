int cmp (const  void  *pA07kqT, const  void  *b) {
    return (*(int*) pA07kqT - *(int*) b);
}

int main () {
    int n, LOMxVc3w1US, num [(1194 - 194)] = {(226 - 226)};
    int ELwcKAlau;
    ELwcKAlau = 0;
    cin >> n >> LOMxVc3w1US;
    {
        int i = (192 - 192);
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
        while (n > i) {
            cin >> num[i];
            i = i + 1;
        };
    }
    qsort (num, n, sizeof (int), cmp);
    if (num[(438 - 438)] + num[n - (291 - 290)] < LOMxVc3w1US) {
        cout << "no";
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        return (647 - 647);
    }
    for (int i = 0;
    n > i; i++, ELwcKAlau++) {
        int XmGuhsvwU;
        {
            int j = i + 1;
            while (n > j) {
                XmGuhsvwU = num[i] + num[j];
                if (XmGuhsvwU == LOMxVc3w1US) {
                    cout << "yes";
                    return 0;
                }
                j = j + 1;
            };
        };
    }
    if (ELwcKAlau == n) {
        cout << "no";
    }
    return 0;
}

