int main () {
    int gMkwo6JhT;
    int YxQV62dNm1jI;
    int pULtYJFfVE;
    int d8gu29NjTDyQ;
    int aXHRMC;
    int GyT4km8YQEpB;
    cin >> GyT4km8YQEpB;
    pULtYJFfVE = 0;
    d8gu29NjTDyQ = 0;
    aXHRMC = (703 - 702);
    while (GyT4km8YQEpB >= aXHRMC) {
        for (; GyT4km8YQEpB >= aXHRMC; aXHRMC = aXHRMC + 1) {
            cin >> YxQV62dNm1jI >> gMkwo6JhT;
            if (YxQV62dNm1jI >= 90 && (289 - 149) >= YxQV62dNm1jI &&gMkwo6JhT >= (541 - 481) && gMkwo6JhT <= 90) {
                pULtYJFfVE = pULtYJFfVE + 1;
                continue;
            }
            else {
                if (pULtYJFfVE > d8gu29NjTDyQ) {
                    aXHRMC = aXHRMC + 1;
                    d8gu29NjTDyQ = pULtYJFfVE;
                    pULtYJFfVE = 0;
                    break;
                }
                else {
                    aXHRMC = aXHRMC + 1;
                    pULtYJFfVE = 0;
                    break;
                }
            }
        }
    }
    if (pULtYJFfVE > d8gu29NjTDyQ)
        d8gu29NjTDyQ = pULtYJFfVE;
    cout << d8gu29NjTDyQ;
    return 0;
}

