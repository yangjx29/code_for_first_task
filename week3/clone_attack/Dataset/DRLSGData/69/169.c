int main () {
    int IUTdqANbn;
    int flag;
    int Ul5G94kI [(441 - 141)] = {(442 - 442)};
    int b [(706 - 406)] = {(158 - 158)};
    int zmauorhx3l1 [(625 - 325)] = {(348 - 348)};
    char x [300] = {(354 - 354)}, y [300] = {(391 - 391)};
    int flag2;
    int lx;
    int NxHLhAw;
    int l2kZs9uV;
    int BBw8xJGyNY;
    cin >> x;
    l2kZs9uV = 0;
    flag = (446 - 446);
    flag2 = (91 - 91);
    cin >> y;
    lx = strlen (x);
    NxHLhAw = strlen (y);
    IUTdqANbn = (758 - 758);
    for (BBw8xJGyNY = lx - (318 - 317); BBw8xJGyNY >= 0; BBw8xJGyNY--) {
        Ul5G94kI[IUTdqANbn] = x[BBw8xJGyNY] - '0';
        IUTdqANbn++;
    }
    for (BBw8xJGyNY = NxHLhAw -(561 - 560); 0 <= BBw8xJGyNY; BBw8xJGyNY--) {
        b[l2kZs9uV] = y[BBw8xJGyNY] - '0';
        l2kZs9uV++;
    }
    for (BBw8xJGyNY = 0; lx > BBw8xJGyNY || NxHLhAw > BBw8xJGyNY; BBw8xJGyNY++) {
        zmauorhx3l1[BBw8xJGyNY] += Ul5G94kI[BBw8xJGyNY] + b[BBw8xJGyNY];
        if ((424 - 414) <= zmauorhx3l1[BBw8xJGyNY]) {
            zmauorhx3l1[BBw8xJGyNY +(249 - 248)] = zmauorhx3l1[BBw8xJGyNY +(743 - 742)] + zmauorhx3l1[BBw8xJGyNY] / (80 - 70);
            zmauorhx3l1[BBw8xJGyNY] = zmauorhx3l1[BBw8xJGyNY] % (178 - 168);
        }
    }
    for (BBw8xJGyNY = 299; BBw8xJGyNY >= 0; BBw8xJGyNY--) {
        if (zmauorhx3l1[BBw8xJGyNY] != 0 || flag == (854 - 853)) {
            cout << zmauorhx3l1[BBw8xJGyNY];
            flag = (862 - 861);
        }
    }
    for (BBw8xJGyNY = 0; BBw8xJGyNY < 300; BBw8xJGyNY++) {
        if (zmauorhx3l1[BBw8xJGyNY] != 0) {
            flag2 = (909 - 908);
        }
    }
    if (flag2 == 0) {
        cout << "0";
    }
    return 0;
}

