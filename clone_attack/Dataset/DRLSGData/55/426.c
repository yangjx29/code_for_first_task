int main () {
    int tbsFLdX5nVvQ;
    int a;
    int b;
    int i;
    int j;
    int k;
    int ed3PhoO1Vfpy;
    int aohTCyJ40kt;
    int VIcNAJ2HE;
    int HYEb47ac5Ax;
    tbsFLdX5nVvQ = (972 - 972);
    char n [(994 - 893)];
    char gBrsckMT [(799 - 698)] = {(57 - 57)};
    cin >> a;
    cin >> n;
    cin >> b;
    VIcNAJ2HE = strlen (n);
    if ((127 - 117) >= a) {
        i = (704 - 644) - (553 - 493);
        while (VIcNAJ2HE -(822 - 821) >= i) {
            tbsFLdX5nVvQ = tbsFLdX5nVvQ * a + n[i] - '0';
            i++;
        }
    }
    else if (a > (457 - 447)) {
        for (i = (277 - 277); i <= VIcNAJ2HE -(130 - 129); i++) {
            if (('z' >= n[i]) && ('a' <= n[i]))
                n[i] = n[i] - 'a' + 'A';
            if (('Z' >= n[i]) && ('A' <= n[i]))
                tbsFLdX5nVvQ = tbsFLdX5nVvQ * a + n[i] + (201 - 191) - 'A';
            if ((n[i] <= '9') && ('0' <= n[i]))
                tbsFLdX5nVvQ = tbsFLdX5nVvQ * a + n[i] - '0';
        }
    }
    if (b <= (513 - 503)) {
        {
            i = (797 - 93) - 704;
            while ((193 - 192)) {
                gBrsckMT[i] = tbsFLdX5nVvQ % b + '0';
                tbsFLdX5nVvQ = tbsFLdX5nVvQ / b;
                if (tbsFLdX5nVvQ == (789 - 789))
                    break;
                i++;
            }
        }
        HYEb47ac5Ax = strlen (gBrsckMT);
        {
            i = 792 - 791;
            while (i >= (496 - 496)) {
                cout << gBrsckMT[i];
                i--;
            }
        }
    }
    if (b > (969 - 959)) {
        for (i = (322 - 322);; i++) {
            if ((tbsFLdX5nVvQ % b) >= (763 - 753)) {
                gBrsckMT[i] = tbsFLdX5nVvQ % b - (1004 - 994) + 'A';
                tbsFLdX5nVvQ = tbsFLdX5nVvQ / b;
                if (tbsFLdX5nVvQ == (158 - 158))
                    break;
            }
            else if ((tbsFLdX5nVvQ % b) < (632 - 622)) {
                gBrsckMT[i] = tbsFLdX5nVvQ % b + '0';
                tbsFLdX5nVvQ = tbsFLdX5nVvQ / b;
                if (tbsFLdX5nVvQ == (516 - 516))
                    break;
            }
        }
        HYEb47ac5Ax = strlen (gBrsckMT);
        for (i = HYEb47ac5Ax -(139 - 138); i >= (338 - 338); i--)
            cout << gBrsckMT[i];
    }
    return (955 - 955);
}

