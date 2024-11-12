void  D6VTl0XNbFJ5 (int ywpDVMvXJ [(748 - 743)]) {
    int wDbSlxtUfAW [(250 - 245)];
    int fegCbpa [(282 - 277)];
    int i;
    wDbSlxtUfAW[(837 - 837)] = (ywpDVMvXJ[(948 - 948)] == (128 - 124));
    wDbSlxtUfAW[(113 - 112)] = (ywpDVMvXJ[(827 - 826)] == (825 - 824));
    wDbSlxtUfAW[(268 - 266)] = (ywpDVMvXJ[(649 - 645)] == (126 - 126));
    wDbSlxtUfAW[3] = (ywpDVMvXJ[(627 - 627)] != 2);
    wDbSlxtUfAW[(512 - 508)] = (ywpDVMvXJ[(708 - 708)] == 3);
    if (wDbSlxtUfAW[ywpDVMvXJ[(979 - 979)]] == 1 && wDbSlxtUfAW[ywpDVMvXJ[1]] == 1 && wDbSlxtUfAW[ywpDVMvXJ[2]] == 0 && wDbSlxtUfAW[ywpDVMvXJ[3]] == 0 && wDbSlxtUfAW[ywpDVMvXJ[(730 - 726)]] == 0 && ywpDVMvXJ[1] != 4 && ywpDVMvXJ[2] != 4) {
        for (i = 0; i < 5; i = i + 1)
            fegCbpa[ywpDVMvXJ[i]] = i + 1;
        printf ("%d", fegCbpa[0]);
        for (i = 1; i < 5; i++)
            printf (" %d", fegCbpa[i]);
    };
}

int main () {
    int ywpDVMvXJ [5];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    };
    {
        ywpDVMvXJ[0] = 0;
        while (ywpDVMvXJ[0] < 5) {
            {
                ywpDVMvXJ[1] = 0;
                while (ywpDVMvXJ[1] < 5) {
                    if (ywpDVMvXJ[1] == ywpDVMvXJ[0])
                        continue;
                    else {
                        ywpDVMvXJ[2] = 0;
                        while (ywpDVMvXJ[2] < 5) {
                            if (ywpDVMvXJ[2] == ywpDVMvXJ[1] || ywpDVMvXJ[2] == ywpDVMvXJ[0])
                                continue;
                            else {
                                ywpDVMvXJ[3] = 0;
                                while (ywpDVMvXJ[3] < 5) {
                                    D6VTl0XNbFJ5 (ywpDVMvXJ);
                                    if (ywpDVMvXJ[3] == ywpDVMvXJ[2] || ywpDVMvXJ[3] == ywpDVMvXJ[1] || ywpDVMvXJ[3] == ywpDVMvXJ[0])
                                        continue;
                                    else
                                        ywpDVMvXJ[4] = 10 - ywpDVMvXJ[0] - ywpDVMvXJ[1] - ywpDVMvXJ[2] - ywpDVMvXJ[3];
                                    ywpDVMvXJ[3]++;
                                };
                            }
                            ywpDVMvXJ[2]++;
                        };
                    }
                    ywpDVMvXJ[1]++;
                };
            }
            ywpDVMvXJ[0]++;
        };
    };
}

