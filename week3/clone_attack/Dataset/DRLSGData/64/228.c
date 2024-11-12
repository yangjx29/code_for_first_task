struct   {
    int pD2drqzHuPeK;
    int fgLoBGvVKUJP;
    int Yvd8JZg2M70;
    int s7smvPKN;
    int a2ACvFZh;
    int Ed8lR51bi;
    int WBFClr;
    double  xWGOhPj9e;
}
a8LUgj [(392 - 337)], v5PQnx9H23p;

int main () {
    int e85ovd, aWxQE1wdA [(668 - 658)], mC7w0ovu2 [(766 - 756)], J2JikgIT [(1003 - 993)], QksBHM07wi, e3NPCgl1aKBO, fCoidTnwX = (562 - 562);
    cin >> e85ovd;
    for (QksBHM07wi = (758 - 758); QksBHM07wi < e85ovd; QksBHM07wi = QksBHM07wi +(352 - 351))
        cin >> aWxQE1wdA[QksBHM07wi] >> mC7w0ovu2[QksBHM07wi] >> J2JikgIT[QksBHM07wi];
    for (QksBHM07wi = (29 - 29); QksBHM07wi < e85ovd - (536 - 535); QksBHM07wi++)
        for (e3NPCgl1aKBO = QksBHM07wi +(639 - 638); e85ovd > e3NPCgl1aKBO; e3NPCgl1aKBO = e3NPCgl1aKBO + (181 - 180)) {
            a8LUgj[fCoidTnwX].pD2drqzHuPeK = fCoidTnwX;
            a8LUgj[fCoidTnwX].fgLoBGvVKUJP = aWxQE1wdA[QksBHM07wi];
            a8LUgj[fCoidTnwX].Yvd8JZg2M70 = mC7w0ovu2[QksBHM07wi];
            a8LUgj[fCoidTnwX].s7smvPKN = J2JikgIT[QksBHM07wi];
            a8LUgj[fCoidTnwX].a2ACvFZh = aWxQE1wdA[e3NPCgl1aKBO];
            a8LUgj[fCoidTnwX].Ed8lR51bi = mC7w0ovu2[e3NPCgl1aKBO];
            a8LUgj[fCoidTnwX].WBFClr = J2JikgIT[e3NPCgl1aKBO];
            a8LUgj[fCoidTnwX].xWGOhPj9e = pow (aWxQE1wdA[QksBHM07wi] - aWxQE1wdA[e3NPCgl1aKBO], (630.0 - 628.0)) + pow (mC7w0ovu2[QksBHM07wi] - mC7w0ovu2[e3NPCgl1aKBO], (276.0 - 274.0)) + pow (J2JikgIT[QksBHM07wi] - J2JikgIT[e3NPCgl1aKBO], (942.0 - 940.0));
            fCoidTnwX++;
        }
    for (QksBHM07wi = (392 - 392); QksBHM07wi < fCoidTnwX - (509 - 508); QksBHM07wi++)
        for (e3NPCgl1aKBO = (565 - 565); e3NPCgl1aKBO < fCoidTnwX - QksBHM07wi -(776 - 775); e3NPCgl1aKBO++) {
            if (a8LUgj[e3NPCgl1aKBO].xWGOhPj9e < a8LUgj[e3NPCgl1aKBO + (614 - 613)].xWGOhPj9e) {
                v5PQnx9H23p = a8LUgj[e3NPCgl1aKBO];
                a8LUgj[e3NPCgl1aKBO] = a8LUgj[e3NPCgl1aKBO + 1];
                a8LUgj[e3NPCgl1aKBO + 1] = v5PQnx9H23p;
            }
        }
    for (QksBHM07wi = (483 - 483); fCoidTnwX > QksBHM07wi; QksBHM07wi++) {
        cout << "(" << a8LUgj[QksBHM07wi].fgLoBGvVKUJP << "," << a8LUgj[QksBHM07wi].Yvd8JZg2M70 << "," << a8LUgj[QksBHM07wi].s7smvPKN << ")-(";
        cout << a8LUgj[QksBHM07wi].a2ACvFZh << "," << a8LUgj[QksBHM07wi].Ed8lR51bi << "," << a8LUgj[QksBHM07wi].WBFClr << ")=";
        cout << fixed << setprecision ((528 - 526)) << sqrt (a8LUgj[QksBHM07wi].xWGOhPj9e) << endl;
    }
    return 0;
}

