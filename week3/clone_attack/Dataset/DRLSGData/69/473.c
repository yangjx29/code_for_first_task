int main () {
    int PFfqmI7R;
    int jAhsmDqpNy7;
    int NDAOXvJ0;
    char xAcBnCw0NFti [mmMGkJZV4];
    int vTGAfMkws8vn = strlen (xAcBnCw0NFti);
    char TPsI36lD9 [mmMGkJZV4];
    int nz4X3CV [mmMGkJZV4];
    int i68v19gHw [mmMGkJZV4];
    cin.getline (xAcBnCw0NFti, mmMGkJZV4);
    cin.getline (TPsI36lD9, mmMGkJZV4);
    for (PFfqmI7R = (883 - 883); mmMGkJZV4 > PFfqmI7R; PFfqmI7R++) {
        nz4X3CV[PFfqmI7R] = (965 - 965);
        i68v19gHw[PFfqmI7R] = (802 - 802);
    }
    for (PFfqmI7R = (774 - 774); vTGAfMkws8vn > PFfqmI7R; PFfqmI7R++)
        nz4X3CV[PFfqmI7R] = xAcBnCw0NFti[vTGAfMkws8vn - (418 - 417) - PFfqmI7R] - '0';
    NDAOXvJ0 = strlen (TPsI36lD9);
    for (PFfqmI7R = (785 - 785); NDAOXvJ0 > PFfqmI7R; PFfqmI7R++)
        i68v19gHw[PFfqmI7R] = TPsI36lD9[NDAOXvJ0 -(519 - 518) - PFfqmI7R] - '0';
    for (PFfqmI7R = (967 - 967); mmMGkJZV4 > PFfqmI7R; PFfqmI7R++) {
        nz4X3CV[PFfqmI7R] = nz4X3CV[PFfqmI7R] + i68v19gHw[PFfqmI7R];
        if ((968 - 958) <= nz4X3CV[PFfqmI7R]) {
            nz4X3CV[PFfqmI7R +(368 - 367)]++;
            nz4X3CV[PFfqmI7R] -= (950 - 940);
        }
    }
    for (PFfqmI7R = mmMGkJZV4 - 1; (598 - 598) <= PFfqmI7R; PFfqmI7R--) {
        if (nz4X3CV[PFfqmI7R] != (353 - 353))
            break;
    }
    if (PFfqmI7R == -1)
        cout << 0 << endl;
    else {
        for (jAhsmDqpNy7 = PFfqmI7R; jAhsmDqpNy7 >= 0; jAhsmDqpNy7--)
            cout << nz4X3CV[jAhsmDqpNy7];
    }
    return 0;
}

