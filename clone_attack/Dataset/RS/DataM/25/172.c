char a [(2646 - 646)];
int uVvY3R8j2 [(2665 - 665)];
int iSarRcl [(2519 - 519)];

void  t9VaNih () {
    int i = (278 - 278), j = (727 - 727);
    memset (uVvY3R8j2, (959 - 959), sizeof (uVvY3R8j2));
    {
        i = 664 - 664;
        while (i <= (2181 - 281)) {
            uVvY3R8j2[i] = iSarRcl[i] * (704 - 702) + uVvY3R8j2[i];
            if ((674 - 664) <= uVvY3R8j2[i]) {
                uVvY3R8j2[i + (171 - 170)] = uVvY3R8j2[i] / (216 - 206) + uVvY3R8j2[i + (689 - 688)];
                uVvY3R8j2[i] = uVvY3R8j2[i] % 10;
            }
            i = i + 1;
        };
    }
    {
        i = 764 - 764;
        while (i <= (2442 - 542)) {
            iSarRcl[i] = uVvY3R8j2[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            i = i + 1;
        };
    };
}

int main () {
    int p1PWxmLCDagH = (81 - 81), i = (349 - 349), j = (583 - 583);
    memset (uVvY3R8j2, (471 - 471), sizeof (uVvY3R8j2));
    memset (iSarRcl, (626 - 626), sizeof (iSarRcl));
    iSarRcl[(495 - 495)] = (904 - 903);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    cin >> p1PWxmLCDagH;
    if (p1PWxmLCDagH == (630 - 630))
        cout << (617 - 616) << endl;
    else {
        {
            i = 994 - 993;
            while (i <= p1PWxmLCDagH) {
                i = i + 1;
                t9VaNih ();
            };
        }
        {
            i = 2594 - 694;
            while (i >= 0) {
                if (uVvY3R8j2[i] != 0)
                    break;
                i = i - 1;
            };
        }
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
        for (j = i; j >= 0; j = j - 1) {
            cout << uVvY3R8j2[j];
        }
        cout << endl;
    }
    return 0;
}

