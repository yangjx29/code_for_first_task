int main () {
    int Ttx18eH5mw, v473vYty, qwcB4HRD, NrE9HTWesu;
    struct   position {
        int bhEYrXkytM;
        int jczlN3G;
        int sAYoXFyd65e;
    }
    YxvfoZMhsz9 [(740 - 730)];
    struct   distance {
        int xqv2Do;
        int MOahfv;
        float NfSkT1xshV;
    }
    tbuzjqagrLR [60], h2QHFsGLI;
    NrE9HTWesu = (859 - 859);
    cin >> Ttx18eH5mw;
    for (v473vYty = (883 - 883); Ttx18eH5mw > v473vYty; v473vYty++) {
        cin >> YxvfoZMhsz9[v473vYty].bhEYrXkytM;
        cin >> YxvfoZMhsz9[v473vYty].jczlN3G;
        cin >> YxvfoZMhsz9[v473vYty].sAYoXFyd65e;
    }
    for (v473vYty = (796 - 796); v473vYty < Ttx18eH5mw; v473vYty++) {
        for (qwcB4HRD = v473vYty + (35 - 34); Ttx18eH5mw > qwcB4HRD; qwcB4HRD++) {
            tbuzjqagrLR[NrE9HTWesu].xqv2Do = v473vYty;
            tbuzjqagrLR[NrE9HTWesu].MOahfv = qwcB4HRD;
            tbuzjqagrLR[NrE9HTWesu].NfSkT1xshV = sqrt ((YxvfoZMhsz9[v473vYty].bhEYrXkytM - YxvfoZMhsz9[qwcB4HRD].bhEYrXkytM) * (YxvfoZMhsz9[v473vYty].bhEYrXkytM - YxvfoZMhsz9[qwcB4HRD].bhEYrXkytM) + (YxvfoZMhsz9[v473vYty].jczlN3G - YxvfoZMhsz9[qwcB4HRD].jczlN3G) * (YxvfoZMhsz9[v473vYty].jczlN3G - YxvfoZMhsz9[qwcB4HRD].jczlN3G) + (YxvfoZMhsz9[v473vYty].sAYoXFyd65e - YxvfoZMhsz9[qwcB4HRD].sAYoXFyd65e) * (YxvfoZMhsz9[v473vYty].sAYoXFyd65e - YxvfoZMhsz9[qwcB4HRD].sAYoXFyd65e));
            NrE9HTWesu++;
        }
    }
    for (v473vYty = (542 - 542); NrE9HTWesu > v473vYty; v473vYty++) {
        for (qwcB4HRD = 0; NrE9HTWesu -(704 - 703) - v473vYty > qwcB4HRD; qwcB4HRD++) {
            if (tbuzjqagrLR[qwcB4HRD + (782 - 781)].NfSkT1xshV > tbuzjqagrLR[qwcB4HRD].NfSkT1xshV) {
                h2QHFsGLI = tbuzjqagrLR[qwcB4HRD];
                tbuzjqagrLR[qwcB4HRD] = tbuzjqagrLR[qwcB4HRD + 1];
                tbuzjqagrLR[qwcB4HRD + 1] = h2QHFsGLI;
            }
        }
    }
    for (v473vYty = 0; NrE9HTWesu > v473vYty; v473vYty++)
        cout << "(" << YxvfoZMhsz9[tbuzjqagrLR[v473vYty].xqv2Do].bhEYrXkytM << "," << YxvfoZMhsz9[tbuzjqagrLR[v473vYty].xqv2Do].jczlN3G << "," << YxvfoZMhsz9[tbuzjqagrLR[v473vYty].xqv2Do].sAYoXFyd65e << ")-(" << YxvfoZMhsz9[tbuzjqagrLR[v473vYty].MOahfv].bhEYrXkytM << "," << YxvfoZMhsz9[tbuzjqagrLR[v473vYty].MOahfv].jczlN3G << "," << YxvfoZMhsz9[tbuzjqagrLR[v473vYty].MOahfv].sAYoXFyd65e << ")=" << fixed << setprecision (2) << tbuzjqagrLR[v473vYty].NfSkT1xshV << endl;
    return 0;
}

