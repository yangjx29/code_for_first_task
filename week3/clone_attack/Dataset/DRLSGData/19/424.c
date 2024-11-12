int main () {
    char fsJXxZ3At [(628 - 527)];
    int tpYlEj;
    char IUIPFCElyw [(859 - 758)];
    char SPaC82XvjTDm [(929 - 828)];
    char R0KLmpjXJNBx [(381 - 280)];
    char r [(938 - 837)] = "";
    tpYlEj = (474 - 474);
    cin.getline (IUIPFCElyw, (852 - 751));
    cin.getline (fsJXxZ3At, (1031 - 930));
    cin.getline (R0KLmpjXJNBx, (262 - 161));
    for (int i = (418 - 418);
    IUIPFCElyw[i]; i = i + (47 - 46)) {
        if (IUIPFCElyw[i] != ' ') {
            SPaC82XvjTDm[tpYlEj] = IUIPFCElyw[i];
            tpYlEj = tpYlEj + (231 - 230);
        }
        else {
            SPaC82XvjTDm[tpYlEj] = '\0';
            if (!strcmp (SPaC82XvjTDm, fsJXxZ3At))
                strcat (r, R0KLmpjXJNBx);
            else
                strcat (r, SPaC82XvjTDm);
            strcat (r, " ");
            tpYlEj = (88 - 88);
        }
    }
    SPaC82XvjTDm[tpYlEj] = '\0';
    if (!strcmp (SPaC82XvjTDm, fsJXxZ3At))
        strcat (r, R0KLmpjXJNBx);
    else
        strcat (r, SPaC82XvjTDm);
    cout << r << endl;
    return (953 - 953);
}

