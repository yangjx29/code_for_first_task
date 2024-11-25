int SlQFoDq [300];

int main () {
    int AwN1hRslipG4;
    int NsNXJtEdwTYy;
    int ZZQnrmzF;
    int hoEiYNBILD;
    int bjKxo4teuX;
    int ZxurFQeg;
    int p3gO7vIdo6hF;
    for (; cin >> ZZQnrmzF >> hoEiYNBILD, ZZQnrmzF || hoEiYNBILD;) {
        for (AwN1hRslipG4 = 0; AwN1hRslipG4 < ZZQnrmzF; AwN1hRslipG4 = AwN1hRslipG4 +1)
            SlQFoDq[AwN1hRslipG4] = 1;
        p3gO7vIdo6hF = ZZQnrmzF;
        if (ZZQnrmzF == 1)
            cout << 1 << endl;
        else {
            SlQFoDq[(hoEiYNBILD - 1) % p3gO7vIdo6hF] = 0;
            bjKxo4teuX = ((hoEiYNBILD - 1) % p3gO7vIdo6hF + 1) % p3gO7vIdo6hF;
            for (ZZQnrmzF = ZZQnrmzF -1; ZZQnrmzF > 1; ZZQnrmzF = ZZQnrmzF -1) {
                ZxurFQeg = hoEiYNBILD;
                while (ZxurFQeg > 1) {
                    if (SlQFoDq[bjKxo4teuX] == 1) {
                        ZxurFQeg = ZxurFQeg -1;
                    }
                    bjKxo4teuX = bjKxo4teuX + 1;
                    bjKxo4teuX = bjKxo4teuX % (p3gO7vIdo6hF);
                }
                while (SlQFoDq[bjKxo4teuX] == 0) {
                    bjKxo4teuX++;
                    bjKxo4teuX = bjKxo4teuX % (p3gO7vIdo6hF);
                }
                SlQFoDq[bjKxo4teuX] = 0;
            }
            for (AwN1hRslipG4 = 0; AwN1hRslipG4 < p3gO7vIdo6hF; AwN1hRslipG4 = AwN1hRslipG4 +1)
                if (SlQFoDq[AwN1hRslipG4])
                    cout << AwN1hRslipG4 +1 << endl;
        };
    }
    return 0;
}

