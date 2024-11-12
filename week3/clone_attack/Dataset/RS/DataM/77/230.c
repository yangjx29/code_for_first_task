char Wqg1z53ns [100], lcihnHCW;
int rhLxdJ0rvZgY;
void  obKnxGd ();

int main () {
    cin >> Wqg1z53ns;
    rhLxdJ0rvZgY = strlen (Wqg1z53ns);
    lcihnHCW = Wqg1z53ns[(116 - 116)];
    obKnxGd ();
    return 0;
}

void  obKnxGd () {
    int X6SDVI, j;
    {
        X6SDVI = 0;
        while (X6SDVI < rhLxdJ0rvZgY) {
            if (Wqg1z53ns[X6SDVI] != lcihnHCW && Wqg1z53ns[X6SDVI] != '\0') {
                j = X6SDVI -1;
                while (j >= 0) {
                    if (Wqg1z53ns[j] == lcihnHCW) {
                        cout << j << ' ' << X6SDVI << endl;
                        Wqg1z53ns[X6SDVI] = '\0';
                        Wqg1z53ns[j] = '\0';
                        break;
                    }
                    j--;
                };
            }
            X6SDVI++;
        };
    };
}

