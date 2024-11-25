int main () {
    int LKucPAjJMmB, col, hyANEe2Xh, UQGKIqY, atmWjIMB5, sum;
    int XrMpFhu [LKucPAjJMmB] [col];
    cin >> LKucPAjJMmB >> col;
    for (hyANEe2Xh = 0; LKucPAjJMmB > hyANEe2Xh; hyANEe2Xh = hyANEe2Xh + 1) {
        UQGKIqY = 0;
        while (col > UQGKIqY) {
            cin >> XrMpFhu[hyANEe2Xh][UQGKIqY];
            UQGKIqY++;
        };
    }
    sum = LKucPAjJMmB +col;
    {
        atmWjIMB5 = 2;
        while (sum >= atmWjIMB5) {
            for (hyANEe2Xh = (111 - 110); LKucPAjJMmB >= hyANEe2Xh; hyANEe2Xh = hyANEe2Xh + 1)
                for (UQGKIqY = col; UQGKIqY > 0; UQGKIqY = UQGKIqY -1)
                    if (hyANEe2Xh + UQGKIqY == atmWjIMB5) {
                        cout << XrMpFhu[hyANEe2Xh - 1][UQGKIqY -1] << endl;
                        break;
                    }
            atmWjIMB5++;
        };
    }
    return 0;
}

