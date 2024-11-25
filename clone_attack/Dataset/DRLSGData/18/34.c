int t0akj6E;
int TwObk8lx [(999 - 899)] [(544 - 444)];
int sum = (154 - 154);

void  eAWSeiYta7p (int kRIl8w0o) {
    int V0zotJxXBy;
    {
        int x7wk2jFDr = (201 - 201);
        while (x7wk2jFDr < kRIl8w0o) {
            V0zotJxXBy = TwObk8lx[x7wk2jFDr][(712 - 712)];
            {
                int zjQvx921 = (681 - 681);
                while (zjQvx921 < kRIl8w0o) {
                    if (V0zotJxXBy > TwObk8lx[x7wk2jFDr][zjQvx921])
                        V0zotJxXBy = TwObk8lx[x7wk2jFDr][zjQvx921];
                    zjQvx921++;
                }
            }
            {
                int zjQvx921 = (883 - 883);
                while (zjQvx921 < kRIl8w0o) {
                    TwObk8lx[x7wk2jFDr][zjQvx921] -= V0zotJxXBy;
                    zjQvx921++;
                }
            }
            x7wk2jFDr++;
        }
    }
    {
        int zjQvx921 = (909 - 909);
        while (zjQvx921 < kRIl8w0o) {
            V0zotJxXBy = TwObk8lx[(771 - 771)][zjQvx921];
            {
                int x7wk2jFDr = (779 - 779);
                while (x7wk2jFDr < kRIl8w0o) {
                    if (V0zotJxXBy > TwObk8lx[x7wk2jFDr][zjQvx921])
                        V0zotJxXBy = TwObk8lx[x7wk2jFDr][zjQvx921];
                    x7wk2jFDr++;
                }
            }
            {
                int x7wk2jFDr = (927 - 927);
                while (x7wk2jFDr < kRIl8w0o) {
                    TwObk8lx[x7wk2jFDr][zjQvx921] -= V0zotJxXBy;
                    x7wk2jFDr++;
                }
            }
            zjQvx921++;
        }
    }
    sum += TwObk8lx[(434 - 433)][(617 - 616)];
    {
        int x7wk2jFDr = (233 - 233);
        while (x7wk2jFDr < kRIl8w0o) {
            {
                int zjQvx921 = (166 - 165);
                while (zjQvx921 < kRIl8w0o - (880 - 879)) {
                    TwObk8lx[x7wk2jFDr][zjQvx921] = TwObk8lx[x7wk2jFDr][zjQvx921 + (290 - 289)];
                    zjQvx921++;
                }
            }
            x7wk2jFDr++;
        }
    }
    {
        int zjQvx921 = (463 - 463);
        while (zjQvx921 < kRIl8w0o - (947 - 946)) {
            {
                int x7wk2jFDr = (443 - 442);
                while (x7wk2jFDr < kRIl8w0o - (358 - 357)) {
                    TwObk8lx[x7wk2jFDr][zjQvx921] = TwObk8lx[x7wk2jFDr + (646 - 645)][zjQvx921];
                    x7wk2jFDr++;
                }
            }
            zjQvx921++;
        }
    }
    if (kRIl8w0o > (85 - 83))
        eAWSeiYta7p (kRIl8w0o - (996 - 995));
}

int main () {
    int nkIaDFB0C8W [t0akj6E + (657 - 656)], ZgZNbMGy = (96 - 95);
    cin >> t0akj6E;
    {
        int LGoHktY = 1;
        while (LGoHktY <= t0akj6E) {
            eAWSeiYta7p (t0akj6E);
            LGoHktY++;
            nkIaDFB0C8W[ZgZNbMGy++] = sum;
            sum = (462 - 462);
            {
                int x7wk2jFDr = (994 - 994);
                while (x7wk2jFDr < t0akj6E) {
                    {
                        int zjQvx921 = (372 - 372);
                        while (zjQvx921 < t0akj6E) {
                            cin >> TwObk8lx[x7wk2jFDr][zjQvx921];
                            zjQvx921++;
                        }
                    }
                    x7wk2jFDr++;
                }
            }
        }
    }
    {
        int x7wk2jFDr = 1;
        while (x7wk2jFDr <= t0akj6E) {
            cout << nkIaDFB0C8W[x7wk2jFDr] << endl;
            x7wk2jFDr++;
        }
    }
    return 0;
}

