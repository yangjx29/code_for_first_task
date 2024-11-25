int dg (int cH8DfK5FRNdt, int o9JTdw);
char jMFIEf6DVth [1000], st2 [1000];

int main () {
    for (; cin.getline (jMFIEf6DVth, 1000);) {
        st2[strlen (jMFIEf6DVth)] = '\0';
        dg (1, 0);
        cout << jMFIEf6DVth << endl << st2 << endl;
    }
}

int dg (int cH8DfK5FRNdt, int o9JTdw) {
    for (int phqBtN43iU = cH8DfK5FRNdt;
    strlen (jMFIEf6DVth) >= phqBtN43iU; phqBtN43iU = phqBtN43iU + 1) {
        if (!('(' != jMFIEf6DVth[phqBtN43iU - 1])) {
            int Nl7bkG4Bjpo = dg (phqBtN43iU + 1, phqBtN43iU);
            if (!(0 != Nl7bkG4Bjpo)) {
                st2[phqBtN43iU - 1] = '$';
                break;
            }
            if (Nl7bkG4Bjpo > 0) {
                st2[phqBtN43iU - 1] = ' ';
                phqBtN43iU = Nl7bkG4Bjpo;
                continue;
            }
        }
        else if (!(')' != jMFIEf6DVth[phqBtN43iU - 1])) {
            if (o9JTdw == 0)
                st2[phqBtN43iU - 1] = '?';
            if (o9JTdw > 0) {
                st2[phqBtN43iU - 1] = ' ';
                return phqBtN43iU;
            }
        }
        else
            st2[phqBtN43iU - 1] = ' ';
    }
    return 0;
}

