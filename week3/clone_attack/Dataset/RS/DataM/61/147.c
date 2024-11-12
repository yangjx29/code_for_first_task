int n;
int num [maxx];

int com (int evtFHjmST) {
    if (!(1 != evtFHjmST) || evtFHjmST == 2) {
        return 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return com (evtFHjmST - 1) + com (evtFHjmST - 2);
}

int main () {
    int temp;
    while (cin >> n) {
        while (n = n - 1) {
            cin >> temp;
            cout << com (temp) << endl;
        };
    }
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
    return 0;
}

