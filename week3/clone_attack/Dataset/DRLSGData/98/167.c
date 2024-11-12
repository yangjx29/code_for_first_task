int main () {
    int Gwu6G4;
    int EzXuw6d3;
    char M8PbDX [50];
    scanf ("%s", M8PbDX);
    Gwu6G4 = 0;
    cin >> EzXuw6d3;
    Gwu6G4 = strlen (M8PbDX);
    cout << M8PbDX;
    {
        int M4eUuTKRb;
        M4eUuTKRb = 1;
        for (; EzXuw6d3 > M4eUuTKRb;) {
            M4eUuTKRb = M4eUuTKRb +1;
            scanf ("%s", M8PbDX);
            if (Gwu6G4 +strlen (M8PbDX) + 1 <= 80) {
                Gwu6G4 = Gwu6G4 +strlen (M8PbDX) + 1;
                cout << " " << M8PbDX;
            }
            else {
                cout << endl;
                cout << M8PbDX;
                Gwu6G4 = strlen (M8PbDX);
            }
        }
    }
    return 0;
}

