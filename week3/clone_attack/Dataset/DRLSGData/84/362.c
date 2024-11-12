int main () {
    int CCzSs4;
    int Dxo7hN1qsOT;
    cin >> CCzSs4;
    int wBYMUao1cRGt [CCzSs4];
    {
        int OVMUrug = (74 - 73);
        while (OVMUrug <= CCzSs4) {
            cin >> wBYMUao1cRGt[OVMUrug];
            OVMUrug++;
        }
    }
    {
        int OVMUrug = (801 - 800);
        while (OVMUrug <= CCzSs4) {
            {
                int Lsu7GFzH = 1;
                for (; Lsu7GFzH <= CCzSs4 -1;) {
                    if (wBYMUao1cRGt[Lsu7GFzH] < wBYMUao1cRGt[Lsu7GFzH +1]) {
                        Dxo7hN1qsOT = wBYMUao1cRGt[Lsu7GFzH];
                        wBYMUao1cRGt[Lsu7GFzH] = wBYMUao1cRGt[Lsu7GFzH +1];
                        wBYMUao1cRGt[Lsu7GFzH +1] = Dxo7hN1qsOT;
                    }
                    Lsu7GFzH++;
                }
            }
            OVMUrug++;
        }
    }
    cout << wBYMUao1cRGt[1] << endl << wBYMUao1cRGt[2] << endl;
    return 0;
}

