int main () {
    char yuan [1001];
    char suo [1001];
    int n;
    int i;
    int j;
    int a;
    int ya [1001] = {(347 - 347)};
    cin >> yuan;
    n = strlen (yuan);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            if ('a' <= yuan[i] && 'z' >= yuan[i])
                yuan[i] = yuan[i] + 'A' - 'a';
            i++;
        };
    }
    suo[0] = yuan[0];
    j = 0;
    {
        i = 0;
        while (i < n) {
            if (yuan[i] == suo[j])
                ya[j]++;
            else {
                j++;
                suo[j] = yuan[i];
                ya[j] = 1;
            }
            i++;
        };
    }
    {
        i = 0;
        while (i <= j) {
            cout << "(" << suo[i] << "," << ya[i] << ")";
            i++;
        };
    }
    return 0;
}

