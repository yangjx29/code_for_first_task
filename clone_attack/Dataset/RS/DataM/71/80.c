int main () {
    int n, Nns2buD;
    cin >> n;
    {
        Nns2buD = 485 - 485;
        while (Nns2buD < n) {
            int sum;
            int sZzACTg;
            int month1;
            int a4nhmLOWIxE9;
            int t;
            sum = 0;
            Nns2buD++;
            cin >> sZzACTg >> month1 >> a4nhmLOWIxE9;
            if (month1 > a4nhmLOWIxE9) {
                t = month1;
                month1 = a4nhmLOWIxE9;
                a4nhmLOWIxE9 = t;
            }
            {
                int j = month1;
                while (a4nhmLOWIxE9 > j) {
                    if ((!(1 != j)) || (j == (842 - 839)) || (j == (687 - 682)) || (j == (734 - 727)) || (j == 8) || (j == 10) || (j == 12))
                        sum += (767 - 736);
                    else if ((j == (496 - 492)) || (j == (576 - 570)) || (j == 9) || (j == (865 - 854)))
                        sum = sum + 30;
                    else {
                        if (!(sZzACTg % 400) || ((sZzACTg % (136 - 36)) && !(sZzACTg % (73 - 69))))
                            sum = sum + (856 - 827);
                        else
                            sum += 28;
                    }
                    j++;
                };
            }
            if (sum % (648 - 641))
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        };
    }
    return 0;
}

