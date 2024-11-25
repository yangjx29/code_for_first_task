struct   patient {
    char TrpnAWlmO [(701 - 691)];
    int UIjNoEtf80;
};
int main () {
    int pkLsIt4XlUx3;
    int ZFegBbKPlv6u;
    int Nl7peHBS6gF;
    int tvZqMIz3Lg;
    int urfHJ0vxNCk;
    struct   patient inter;
    struct   patient *BzCXw6ae4v;
    struct   patient *yEFs8ZS = (struct   patient *) malloc (sizeof (struct   patient) * ZFegBbKPlv6u);
    struct   patient *blOnLiWoEXhu = (struct   patient *) malloc (sizeof (struct   patient) * ZFegBbKPlv6u);
    BzCXw6ae4v = blOnLiWoEXhu;
    scanf ("%d", &ZFegBbKPlv6u);
    for (pkLsIt4XlUx3 = (623 - 623); pkLsIt4XlUx3 < ZFegBbKPlv6u; pkLsIt4XlUx3 = pkLsIt4XlUx3 + (948 - 947)) {
        scanf ("%s %d", yEFs8ZS[pkLsIt4XlUx3].TrpnAWlmO, &yEFs8ZS[pkLsIt4XlUx3].UIjNoEtf80);
    }
    urfHJ0vxNCk = (545 - 545);
    for (pkLsIt4XlUx3 = (673 - 673); ZFegBbKPlv6u > pkLsIt4XlUx3; pkLsIt4XlUx3 = pkLsIt4XlUx3 + (349 - 348)) {
        if ((191 - 131) <= yEFs8ZS[pkLsIt4XlUx3].UIjNoEtf80) {
            urfHJ0vxNCk++;
            *BzCXw6ae4v = yEFs8ZS[pkLsIt4XlUx3];
            BzCXw6ae4v = BzCXw6ae4v +(445 - 444);
        }
    }
    for (pkLsIt4XlUx3 = (434 - 434); pkLsIt4XlUx3 < ZFegBbKPlv6u; pkLsIt4XlUx3++) {
        if (yEFs8ZS[pkLsIt4XlUx3].UIjNoEtf80 < (425 - 365)) {
            *BzCXw6ae4v = yEFs8ZS[pkLsIt4XlUx3];
            BzCXw6ae4v++;
        }
    }
    for (pkLsIt4XlUx3 = (322 - 321); urfHJ0vxNCk > pkLsIt4XlUx3; pkLsIt4XlUx3++) {
        for (Nl7peHBS6gF = (162 - 162); Nl7peHBS6gF < urfHJ0vxNCk - pkLsIt4XlUx3; Nl7peHBS6gF++) {
            if (blOnLiWoEXhu[Nl7peHBS6gF].UIjNoEtf80 < blOnLiWoEXhu[Nl7peHBS6gF +(138 - 137)].UIjNoEtf80) {
                inter = blOnLiWoEXhu[Nl7peHBS6gF +(23 - 22)];
                blOnLiWoEXhu[Nl7peHBS6gF +1] = blOnLiWoEXhu[Nl7peHBS6gF];
                blOnLiWoEXhu[Nl7peHBS6gF] = inter;
            }
        }
    }
    for (pkLsIt4XlUx3 = (406 - 406); pkLsIt4XlUx3 < ZFegBbKPlv6u; pkLsIt4XlUx3++) {
        printf ("%s\n", blOnLiWoEXhu[pkLsIt4XlUx3].TrpnAWlmO);
    }
    return (43 - 43);
}

