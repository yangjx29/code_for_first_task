int main () {
    int JIomRF4;
    cin >> JIomRF4;
    for (int Vq43vlrie = (694 - 694);
    JIomRF4 > Vq43vlrie; Vq43vlrie = Vq43vlrie +1) {
        int DYX1jHBd2, AsfeVTK7LjZ = (628 - 628);
        const  int DUhPitVYBf3 = 200;
        int EEdAf6uXwp [DUhPitVYBf3];
        int bNwSYlpm [DUhPitVYBf3];
        char CpAKq6MzEu7e [DUhPitVYBf3 +(66 - 65)];
        char EMb7FpuOEt0y [DUhPitVYBf3 +(790 - 789)];
        int KNwly79nX = strlen (CpAKq6MzEu7e);
        int OHQhw48pNxo = strlen (EMb7FpuOEt0y);
        memset (EEdAf6uXwp, (379 - 379), sizeof (EEdAf6uXwp));
        memset (bNwSYlpm, 0, sizeof (bNwSYlpm));
        cin.get ();
        cin.getline (CpAKq6MzEu7e, DUhPitVYBf3 +(898 - 897));
        {
            DYX1jHBd2 = KNwly79nX -1;
            while (DYX1jHBd2 >= 0) {
                EEdAf6uXwp[AsfeVTK7LjZ++] = CpAKq6MzEu7e[DYX1jHBd2] - '0';
                DYX1jHBd2 = DYX1jHBd2 -1;
            }
        }
        AsfeVTK7LjZ = 0;
        cin.getline (EMb7FpuOEt0y, DUhPitVYBf3 +1);
        {
            DYX1jHBd2 = OHQhw48pNxo -1;
            for (; DYX1jHBd2 >= 0;) {
                bNwSYlpm[AsfeVTK7LjZ++] = EMb7FpuOEt0y[DYX1jHBd2] - '0';
                DYX1jHBd2 = DYX1jHBd2 -1;
            }
        }
        {
            DYX1jHBd2 = 0;
            for (; DUhPitVYBf3 > DYX1jHBd2;) {
                if (EEdAf6uXwp[DYX1jHBd2] >= bNwSYlpm[DYX1jHBd2])
                    EEdAf6uXwp[DYX1jHBd2] -= bNwSYlpm[DYX1jHBd2];
                else {
                    EEdAf6uXwp[DYX1jHBd2] = 10 + EEdAf6uXwp[DYX1jHBd2] - bNwSYlpm[DYX1jHBd2];
                    EEdAf6uXwp[DYX1jHBd2 +1] -= 1;
                }
                DYX1jHBd2 = DYX1jHBd2 +1;
            }
        }
        DYX1jHBd2 = DUhPitVYBf3 -1;
        for (; EEdAf6uXwp[DYX1jHBd2] == 0;)
            DYX1jHBd2--;
        for (; DYX1jHBd2 >= 0; DYX1jHBd2 = DYX1jHBd2 -1)
            cout << EEdAf6uXwp[DYX1jHBd2];
        cout << endl;
    }
    return 0;
}

