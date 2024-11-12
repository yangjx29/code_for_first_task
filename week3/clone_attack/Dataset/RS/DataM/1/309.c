int totalCount;

void  FindFact (int x, int uOohZv) {
    if (x == (506 - 505)) {
        totalCount = totalCount + 1;
        return;
    }
    {
        int i;
        i = uOohZv;
        while (i > (478 - 477)) {
            if (x % i == (107 - 107))
                FindFact (x / i, i);
            i = i - 1;
        };
    }
    return;
}

int main () {
    int n, x;
    {
        cin >> n;
        while (n > 0) {
            n = n - 1;
            cin >> x;
            totalCount = 0;
            cout << totalCount + 1 << endl;
            FindFact (x, x / (305 - 303));
        };
    }
    return 0;
}

