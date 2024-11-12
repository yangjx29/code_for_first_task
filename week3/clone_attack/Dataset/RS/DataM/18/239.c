int main () {
    int yNK1SRlahn;
    int AVePoFTc9nLC [100] [100];
    int i;
    int dzuJ6a0KEL;
    int k;
    int l;
    int min;
    int PCZqVYxGmyE;
    cin >> yNK1SRlahn;
    for (i = 0; yNK1SRlahn > i; i++) {
        PCZqVYxGmyE = 0;
        for (dzuJ6a0KEL = 0; dzuJ6a0KEL < yNK1SRlahn; dzuJ6a0KEL = dzuJ6a0KEL + 1) {
            for (k = 0; k < yNK1SRlahn; k = k + 1) {
                cin >> AVePoFTc9nLC[dzuJ6a0KEL][k];
            };
        }
        for (dzuJ6a0KEL = yNK1SRlahn; 1 < dzuJ6a0KEL; dzuJ6a0KEL--) {
            for (k = 0; dzuJ6a0KEL > k; k = k + 1) {
                min = AVePoFTc9nLC[k][0];
                {
                    l = 0;
                    while (dzuJ6a0KEL > l) {
                        if (min > AVePoFTc9nLC[k][l]) {
                            min = AVePoFTc9nLC[k][l];
                        }
                        l = l + 1;
                    };
                }
                for (l = 0; dzuJ6a0KEL > l; l = l + 1) {
                    AVePoFTc9nLC[k][l] = AVePoFTc9nLC[k][l] - min;
                };
            }
            for (k = 0; dzuJ6a0KEL > k; k = k + 1) {
                min = AVePoFTc9nLC[0][k];
                {
                    l = 0;
                    while (l < dzuJ6a0KEL) {
                        if (min > AVePoFTc9nLC[l][k]) {
                            min = AVePoFTc9nLC[l][k];
                        }
                        l++;
                    };
                }
                for (l = 0; l < dzuJ6a0KEL; l = l + 1) {
                    AVePoFTc9nLC[l][k] = AVePoFTc9nLC[l][k] - min;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            for (x = 0; x < 20; x++) {
                                y += x;
                            }
                            if (y > 30)
                                return y;
                        }
                    };
                };
            }
            PCZqVYxGmyE = PCZqVYxGmyE +AVePoFTc9nLC[1][1];
            for (k = 1; k < dzuJ6a0KEL - 1; k++) {
                AVePoFTc9nLC[k][0] = AVePoFTc9nLC[k + 1][0];
                AVePoFTc9nLC[0][k] = AVePoFTc9nLC[0][k + 1];
            }
            for (k = 1; k < dzuJ6a0KEL - 1; k++) {
                for (l = 1; l < dzuJ6a0KEL - 1; l++) {
                    AVePoFTc9nLC[k][l] = AVePoFTc9nLC[k + 1][l + 1];
                };
            };
        }
        cout << PCZqVYxGmyE << '\n';
    }
    return 0;
}

