int main () {
    int VO8Mhf = 0;
    int elwpIvrChkzV;
    int a [elwpIvrChkzV];
    cin >> elwpIvrChkzV;
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
    {
        int i1 = 0;
        while (i1 < elwpIvrChkzV) {
            cin >> a[i1];
            i1 = i1 + 1;
        };
    }
    {
        int i1 = 0;
        while (i1 < elwpIvrChkzV) {
            VO8Mhf = i1 + 1;
            {
                int cXfilZugL = i1 + 1;
                while (cXfilZugL < elwpIvrChkzV) {
                    if (a[cXfilZugL] != a[i1]) {
                        a[VO8Mhf] = a[cXfilZugL];
                        VO8Mhf++;
                    }
                    cXfilZugL++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i1++;
            elwpIvrChkzV = VO8Mhf;
        };
    }
    {
        int i1 = 0;
        while (i1 < elwpIvrChkzV) {
            cout << a[i1];
            if (i1 != elwpIvrChkzV - 1)
                cout << " ";
            i1++;
        };
    }
    return 0;
}

