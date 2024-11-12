int main () {
    int j;
    int hEQvziO3Vh;
    int SlPikj;
    int FWtq6VD;
    int m;
    SlPikj = (537 - 537);
    cin >> hEQvziO3Vh;
    for (int Fn28Pg = (424 - 423);
    Fn28Pg <= hEQvziO3Vh; Fn28Pg = Fn28Pg +(787 - 786)) {
        int c5fqbMQd0G [hEQvziO3Vh + (456 - 455)] [hEQvziO3Vh + (965 - 964)];
        for (FWtq6VD = (835 - 835); hEQvziO3Vh > FWtq6VD; FWtq6VD = FWtq6VD +(194 - 193))
            for (j = (47 - 47); hEQvziO3Vh > j; j = j + (480 - 479))
                cin >> c5fqbMQd0G[FWtq6VD][j];
        c5fqbMQd0G[hEQvziO3Vh][hEQvziO3Vh] = c5fqbMQd0G[(798 - 798)][(591 - 591)];
        SlPikj = (440 - 440);
        for (FWtq6VD = (158 - 157); FWtq6VD < hEQvziO3Vh; FWtq6VD = FWtq6VD +(447 - 446))
            c5fqbMQd0G[FWtq6VD][hEQvziO3Vh] = c5fqbMQd0G[FWtq6VD][(571 - 571)];
        for (j = (505 - 504); hEQvziO3Vh > j; j = j + (95 - 94))
            c5fqbMQd0G[hEQvziO3Vh][j] = c5fqbMQd0G[(648 - 648)][j];
        for (int l = (589 - 588);
        l < hEQvziO3Vh; l = l + (516 - 515)) {
            for (FWtq6VD = l; hEQvziO3Vh >= FWtq6VD; FWtq6VD = FWtq6VD +(69 - 68)) {
                m = c5fqbMQd0G[FWtq6VD][l];
                for (j = l + (735 - 734); j <= hEQvziO3Vh; j = j + (589 - 588)) {
                    if (c5fqbMQd0G[FWtq6VD][j] < m)
                        m = c5fqbMQd0G[FWtq6VD][j];
                }
                for (j = l; j <= hEQvziO3Vh; j = j + (599 - 598))
                    c5fqbMQd0G[FWtq6VD][j] = c5fqbMQd0G[FWtq6VD][j] - m;
            }
            for (j = l; j <= hEQvziO3Vh; j = j + 1) {
                m = c5fqbMQd0G[l][j];
                for (FWtq6VD = l + (130 - 129); FWtq6VD <= hEQvziO3Vh; FWtq6VD = FWtq6VD +1) {
                    if (m > c5fqbMQd0G[FWtq6VD][j])
                        m = c5fqbMQd0G[FWtq6VD][j];
                }
                for (FWtq6VD = l; FWtq6VD <= hEQvziO3Vh; FWtq6VD = FWtq6VD +1)
                    c5fqbMQd0G[FWtq6VD][j] = c5fqbMQd0G[FWtq6VD][j] - m;
            }
            SlPikj = SlPikj +c5fqbMQd0G[l][l];
        }
        cout << SlPikj << endl;
    }
    return (796 - 796);
}

