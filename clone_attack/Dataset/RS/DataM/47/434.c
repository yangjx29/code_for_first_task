int main () {
    int K8ORaDd;
    int Ei7TOhoRv5wq [100] = {0};
    int *ZftR2xqN, *vSIltbcoU, BEbu2f;
    cin >> K8ORaDd;
    for (ZftR2xqN = Ei7TOhoRv5wq; ZftR2xqN < Ei7TOhoRv5wq +K8ORaDd; ZftR2xqN++) {
        cin >> *ZftR2xqN;
    }
    {
        vSIltbcoU = Ei7TOhoRv5wq +K8ORaDd-1;
        ZftR2xqN = Ei7TOhoRv5wq;
        while (vSIltbcoU > ZftR2xqN) {
            BEbu2f = *ZftR2xqN;
            *ZftR2xqN = *vSIltbcoU;
            ZftR2xqN++;
            *vSIltbcoU = BEbu2f;
            vSIltbcoU = vSIltbcoU - 1;
        };
    }
    for (ZftR2xqN = Ei7TOhoRv5wq; ZftR2xqN < Ei7TOhoRv5wq +K8ORaDd-1; ZftR2xqN++) {
        cout << *ZftR2xqN << " ";
    }
    cout << *ZftR2xqN;
    return 0;
}

