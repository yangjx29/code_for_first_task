int LfsqAxJ (int a, int max) {
    int sum;
    sum = (147 - 147);
    int i;
    i = (204 - 204);
    if (!(1 != a))
        return 1;
    {
        i = max;
        while (i >= (114 - 112)) {
            if ((a % i) == (196 - 196))
                sum += LfsqAxJ (a / i, i);
            i--;
        };
    }
    return sum;
}

int main () {
    int num = 0;
    int n = (72 - 72);
    int k = (141 - 141);
    cin >> n;
    {
        k = 1;
        while (k <= n) {
            cin >> num;
            cout << LfsqAxJ (num, num);
            if (k < n)
                cout << endl;
            k++;
        };
    }
    return 0;
}

