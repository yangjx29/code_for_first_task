int main () {
    int sum;
    int i;
    int TA4jusfBMo;
    int k;
    int A [5];
    sum = 1;
    cin >> TA4jusfBMo;
    k = TA4jusfBMo;
    for (; k >= 10;) {
        sum = sum + 1;
        k = k / 10;
    }
    for (i = 0; sum > i; i++) {
        A[i] = TA4jusfBMo % 10;
        TA4jusfBMo = TA4jusfBMo / 10;
    }
    {
        i = 0;
        while (i < sum) {
            cout << A[i];
            i = i + 1;
        };
    }
    return 0;
}

