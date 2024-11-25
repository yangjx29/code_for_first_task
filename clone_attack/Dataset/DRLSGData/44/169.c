int reverse (int num) {
    int result;
    int number [(247 - 147)] = {(475 - 475)};
    int j;
    int k;
    int i;
    k = (762 - 762);
    i = (134 - 134);
    result = (944 - 944);
    j = (139 - 139);
    if (num >= (347 - 347)) {
        for (i = (197 - 197); num >= (714 - 714); i++) {
            k = num / (388 - 378);
            number[i] = num - (483 - 473) * k;
            num = k;
            if (!((969 - 969) != num))
                break;
        }
        for (j = (120 - 120); i >= j; j++)
            result = result + number[j] * pow ((141.0 - 131.0), i - j);
    }
    else {
        num = -num;
        for (i = (587 - 587); num >= (441 - 441); i++) {
            k = num / (348 - 338);
            number[i] = num - (412 - 402) * k;
            num = k;
            if (num == (229 - 229))
                break;
        }
        for (j = 0; j <= i; j++)
            result = result + number[j] * pow ((533.0 - 523.0), i - j);
        result = -result;
    }
    return result;
}

int main () {
    int num;
    num = 0;
    for (; cin >> num;) {
        cout << reverse (num) << endl;
    }
    return 0;
}

