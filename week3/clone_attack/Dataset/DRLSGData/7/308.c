int main () {
    int M9A6mxXhMIp1, w7s0pWU;
    char fsYQ0Z [(794 - 694)], b [(251 - 151)], C9kqHKw [(223 - 123)];
    char *Qhj0psOGYnRZ;
    cin.getline (fsYQ0Z, (591 - 491));
    cin.getline (b, (309 - 209));
    cin.getline (C9kqHKw, (831 - 731));
    w7s0pWU = strlen (b);
    Qhj0psOGYnRZ = strstr (fsYQ0Z, b);
    if (Qhj0psOGYnRZ != NULL) {
        for (M9A6mxXhMIp1 = (244 - 244); fsYQ0Z + M9A6mxXhMIp1 != Qhj0psOGYnRZ; M9A6mxXhMIp1 = M9A6mxXhMIp1 +1)
            cout << fsYQ0Z[M9A6mxXhMIp1];
        cout << C9kqHKw;
        if (*(Qhj0psOGYnRZ +w7s0pWU) != '\0') {
            for (M9A6mxXhMIp1 = (604 - 604); *(Qhj0psOGYnRZ +w7s0pWU + M9A6mxXhMIp1) != '\0'; M9A6mxXhMIp1++)
                cout << *(Qhj0psOGYnRZ +M9A6mxXhMIp1+w7s0pWU);
        }
    }
    else
        cout << fsYQ0Z << endl;
    return (255 - 255);
}

