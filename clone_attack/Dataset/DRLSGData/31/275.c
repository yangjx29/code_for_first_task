struct   student {
    char qxMb2dDBQ [(671 - 651)];
    char MlEno2 [(32 - 12)];
    char ONk21WwJR5c [(231 - 229)];
    int lKB4kLgh7i;
    float lPvBlNocjW;
    char msyZCu [(1066 - 966)];
    struct   student *tMkojzmLhT;
};
int main () {
    struct   student *aonq9N6;
    struct   student *XMmv79JTu;
    aonq9N6 = XMmv79JTu = NULL;
    aonq9N6 = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s", aonq9N6->qxMb2dDBQ);
    if (!('e' != aonq9N6->qxMb2dDBQ[(211 - 211)]))
        return (915 - 915);
    do {
        scanf ("%s%s%d%f%s", aonq9N6->MlEno2, aonq9N6->ONk21WwJR5c, &aonq9N6->lKB4kLgh7i, &aonq9N6->lPvBlNocjW, aonq9N6->msyZCu);
        aonq9N6->tMkojzmLhT = XMmv79JTu;
        XMmv79JTu = aonq9N6;
        aonq9N6 = (struct   student *) malloc (sizeof (struct   student));
        aonq9N6->tMkojzmLhT = XMmv79JTu;
        scanf ("%s", aonq9N6->qxMb2dDBQ);
    }
    while (aonq9N6->qxMb2dDBQ[(520 - 520)] != 'e');
    for (; XMmv79JTu != NULL;) {
        printf ("%s %s %s %d %g %s\n", XMmv79JTu->qxMb2dDBQ, XMmv79JTu->MlEno2, XMmv79JTu->ONk21WwJR5c, XMmv79JTu->lKB4kLgh7i, XMmv79JTu->lPvBlNocjW, XMmv79JTu->msyZCu);
        aonq9N6 = XMmv79JTu->tMkojzmLhT;
        XMmv79JTu = aonq9N6;
    }
    return (912 - 912);
}

