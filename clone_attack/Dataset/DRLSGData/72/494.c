int main () {
    int YzPENR1p2V;
    int ETgZf6;
    int cYpzdnvuga [22] [22];
    int r8tMG5Li;
    int pvkANre8;
    cin >> YzPENR1p2V >> ETgZf6;
    {
        r8tMG5Li = 1;
        while (r8tMG5Li <= YzPENR1p2V) {
            pvkANre8 = 1;
            while (pvkANre8 <= ETgZf6) {
                cin >> cYpzdnvuga[r8tMG5Li][pvkANre8];
                pvkANre8 = pvkANre8 + 1;
            }
            r8tMG5Li = r8tMG5Li + 1;
        }
    }
    {
        r8tMG5Li = 0;
        while (r8tMG5Li <= YzPENR1p2V +1) {
            cYpzdnvuga[r8tMG5Li][0] = cYpzdnvuga[r8tMG5Li][ETgZf6 +1] = 0;
            r8tMG5Li = r8tMG5Li + 1;
        }
    }
    {
        pvkANre8 = 1;
        while (pvkANre8 <= ETgZf6) {
            cYpzdnvuga[0][pvkANre8] = cYpzdnvuga[YzPENR1p2V +1][pvkANre8] = 0;
            pvkANre8 = pvkANre8 + 1;
        }
    }
    {
        r8tMG5Li = 1;
        while (r8tMG5Li <= YzPENR1p2V) {
            {
                pvkANre8 = 1;
                while (pvkANre8 <= ETgZf6) {
                    if (cYpzdnvuga[r8tMG5Li][pvkANre8] >= cYpzdnvuga[r8tMG5Li - 1][pvkANre8] && cYpzdnvuga[r8tMG5Li][pvkANre8] >= cYpzdnvuga[r8tMG5Li + 1][pvkANre8] && cYpzdnvuga[r8tMG5Li][pvkANre8] >= cYpzdnvuga[r8tMG5Li][pvkANre8 - 1] && cYpzdnvuga[r8tMG5Li][pvkANre8] >= cYpzdnvuga[r8tMG5Li][pvkANre8 + 1])
                        cout << r8tMG5Li - 1 << ' ' << pvkANre8 - 1 << endl;
                    pvkANre8 = pvkANre8 + 1;
                }
            }
            r8tMG5Li = r8tMG5Li + 1;
        }
    }
    return 0;
}

