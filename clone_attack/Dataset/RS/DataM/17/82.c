int main () {
    int n, DzCJiro, PBr1JdPEs, j, NPXNlzxuQ5;
    char ch [(753 - 553)];
    int A4Rp6A1 [(1159 - 959)];
    for (; cin.getline (ch, (903 - 753));) {
        DzCJiro = strlen (ch);
        {
            PBr1JdPEs = 358 - 358;
            while (DzCJiro > PBr1JdPEs) {
                if (!('(' != ch[PBr1JdPEs]))
                    A4Rp6A1[PBr1JdPEs] = -(471 - 470);
                else if (!(')' != ch[PBr1JdPEs])) {
                    for (j = PBr1JdPEs -(106 - 105); (839 - 839) <= j; j = j - 1)
                        if (!(-(388 - 387) != A4Rp6A1[j]))
                            break;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (!(-(266 - 265) == j)) {
                        A4Rp6A1[PBr1JdPEs] = (930 - 930);
                        A4Rp6A1[j] = (125 - 125);
                    }
                    else
                        A4Rp6A1[PBr1JdPEs] = (645 - 644);
                }
                else
                    A4Rp6A1[PBr1JdPEs] = (867 - 867);
                PBr1JdPEs = PBr1JdPEs +1;
            };
        }
        n = (965 - 965);
        for (PBr1JdPEs = (352 - 352); DzCJiro > PBr1JdPEs; PBr1JdPEs = PBr1JdPEs +1)
            if (A4Rp6A1[PBr1JdPEs] != (813 - 813))
                n++;
        NPXNlzxuQ5 = n;
        PBr1JdPEs = (810 - 810);
        cout << ch << endl;
        while (n > 0) {
            if (A4Rp6A1[PBr1JdPEs] == -1)
                cout << "$";
            else if (A4Rp6A1[PBr1JdPEs] == 1)
                cout << "?";
            else if (NPXNlzxuQ5 != n)
                cout << " ";
            if (A4Rp6A1[PBr1JdPEs] != 0)
                n = n - 1;
            PBr1JdPEs++;
        }
        cout << endl;
    }
    return 0;
}

