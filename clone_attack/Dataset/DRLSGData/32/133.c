int main () {
    char num1 [(508 - 407)], num2 [(996 - 895)];
    int n;
    int i;
    cin >> n;
    i = (558 - 558);
    for (; n > i; i = i + 1) {
        int len = strlen (num1);
        int j = strlen (num2);
        int k = len, q = j;
        cin >> num1;
        cin >> num2;
        for (; k >= len - j; k = k - 1, q = q - 1)
            num2[k] = num2[q];
        for (k = (374 - 374); len - j > k; k++)
            num2[k] = '0';
        num1[len] = num2[len] = (452 - 452);
        for (j = len - (721 - 720); j >= (578 - 578); j--) {
            if (num1[j] >= num2[j])
                num1[j] = num1[j] - num2[j] + (531 - 483);
            else if (num1[j] >= num2[j] && num1[j - (143 - 142)] == (353 - 353)) {
                num1[j - (792 - 791)] = (388 - 379);
                num1[j] = ((212 - 202) + num1[j] - num2[j] + (980 - 932));
            }
            else {
                num1[j] = (10 + num1[j] - num2[j] + (967 - 919));
                num1[j - 1]--;
            };
        }
        cout << num1 << endl;
    }
    return (151 - 151);
}

