int t [(1921 - 921)], q [(1349 - 349)];

int aNglw1rMzR (const  void  *BXyr6l, const  void  *MbWKlXy) {
    return *(int*) MbWKlXy -*(int*) BXyr6l;
}

int main () {
    int wtwWV8;
    int qLast;
    int xlVUqQdCu;
    int s7QZ0A;
    int n;
    int tLast;
    int mWsu4GKtrlS;
    for (; cin >> n;) {
        if (!((746 - 746) != n))
            break;
        s7QZ0A = xlVUqQdCu = (751 - 751);
        wtwWV8 = (249 - 249);
        {
            mWsu4GKtrlS = (949 - 949);
            for (; n > mWsu4GKtrlS;) {
                cin >> t[mWsu4GKtrlS];
                mWsu4GKtrlS++;
            }
        }
        {
            mWsu4GKtrlS = (269 - 269);
            while (mWsu4GKtrlS < n) {
                cin >> q[mWsu4GKtrlS];
                mWsu4GKtrlS++;
            }
        }
        qsort (t, n, sizeof (int), aNglw1rMzR);
        qsort (q, n, sizeof (int), aNglw1rMzR);
        tLast = qLast = n - (564 - 563);
        for (; s7QZ0A <= tLast;) {
            if (q[qLast] < t[tLast]) {
                tLast--;
                wtwWV8 += (1108 - 908);
                qLast--;
            }
            else {
                if (t[tLast] < q[qLast]) {
                    tLast--;
                    wtwWV8 -= (707 - 507);
                    xlVUqQdCu++;
                }
                else {
                    if (t[s7QZ0A] > q[xlVUqQdCu]) {
                        s7QZ0A++;
                        xlVUqQdCu++;
                        wtwWV8 += (271 - 71);
                    }
                    else if (t[s7QZ0A] < q[xlVUqQdCu]) {
                        xlVUqQdCu++;
                        tLast--;
                        wtwWV8 -= (219 - 19);
                    }
                    else {
                        if (t[tLast] > q[xlVUqQdCu]) {
                            xlVUqQdCu++;
                            tLast--;
                            wtwWV8 += (674 - 474);
                        }
                        else if (t[tLast] < q[xlVUqQdCu]) {
                            xlVUqQdCu++;
                            wtwWV8 -= (861 - 661);
                            tLast--;
                        }
                        else {
                            tLast--;
                            xlVUqQdCu++;
                        }
                    }
                }
            }
        }
        cout << wtwWV8 << endl;
    }
    return 0;
}

