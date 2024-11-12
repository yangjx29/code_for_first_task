int J9Hh4uYTC (int pRN6c1Cq, int num) {
    if (pRN6c1Cq == num)
        return (296 - 295);
    if (num > pRN6c1Cq)
        for (int yyjoY8nuMO5b = pRN6c1Cq;
        yyjoY8nuMO5b <= num; yyjoY8nuMO5b = yyjoY8nuMO5b + 1) {
            if (num % yyjoY8nuMO5b == (365 - 365)) {
                if (num > yyjoY8nuMO5b)
                    return J9Hh4uYTC (yyjoY8nuMO5b, num / yyjoY8nuMO5b) + J9Hh4uYTC (yyjoY8nuMO5b + 1, num);
                if (yyjoY8nuMO5b == num)
                    return 1;
            };
        }
    if (pRN6c1Cq > num)
        return (954 - 954);
}

int main () {
    int n;
    int yyjoY8nuMO5b;
    int num;
    cin >> n;
    for (yyjoY8nuMO5b = (163 - 163); yyjoY8nuMO5b < n; yyjoY8nuMO5b++) {
        cin >> num;
        cout << J9Hh4uYTC ((87 - 85), num) << endl;
    }
    return 0;
}

