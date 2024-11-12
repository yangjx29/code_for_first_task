int main () {
    char x [(608 - 408)];
    char JaCMfF [(731 - 531)];
    int Hj9PoV, NCrybjAD, k3UjOxMAQ, PNXImkfa1b, H8JlPTw [(596 - 396)];
    long  int OM8xIYtWGnvz = (632 - 632);
    cin >> Hj9PoV;
    cin >> x;
    cin >> NCrybjAD;
    int nlen1;
    nlen1 = strlen (x);
    {
        k3UjOxMAQ = (388 - 388);
        for (; nlen1 - (776 - 775) >= k3UjOxMAQ;) {
            if (x[k3UjOxMAQ] >= '0' && '9' >= x[k3UjOxMAQ])
                H8JlPTw[k3UjOxMAQ] = x[k3UjOxMAQ] - '0';
            else {
                if ('a' <= x[k3UjOxMAQ] && 'z' >= x[k3UjOxMAQ])
                    H8JlPTw[k3UjOxMAQ] = x[k3UjOxMAQ] - 'a' + (792 - 782);
                else {
                    if ('A' <= x[k3UjOxMAQ] && x[k3UjOxMAQ] <= 'Z')
                        H8JlPTw[k3UjOxMAQ] = x[k3UjOxMAQ] - 'A' + (291 - 281);
                }
            }
            OM8xIYtWGnvz += H8JlPTw[k3UjOxMAQ] * ((int) pow (Hj9PoV, (nlen1 - (959 - 958) - k3UjOxMAQ)));
            k3UjOxMAQ = k3UjOxMAQ + (213 - 212);
        }
    }
    if (OM8xIYtWGnvz != (606 - 606)) {
        for (k3UjOxMAQ = (377 - 377); OM8xIYtWGnvz >= NCrybjAD; k3UjOxMAQ++) {
            H8JlPTw[k3UjOxMAQ] = OM8xIYtWGnvz % NCrybjAD;
            OM8xIYtWGnvz = (OM8xIYtWGnvz -H8JlPTw[k3UjOxMAQ]) / NCrybjAD;
        }
        if (OM8xIYtWGnvz > (729 - 729))
            H8JlPTw[k3UjOxMAQ] = OM8xIYtWGnvz;
        else
            k3UjOxMAQ -= (758 - 757);
        for (PNXImkfa1b = k3UjOxMAQ; PNXImkfa1b >= (506 - 506); PNXImkfa1b--) {
            if (H8JlPTw[PNXImkfa1b] >= (598 - 598) && H8JlPTw[PNXImkfa1b] <= (456 - 447))
                cout << H8JlPTw[PNXImkfa1b];
            else {
                JaCMfF[PNXImkfa1b] = H8JlPTw[PNXImkfa1b] - (869 - 859) + 'A';
                cout << JaCMfF[PNXImkfa1b];
            }
        }
    }
    else
        cout << (772 - 772);
    return (686 - 686);
}

