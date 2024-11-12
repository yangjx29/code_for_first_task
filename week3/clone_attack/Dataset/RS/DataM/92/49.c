int ha9tKP5HFrTV (const  void  *VBoGCHu9TLn, const  void  *UHvVKS9tTay) {
    return (*((int *) UHvVKS9tTay) - *((int *) VBoGCHu9TLn));
}

int NsOCkN6Z4aLf (int x7tsvpRY, int gC1bOpi) {
    if (gC1bOpi < x7tsvpRY)
        return 200;
    else {
        if (!(gC1bOpi != x7tsvpRY))
            return (415 - 415);
        else
            return -200;
    };
}

int main () {
    int AO3djUWNL9fP, SLe7oZ4nmp, j, hMbzdZOKoEW [(1574 - 574)], Jabe3Kuh [1000], zMF0l5 [1001] [1001];
    cin >> AO3djUWNL9fP;
    for (; AO3djUWNL9fP != (239 - 239);) {
        if (!((96 - 95) != AO3djUWNL9fP)) {
            cin >> hMbzdZOKoEW[(766 - 766)] >> Jabe3Kuh[(472 - 472)];
            cout << NsOCkN6Z4aLf (hMbzdZOKoEW[(223 - 223)], Jabe3Kuh[0]) << endl;
        }
        else {
            for (SLe7oZ4nmp = 0; SLe7oZ4nmp < AO3djUWNL9fP; SLe7oZ4nmp = SLe7oZ4nmp +1)
                cin >> hMbzdZOKoEW[SLe7oZ4nmp];
            {
                SLe7oZ4nmp = 0;
                while (SLe7oZ4nmp < AO3djUWNL9fP) {
                    cin >> Jabe3Kuh[SLe7oZ4nmp];
                    SLe7oZ4nmp = SLe7oZ4nmp +1;
                };
            }
            qsort (hMbzdZOKoEW, AO3djUWNL9fP, sizeof (int), ha9tKP5HFrTV);
            qsort (Jabe3Kuh, AO3djUWNL9fP, sizeof (int), ha9tKP5HFrTV);
            zMF0l5[(912 - 911)][0] = NsOCkN6Z4aLf (hMbzdZOKoEW[AO3djUWNL9fP -(194 - 193)], Jabe3Kuh[0]);
            zMF0l5[(627 - 626)][(913 - 912)] = NsOCkN6Z4aLf (hMbzdZOKoEW[0], Jabe3Kuh[0]);
            {
                SLe7oZ4nmp = 440 - 438;
                while (SLe7oZ4nmp < AO3djUWNL9fP +(746 - 745)) {
                    zMF0l5[SLe7oZ4nmp][0] = zMF0l5[SLe7oZ4nmp -1][0] + NsOCkN6Z4aLf (hMbzdZOKoEW[AO3djUWNL9fP -SLe7oZ4nmp], Jabe3Kuh[SLe7oZ4nmp -1]);
                    for (j = 1; j < SLe7oZ4nmp; j = j + 1) {
                        if (zMF0l5[SLe7oZ4nmp -1][j - 1] + NsOCkN6Z4aLf (hMbzdZOKoEW[j - 1], Jabe3Kuh[SLe7oZ4nmp -1]) > zMF0l5[SLe7oZ4nmp -1][j] + NsOCkN6Z4aLf (hMbzdZOKoEW[AO3djUWNL9fP -SLe7oZ4nmp+j], Jabe3Kuh[SLe7oZ4nmp -1]))
                            zMF0l5[SLe7oZ4nmp][j] = zMF0l5[SLe7oZ4nmp -1][j - 1] + NsOCkN6Z4aLf (hMbzdZOKoEW[j - 1], Jabe3Kuh[SLe7oZ4nmp -1]);
                        else
                            zMF0l5[SLe7oZ4nmp][j] = zMF0l5[SLe7oZ4nmp -1][j] + NsOCkN6Z4aLf (hMbzdZOKoEW[AO3djUWNL9fP -SLe7oZ4nmp+j], Jabe3Kuh[SLe7oZ4nmp -1]);
                    }
                    zMF0l5[SLe7oZ4nmp][SLe7oZ4nmp] = zMF0l5[SLe7oZ4nmp -1][j - 1] + NsOCkN6Z4aLf (hMbzdZOKoEW[SLe7oZ4nmp -1], Jabe3Kuh[SLe7oZ4nmp -1]);
                    SLe7oZ4nmp = SLe7oZ4nmp +1;
                };
            }
            for (SLe7oZ4nmp = 1; SLe7oZ4nmp < AO3djUWNL9fP +1; SLe7oZ4nmp = SLe7oZ4nmp +1) {
                if (zMF0l5[AO3djUWNL9fP][SLe7oZ4nmp] > zMF0l5[AO3djUWNL9fP][0])
                    zMF0l5[AO3djUWNL9fP][0] = zMF0l5[AO3djUWNL9fP][SLe7oZ4nmp];
            }
            cout << zMF0l5[AO3djUWNL9fP][0] << endl;
        }
        cin >> AO3djUWNL9fP;
    }
    return 0;
}

