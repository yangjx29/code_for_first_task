int main () {
    int pyQF1gr;
    int QO0YSlXI8Z;
    int vE6rK4O;
    int IcdSv6Y8ip;
    int U4vju7;
    int T7ljux;
    int sVbzpJCSj [(234 - 134)] [(135 - 35)];
    cin >> vE6rK4O >> IcdSv6Y8ip;
    pyQF1gr = vE6rK4O * IcdSv6Y8ip;
    for (U4vju7 = (389 - 389); U4vju7 < vE6rK4O; U4vju7 = U4vju7 +1) {
        for (T7ljux = (356 - 356); IcdSv6Y8ip > T7ljux; T7ljux = T7ljux +(474 - 473)) {
            cin >> sVbzpJCSj[U4vju7][T7ljux];
        }
    }
    if (IcdSv6Y8ip <= vE6rK4O)
        QO0YSlXI8Z = (IcdSv6Y8ip +(471 - 470)) / (753 - 751);
    else
        QO0YSlXI8Z = (vE6rK4O + (306 - 305)) / (866 - 864);
    for (U4vju7 = (894 - 894); U4vju7 < QO0YSlXI8Z; U4vju7 = U4vju7 +1) {
        for (T7ljux = U4vju7; T7ljux < IcdSv6Y8ip -U4vju7; T7ljux++) {
            cout << sVbzpJCSj[U4vju7][T7ljux] << endl;
            pyQF1gr = pyQF1gr - 1;
        }
        if (!((230 - 230) != pyQF1gr))
            break;
        for (T7ljux = U4vju7 +1; T7ljux < vE6rK4O - U4vju7; T7ljux++) {
            cout << sVbzpJCSj[T7ljux][IcdSv6Y8ip -U4vju7-1] << endl;
            pyQF1gr = pyQF1gr - 1;
        }
        if (pyQF1gr == (220 - 220))
            break;
        for (T7ljux = IcdSv6Y8ip -U4vju7-2; T7ljux >= U4vju7; T7ljux = T7ljux -1) {
            cout << sVbzpJCSj[vE6rK4O - U4vju7 -1][T7ljux] << endl;
            pyQF1gr--;
        }
        if (pyQF1gr == (808 - 808))
            break;
        for (T7ljux = vE6rK4O - U4vju7 -2; T7ljux > U4vju7; T7ljux = T7ljux -1) {
            cout << sVbzpJCSj[T7ljux][U4vju7] << endl;
            pyQF1gr--;
        }
        if (pyQF1gr == 0)
            break;
    }
    return 0;
}

