int main () {
    int Jqtgd1vZoY [52] = {0};
    int alphb [52] = {0};
    char QIYNymcWfJ4 [100], L1zTWx [100];
    int lenA = strlen (QIYNymcWfJ4);
    int lenB = strlen (L1zTWx);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int PT6oCKuO7Z, cnShXViLqH;
    cin >> QIYNymcWfJ4 >> L1zTWx;
    {
        PT6oCKuO7Z = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cnShXViLqH = 0;
        while (lenA > PT6oCKuO7Z, cnShXViLqH < lenB) {
            cnShXViLqH++;
            if (QIYNymcWfJ4[PT6oCKuO7Z] >= 'a' && 'z' >= QIYNymcWfJ4[PT6oCKuO7Z]) {
                Jqtgd1vZoY[QIYNymcWfJ4[PT6oCKuO7Z] - 'a']++;
            }
            else {
                if (QIYNymcWfJ4[PT6oCKuO7Z] >= 'A' && QIYNymcWfJ4[PT6oCKuO7Z] <= 'Z') {
                    Jqtgd1vZoY[QIYNymcWfJ4[PT6oCKuO7Z] - 'A']++;
                };
            }
            if ('a' <= L1zTWx[PT6oCKuO7Z] && L1zTWx[PT6oCKuO7Z] <= 'z') {
                alphb[L1zTWx[PT6oCKuO7Z] - 'a']++;
            }
            else if (L1zTWx[PT6oCKuO7Z] >= 'A' && L1zTWx[PT6oCKuO7Z] <= 'Z') {
                alphb[L1zTWx[PT6oCKuO7Z] - 'A']++;
            }
            PT6oCKuO7Z = PT6oCKuO7Z +1;
        };
    }
    for (PT6oCKuO7Z = 0; PT6oCKuO7Z < 52; PT6oCKuO7Z = PT6oCKuO7Z +1) {
        if (Jqtgd1vZoY[PT6oCKuO7Z] != alphb[PT6oCKuO7Z])
            break;
    }
    if (PT6oCKuO7Z < 52) {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
    return 0;
}

