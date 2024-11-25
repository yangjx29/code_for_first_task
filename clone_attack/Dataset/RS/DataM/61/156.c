int main () {
    int oeVlCDZJ;
    int F [(72 - 47)];
    int Pzv8Bx;
    {
        Pzv8Bx = 1;
        while (20 >= Pzv8Bx) {
            if (Pzv8Bx == 1 || Pzv8Bx == 2)
                F[Pzv8Bx] = 1;
            else
                F[Pzv8Bx] = F[Pzv8Bx -1] + F[Pzv8Bx -2];
            Pzv8Bx++;
        };
    }
    cin >> oeVlCDZJ;
    while (oeVlCDZJ > 0) {
        int klBY06A5r3k;
        oeVlCDZJ = oeVlCDZJ - 1;
        cin >> klBY06A5r3k;
        cout << F[klBY06A5r3k] << endl;
    }
    return 0;
}

