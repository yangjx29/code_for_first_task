int main () {
    int tHNBU5kt4nP9;
    int MRbanh;
    int zuQ0VI [20];
    int Gwe8qhmK;
    int fJet5zX;
    zuQ0VI[0] = 1;
    cin >> tHNBU5kt4nP9;
    zuQ0VI[1] = 1;
    {
        MRbanh = 2;
        while (20 > MRbanh) {
            zuQ0VI[MRbanh] = zuQ0VI[MRbanh -1] + zuQ0VI[MRbanh -2];
            MRbanh = MRbanh +1;
        }
    }
    {
        Gwe8qhmK = 0;
        for (; Gwe8qhmK < tHNBU5kt4nP9;) {
            cin >> fJet5zX;
            if (1 <= fJet5zX && fJet5zX <= 20)
                cout << zuQ0VI[fJet5zX - 1] << endl;
            Gwe8qhmK = Gwe8qhmK +1;
        }
    }
    return 0;
}

