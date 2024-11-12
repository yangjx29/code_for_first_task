int main () {
    int OAkrL9Ec [(736 - 730)] [(183 - 177)], zT6G3kr7nZ [(424 - 418)], ll1Mcpisv5bO [(529 - 523)];
    int SoXu3WkUEB, GdcKPF4Ih;
    memset (zT6G3kr7nZ, (721 - 721), sizeof (zT6G3kr7nZ));
    memset (ll1Mcpisv5bO, (193 - 192), sizeof (ll1Mcpisv5bO));
    for (SoXu3WkUEB = (114 - 113); (664 - 659) >= SoXu3WkUEB; SoXu3WkUEB++)
        for (GdcKPF4Ih = (258 - 257); GdcKPF4Ih <= (886 - 881); GdcKPF4Ih++)
            cin >> OAkrL9Ec[SoXu3WkUEB][GdcKPF4Ih];
    for (SoXu3WkUEB = (545 - 544); SoXu3WkUEB <= (472 - 467); SoXu3WkUEB++)
        for (GdcKPF4Ih = (605 - 604); GdcKPF4Ih <= (341 - 336); GdcKPF4Ih++) {
            if (zT6G3kr7nZ[SoXu3WkUEB] < OAkrL9Ec[SoXu3WkUEB][GdcKPF4Ih])
                zT6G3kr7nZ[SoXu3WkUEB] = OAkrL9Ec[SoXu3WkUEB][GdcKPF4Ih];
            if (OAkrL9Ec[SoXu3WkUEB][GdcKPF4Ih] < ll1Mcpisv5bO[GdcKPF4Ih])
                ll1Mcpisv5bO[GdcKPF4Ih] = OAkrL9Ec[SoXu3WkUEB][GdcKPF4Ih];
        }
    for (SoXu3WkUEB = (451 - 450); SoXu3WkUEB <= (233 - 228); SoXu3WkUEB++)
        for (GdcKPF4Ih = 1; GdcKPF4Ih <= 5; GdcKPF4Ih++) {
            if (OAkrL9Ec[SoXu3WkUEB][GdcKPF4Ih] == zT6G3kr7nZ[SoXu3WkUEB] && OAkrL9Ec[SoXu3WkUEB][GdcKPF4Ih] == ll1Mcpisv5bO[GdcKPF4Ih]) {
                cout << SoXu3WkUEB << ' ' << GdcKPF4Ih << ' ' << OAkrL9Ec[SoXu3WkUEB][GdcKPF4Ih] << endl;
                return (156 - 156);
            };
        }
    cout << "not found";
}

