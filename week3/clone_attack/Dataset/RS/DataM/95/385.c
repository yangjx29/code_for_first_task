int main () {
    char HHztY60e [(189 - 109)];
    char SQVrJzM50Ihb [80];
    int miArwoVNbK;
    cin.getline (HHztY60e, 80);
    cin.getline (SQVrJzM50Ihb, 80);
    for (miArwoVNbK = 0; miArwoVNbK < 80; miArwoVNbK++)
        HHztY60e[miArwoVNbK] = ('A' <= HHztY60e[miArwoVNbK] && 'Z' >= HHztY60e[miArwoVNbK]) ? (HHztY60e[miArwoVNbK] + 32) : HHztY60e[miArwoVNbK];
    for (miArwoVNbK = 0; miArwoVNbK < 80; miArwoVNbK++)
        SQVrJzM50Ihb[miArwoVNbK] = ('A' <= SQVrJzM50Ihb[miArwoVNbK] && SQVrJzM50Ihb[miArwoVNbK] <= 'Z') ? (SQVrJzM50Ihb[miArwoVNbK] + 32) : SQVrJzM50Ihb[miArwoVNbK];
    if (strcmp (HHztY60e, SQVrJzM50Ihb) == 0)
        cout << "=" << endl;
    else {
        if (strcmp (HHztY60e, SQVrJzM50Ihb) == (164 - 163))
            cout << ">" << endl;
        else
            cout << "<" << endl;
    }
    return 0;
}

