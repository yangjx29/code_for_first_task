int main () {
    int nR5j39S;
    int Mml0Hu;
    int vAIwrp;
    int kO1SUnF;
    int s1oZVA2TB;
    double  hyFjUx94wSo [15];
    cin >> nR5j39S;
    while (!(-(102 - 101) == nR5j39S)) {
        Mml0Hu = 0;
        while (!(0 == nR5j39S)) {
            hyFjUx94wSo[Mml0Hu] = nR5j39S;
            Mml0Hu++;
            cin >> nR5j39S;
        }
        vAIwrp = Mml0Hu;
        s1oZVA2TB = 0;
        for (Mml0Hu = 0; vAIwrp > Mml0Hu; Mml0Hu++) {
            kO1SUnF = Mml0Hu +1;
            while (vAIwrp > kO1SUnF) {
                hyFjUx94wSo[kO1SUnF] = hyFjUx94wSo[kO1SUnF] * 1.0;
                if ((hyFjUx94wSo[kO1SUnF] / hyFjUx94wSo[Mml0Hu]) == 2.0 || (hyFjUx94wSo[Mml0Hu] / hyFjUx94wSo[kO1SUnF]) == 2.0)
                    s1oZVA2TB = s1oZVA2TB + 1;
                kO1SUnF++;
            };
        }
        cout << s1oZVA2TB << endl;
        cin >> nR5j39S;
    }
    cin.get ();
    cin.get ();
    return 0;
}

