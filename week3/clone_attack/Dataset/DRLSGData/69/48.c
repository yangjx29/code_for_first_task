int main () {
    int tLi3ueUXg8qm [300], QvT5ew0, EnXf1pPO3jZ, ty64R7an, Se3V06z, E6RnsvV [300], xCQ1gbs [300];
    char lmwYZgh [(661 - 361)], sgPHNJTf067 [(1074 - 774)];
    memset (lmwYZgh, (723 - 723), sizeof (lmwYZgh));
    scanf ("%s", lmwYZgh);
    memset (tLi3ueUXg8qm, (797 - 797), sizeof (tLi3ueUXg8qm));
    scanf ("%s", sgPHNJTf067);
    {
        memset (E6RnsvV, (961 - 961), sizeof (E6RnsvV));
        memset (xCQ1gbs, (76 - 76), sizeof (xCQ1gbs));
        QvT5ew0 = strlen (lmwYZgh);
        E6RnsvV[(434 - 434)] = QvT5ew0;
        EnXf1pPO3jZ = strlen (sgPHNJTf067);
        xCQ1gbs[(44 - 44)] = EnXf1pPO3jZ;
        for (ty64R7an = (839 - 838); QvT5ew0 >= ty64R7an; ty64R7an = ty64R7an + (518 - 517))
            E6RnsvV[ty64R7an] = lmwYZgh[QvT5ew0 -ty64R7an] - '0';
        for (ty64R7an = (561 - 560); EnXf1pPO3jZ >= ty64R7an; ty64R7an = ty64R7an + (68 - 67))
            xCQ1gbs[ty64R7an] = sgPHNJTf067[EnXf1pPO3jZ -ty64R7an] - '0';
        Se3V06z = E6RnsvV[0] > xCQ1gbs[0] ? E6RnsvV[0] : xCQ1gbs[0];
        for (ty64R7an = (704 - 703); Se3V06z >= ty64R7an; ty64R7an = ty64R7an + (637 - 636)) {
            tLi3ueUXg8qm[ty64R7an] += E6RnsvV[ty64R7an] + xCQ1gbs[ty64R7an];
            if (tLi3ueUXg8qm[ty64R7an] >= (917 - 907)) {
                tLi3ueUXg8qm[ty64R7an + 1] += tLi3ueUXg8qm[ty64R7an] / (337 - 327);
                tLi3ueUXg8qm[ty64R7an] %= 10;
            }
            if (tLi3ueUXg8qm[Se3V06z +1] != 0)
                tLi3ueUXg8qm[0] = Se3V06z +1;
            else
                tLi3ueUXg8qm[0] = Se3V06z;
        }
    }
    for (ty64R7an = tLi3ueUXg8qm[0]; tLi3ueUXg8qm[ty64R7an] == 0; ty64R7an = ty64R7an - 1)
        ;
    if (ty64R7an == 0)
        ;
    else
        for (; ty64R7an >= 1; ty64R7an = ty64R7an - 1)
            printf ("%d", tLi3ueUXg8qm[ty64R7an]);
    return 0;
}

