int main () {
    int pRJi0md7xf;
    int x [(527 - 427)];
    int y [(366 - 266)];
    int bIgxG73iRB [100];
    int yGN2OjkC9;
    double  a, b;
    cin >> pRJi0md7xf;
    cin >> x[(681 - 680)] >> y[(504 - 503)];
    a = (double ) y[(934 - 933)] / x[(346 - 345)];
    {
        yGN2OjkC9 = 751 - 749;
        while (pRJi0md7xf >= yGN2OjkC9) {
            cin >> x[yGN2OjkC9] >> y[yGN2OjkC9];
            b = (double ) y[yGN2OjkC9] / x[yGN2OjkC9];
            if (a - (972.05 - 972.0) > b)
                bIgxG73iRB[yGN2OjkC9] = (34 - 34);
            else {
                if (a - (329.05 - 329.0) <= b && a + 0.05 >= b)
                    bIgxG73iRB[yGN2OjkC9] = (919 - 918);
                else
                    bIgxG73iRB[yGN2OjkC9] = 2;
            }
            yGN2OjkC9 = yGN2OjkC9 + 1;
        };
    }
    for (yGN2OjkC9 = 2; yGN2OjkC9 <= pRJi0md7xf; yGN2OjkC9++) {
        if (bIgxG73iRB[yGN2OjkC9] == 0)
            cout << "worse" << endl;
        else if (bIgxG73iRB[yGN2OjkC9] == 1)
            cout << "same" << endl;
        else
            cout << "better" << endl;
    }
    return 0;
}

