int main () {
    int UNDBla;
    int xiQdpJAeDg;
    int VPAcNz1b4ra;
    int DTYl8i;
    int FCa8Mj6xk;
    int Cw9eUqnDzpP [111] [111];
    int w7oaMgFV;
    int n;
    cin >> n;
    for (UNDBla = 1; n >= UNDBla; UNDBla = UNDBla +1) {
        for (xiQdpJAeDg = 1; n >= xiQdpJAeDg; xiQdpJAeDg = xiQdpJAeDg + 1) {
            for (VPAcNz1b4ra = 1; n >= VPAcNz1b4ra; VPAcNz1b4ra = VPAcNz1b4ra +1) {
                cin >> Cw9eUqnDzpP[xiQdpJAeDg][VPAcNz1b4ra];
            }
        }
        w7oaMgFV = 0;
        for (xiQdpJAeDg = 1; n > xiQdpJAeDg; xiQdpJAeDg = xiQdpJAeDg + 1) {
            FCa8Mj6xk = 10000;
            for (DTYl8i = xiQdpJAeDg + 1; n >= DTYl8i; DTYl8i = DTYl8i +1) {
                FCa8Mj6xk = min (FCa8Mj6xk, Cw9eUqnDzpP[1][DTYl8i]);
            }
            FCa8Mj6xk = min (FCa8Mj6xk, Cw9eUqnDzpP[1][1]);
            for (DTYl8i = xiQdpJAeDg + 1; DTYl8i <= n; DTYl8i = DTYl8i +1)
                Cw9eUqnDzpP[1][DTYl8i] = Cw9eUqnDzpP[1][DTYl8i] - FCa8Mj6xk;
            Cw9eUqnDzpP[1][1] = Cw9eUqnDzpP[1][1] - FCa8Mj6xk;
            for (VPAcNz1b4ra = xiQdpJAeDg + 1; VPAcNz1b4ra <= n; VPAcNz1b4ra = VPAcNz1b4ra +1) {
                FCa8Mj6xk = 10000;
                for (DTYl8i = xiQdpJAeDg + 1; DTYl8i <= n; DTYl8i = DTYl8i +1) {
                    FCa8Mj6xk = min (FCa8Mj6xk, Cw9eUqnDzpP[VPAcNz1b4ra][DTYl8i]);
                }
                FCa8Mj6xk = min (FCa8Mj6xk, Cw9eUqnDzpP[VPAcNz1b4ra][1]);
                for (DTYl8i = xiQdpJAeDg + 1; DTYl8i <= n; DTYl8i = DTYl8i +1) {
                    Cw9eUqnDzpP[VPAcNz1b4ra][DTYl8i] = Cw9eUqnDzpP[VPAcNz1b4ra][DTYl8i] - FCa8Mj6xk;
                }
                Cw9eUqnDzpP[VPAcNz1b4ra][1] = Cw9eUqnDzpP[VPAcNz1b4ra][1] - FCa8Mj6xk;
            }
            FCa8Mj6xk = 10000;
            for (DTYl8i = xiQdpJAeDg + 1; DTYl8i <= n; DTYl8i = DTYl8i +1) {
                FCa8Mj6xk = min (FCa8Mj6xk, Cw9eUqnDzpP[DTYl8i][1]);
            }
            FCa8Mj6xk = min (FCa8Mj6xk, Cw9eUqnDzpP[1][1]);
            for (DTYl8i = xiQdpJAeDg + 1; DTYl8i <= n; DTYl8i = DTYl8i +1) {
                Cw9eUqnDzpP[DTYl8i][1] = Cw9eUqnDzpP[DTYl8i][1] - FCa8Mj6xk;
            }
            Cw9eUqnDzpP[1][1] = Cw9eUqnDzpP[1][1] - FCa8Mj6xk;
            for (VPAcNz1b4ra = xiQdpJAeDg + 1; VPAcNz1b4ra <= n; VPAcNz1b4ra = VPAcNz1b4ra +1) {
                FCa8Mj6xk = 10000;
                for (DTYl8i = xiQdpJAeDg + 1; DTYl8i <= n; DTYl8i = DTYl8i +1) {
                    FCa8Mj6xk = min (FCa8Mj6xk, Cw9eUqnDzpP[DTYl8i][VPAcNz1b4ra]);
                }
                FCa8Mj6xk = min (FCa8Mj6xk, Cw9eUqnDzpP[1][VPAcNz1b4ra]);
                for (DTYl8i = xiQdpJAeDg + 1; DTYl8i <= n; DTYl8i = DTYl8i +1) {
                    Cw9eUqnDzpP[DTYl8i][VPAcNz1b4ra] = Cw9eUqnDzpP[DTYl8i][VPAcNz1b4ra] - FCa8Mj6xk;
                }
                Cw9eUqnDzpP[1][VPAcNz1b4ra] = Cw9eUqnDzpP[1][VPAcNz1b4ra] - FCa8Mj6xk;
            }
            w7oaMgFV = w7oaMgFV + Cw9eUqnDzpP[xiQdpJAeDg + 1][xiQdpJAeDg + 1];
        }
        cout << w7oaMgFV << endl;
    }
}

