int main () {
    int QpxFVJnMiu, LLgQIxnkE4, n;
    double  JR2jyvGD [100] [2];
    cin >> n;
    for (QpxFVJnMiu = 0; n > QpxFVJnMiu; QpxFVJnMiu = QpxFVJnMiu +1) {
        cin >> JR2jyvGD[QpxFVJnMiu][0] >> JR2jyvGD[QpxFVJnMiu][1];
    }
    double  Z6BP07T = 0, zZ91EFf = 0;
    for (QpxFVJnMiu = 0; n > QpxFVJnMiu; QpxFVJnMiu++)
        for (LLgQIxnkE4 = 0; LLgQIxnkE4 < n; LLgQIxnkE4 = LLgQIxnkE4 +1) {
            zZ91EFf = sqrt ((JR2jyvGD[QpxFVJnMiu][0] - JR2jyvGD[LLgQIxnkE4][0]) * (JR2jyvGD[QpxFVJnMiu][0] - JR2jyvGD[LLgQIxnkE4][0]) + (JR2jyvGD[QpxFVJnMiu][1] - JR2jyvGD[LLgQIxnkE4][1]) * (JR2jyvGD[QpxFVJnMiu][1] - JR2jyvGD[LLgQIxnkE4][1]));
            if (zZ91EFf > Z6BP07T)
                Z6BP07T = zZ91EFf;
        }
    cout << Z6BP07T << endl;
    return 0;
}

