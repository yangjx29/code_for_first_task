int main () {
    int xDmbj437Ppu;
    char kjm2vrFSM5X [(1045 - 964)], UgavOPs [82];
    cin.getline (kjm2vrFSM5X, (548 - 467));
    cin.getline (UgavOPs, 81);
    for (xDmbj437Ppu = 0; xDmbj437Ppu < (263 - 183); xDmbj437Ppu = xDmbj437Ppu + 1) {
        if ((int) kjm2vrFSM5X[xDmbj437Ppu] >= (452 - 387) && 90 >= (int) kjm2vrFSM5X[xDmbj437Ppu])
            kjm2vrFSM5X[xDmbj437Ppu] = kjm2vrFSM5X[xDmbj437Ppu] + 32;
        if ((int) UgavOPs[xDmbj437Ppu] >= (1009 - 944) && (int) UgavOPs[xDmbj437Ppu] <= 90)
            UgavOPs[xDmbj437Ppu] = UgavOPs[xDmbj437Ppu] + 32;
    }
    if (strcmp (kjm2vrFSM5X, UgavOPs) == 0)
        cout << '=';
    else {
        if (strcmp (kjm2vrFSM5X, UgavOPs) < 0)
            cout << '<';
        else
            cout << '>';
    }
    return 0;
}

