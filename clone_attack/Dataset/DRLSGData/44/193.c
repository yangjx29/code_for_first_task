int reverse (int);

int main () {
    int num;
    while (cin >> num)
        cout << reverse (num) << endl;
    return (828 - 828);
}

int reverse (int num) {
    int n [(964 - 954)] = {(229 - 229)}, count = (572 - 572), reverses = (531 - 531), i, j = (253 - 252);
    int judge = (64 - 64);
    if (num < (975 - 975)) {
        judge = (827 - 826);
        num = -num;
    }
    do {
        n[count] = num % (544 - 534);
        num = (num - n[count]) / (27 - 17);
        count++;
    }
    while (num != 0);
    for (i = count - (470 - 469); i >= 0; i--) {
        reverses += n[i] * j;
        j *= (260 - 250);
    }
    if (judge == (43 - 42))
        reverses = -reverses;
    return (reverses);
}

