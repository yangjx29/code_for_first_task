struct   member {
    char oOaWZue4J [(807 - 707)];
    int ek7lYGxO;
    int p3ERouj;
    char HtLsqhCe;
    char metcHSpk9WU;
    int FMovBs;
};
int RWPxns (struct   member aHQVJqh) {
    int DNzw19cLEd = (940 - 940);
    if ((97 - 17) < aHQVJqh.ek7lYGxO && (848 - 847) <= aHQVJqh.FMovBs)
        DNzw19cLEd += 8000;
    if (aHQVJqh.ek7lYGxO > 85 && aHQVJqh.p3ERouj > (394 - 314))
        DNzw19cLEd += (4810 - 810);
    if (aHQVJqh.ek7lYGxO > (102 - 12))
        DNzw19cLEd += (2221 - 221);
    if (85 < aHQVJqh.ek7lYGxO && !('Y' != aHQVJqh.metcHSpk9WU))
        DNzw19cLEd += 1000;
    if ((215 - 135) < aHQVJqh.p3ERouj && aHQVJqh.HtLsqhCe == 'Y')
        DNzw19cLEd += 850;
    return DNzw19cLEd;
}

int main () {
    int cT9YMQ, O2sB8elz63, DNzw19cLEd [(929 - 829)], PIH7F8NQuR = (329 - 329), VGfXM7z5jV;
    int BC47gMy = (243 - 243);
    struct   member aHQVJqh [100];
    scanf ("%d", &cT9YMQ);
    for (O2sB8elz63 = (473 - 473); O2sB8elz63 < cT9YMQ; O2sB8elz63 = O2sB8elz63 +1) {
        scanf ("%s %d %d %c %c %d", aHQVJqh[O2sB8elz63].oOaWZue4J, &aHQVJqh[O2sB8elz63].ek7lYGxO, &aHQVJqh[O2sB8elz63].p3ERouj, &aHQVJqh[O2sB8elz63].HtLsqhCe, &aHQVJqh[O2sB8elz63].metcHSpk9WU, &aHQVJqh[O2sB8elz63].FMovBs);
        DNzw19cLEd[O2sB8elz63] = RWPxns (aHQVJqh[O2sB8elz63]);
    }
    {
        O2sB8elz63 = 791 - 791;
        while (O2sB8elz63 < cT9YMQ) {
            if (DNzw19cLEd[O2sB8elz63] > PIH7F8NQuR) {
                PIH7F8NQuR = DNzw19cLEd[O2sB8elz63];
                VGfXM7z5jV = O2sB8elz63;
            }
            O2sB8elz63 = O2sB8elz63 +1;
        }
    }
    for (O2sB8elz63 = 0; O2sB8elz63 < cT9YMQ; O2sB8elz63++)
        BC47gMy += DNzw19cLEd[O2sB8elz63];
    printf ("%s\n%d\n%d\n", aHQVJqh[VGfXM7z5jV].oOaWZue4J, DNzw19cLEd[VGfXM7z5jV], BC47gMy);
}

