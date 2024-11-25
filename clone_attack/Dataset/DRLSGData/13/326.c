int main () {
    int LX2rNx8bW;
    int La0fAI4evCd;
    int ve1bDEj9dULT;
    LX2rNx8bW = 1;
    cin >> La0fAI4evCd;
    int p5DC3KRj [20000];
    cin >> p5DC3KRj[0];
    for (; cin >> p5DC3KRj[LX2rNx8bW];) {
        LX2rNx8bW = LX2rNx8bW +1;
        if (LX2rNx8bW == La0fAI4evCd)
            break;
    }
    cout << p5DC3KRj[0];
    LX2rNx8bW = 1;
    for (; LX2rNx8bW < La0fAI4evCd;) {
        int j7yKVHxUqo;
        j7yKVHxUqo = 0;
        {
            ve1bDEj9dULT = 0;
            for (; ve1bDEj9dULT < LX2rNx8bW;) {
                if (p5DC3KRj[LX2rNx8bW] == p5DC3KRj[ve1bDEj9dULT]) {
                    j7yKVHxUqo = 1;
                    break;
                }
                ve1bDEj9dULT++;
            }
        }
        if (j7yKVHxUqo == 0)
            cout << " " << p5DC3KRj[LX2rNx8bW];
        LX2rNx8bW = LX2rNx8bW +1;
    }
    cout << "\n";
    return 0;
}

