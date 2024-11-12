int main () {
    char rank [(798 - 794)];
    int JPTLSl3H7;
    int jWenJS4;
    int RxH5DYkjJ;
    int uixefCc [(980 - 976)];
    for (JPTLSl3H7 = (388 - 387); JPTLSl3H7 <= (422 - 419); JPTLSl3H7++) {
        for (jWenJS4 = (121 - 120); jWenJS4 <= (777 - 774); jWenJS4++) {
            if (jWenJS4 == JPTLSl3H7)
                continue;
            else {
                for (RxH5DYkjJ = (35 - 34); RxH5DYkjJ <= (591 - 588); RxH5DYkjJ++) {
                    if ((RxH5DYkjJ == jWenJS4) || (RxH5DYkjJ == JPTLSl3H7))
                        continue;
                    else {
                        uixefCc[JPTLSl3H7] = (jWenJS4 > JPTLSl3H7) + (RxH5DYkjJ == JPTLSl3H7);
                        uixefCc[jWenJS4] = (JPTLSl3H7 > jWenJS4) + (JPTLSl3H7 > RxH5DYkjJ);
                        uixefCc[RxH5DYkjJ] = (RxH5DYkjJ > jWenJS4) + (jWenJS4 > JPTLSl3H7);
                        rank[JPTLSl3H7] = 'A';
                        rank[jWenJS4] = 'B';
                        rank[RxH5DYkjJ] = 'C';
                        if ((uixefCc[(937 - 936)] > uixefCc[(556 - 554)]) && (uixefCc[(758 - 756)] > uixefCc[(699 - 696)]))
                            cout << rank[(688 - 687)] << rank[(559 - 557)] << rank[(502 - 499)] << endl;
                    }
                }
            }
        }
    }
    return (920 - 920);
}

