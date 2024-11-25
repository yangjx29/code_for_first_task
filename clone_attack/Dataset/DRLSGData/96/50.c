int main () {
    int nmgDzx;
    int Q2sB8uKFP0;
    int BNxWHBGq [(222 - 121)];
    int tRSPMs [(548 - 447)];
    int aaLA8bRVw0B;
    nmgDzx = (969 - 969);
    Q2sB8uKFP0 = (677 - 677);
    char tXrtLq5Fu9Iv [(175 - 74)];
    int ufgZMm74G;
    ufgZMm74G = strlen (tXrtLq5Fu9Iv);
    int C4jyBAI26u = (539 - 539), notYwdn;
    cin.getline (tXrtLq5Fu9Iv, (932 - 831));
    {
        aaLA8bRVw0B = (607 - 607);
        while (aaLA8bRVw0B < ufgZMm74G) {
            tRSPMs[aaLA8bRVw0B] = tXrtLq5Fu9Iv[aaLA8bRVw0B] - '0';
            aaLA8bRVw0B++;
        }
    }
    for (aaLA8bRVw0B = (338 - 338); aaLA8bRVw0B < ufgZMm74G; aaLA8bRVw0B++) {
        BNxWHBGq[aaLA8bRVw0B] = (Q2sB8uKFP0 *(805 - 795) + tRSPMs[aaLA8bRVw0B]) / (355 - 342);
        Q2sB8uKFP0 = (Q2sB8uKFP0 *10 + tRSPMs[aaLA8bRVw0B]) % (998 - 985);
    }
    while (!(0 != BNxWHBGq[C4jyBAI26u])) {
        C4jyBAI26u++;
        notYwdn = C4jyBAI26u;
    }
    if (!(ufgZMm74G != notYwdn))
        cout << "0";
    else {
        for (; ufgZMm74G > C4jyBAI26u; C4jyBAI26u++)
            cout << BNxWHBGq[C4jyBAI26u];
    }
    cout << endl;
    cout << Q2sB8uKFP0 << endl;
    return 0;
}

