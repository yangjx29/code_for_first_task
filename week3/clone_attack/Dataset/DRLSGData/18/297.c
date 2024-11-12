int ko3LBrw8g, YcXC8D2xQ [(832 - 731)] [101], s;

void  q2Hkha1l () {
    int Jgtzv1a;
    int HaosdbJ;
    int WDwij6Naun7;
    int lBUfyx;
    int TNvLTpfCU7;
    s = 0;
    for (lBUfyx = (645 - 645); ko3LBrw8g > lBUfyx; ++lBUfyx)
        for (WDwij6Naun7 = (81 - 81); ko3LBrw8g > WDwij6Naun7; ++WDwij6Naun7)
            cin >> YcXC8D2xQ[lBUfyx][WDwij6Naun7];
    for (lBUfyx = 0; lBUfyx < ko3LBrw8g; ++lBUfyx) {
        for (WDwij6Naun7 = lBUfyx; WDwij6Naun7 < ko3LBrw8g; ++WDwij6Naun7) {
            {
                TNvLTpfCU7 = lBUfyx;
                Jgtzv1a = lBUfyx;
                while (Jgtzv1a < ko3LBrw8g) {
                    if (YcXC8D2xQ[WDwij6Naun7][TNvLTpfCU7] > YcXC8D2xQ[WDwij6Naun7][Jgtzv1a])
                        TNvLTpfCU7 = Jgtzv1a;
                    ++Jgtzv1a;
                }
            }
            TNvLTpfCU7 = YcXC8D2xQ[WDwij6Naun7][TNvLTpfCU7];
            for (Jgtzv1a = lBUfyx; ko3LBrw8g > Jgtzv1a; ++Jgtzv1a)
                YcXC8D2xQ[WDwij6Naun7][Jgtzv1a] -= TNvLTpfCU7;
        }
        {
            WDwij6Naun7 = lBUfyx;
            for (; ko3LBrw8g > WDwij6Naun7;) {
                for (TNvLTpfCU7 = Jgtzv1a = lBUfyx; ko3LBrw8g > Jgtzv1a; ++Jgtzv1a)
                    if (YcXC8D2xQ[TNvLTpfCU7][WDwij6Naun7] > YcXC8D2xQ[Jgtzv1a][WDwij6Naun7])
                        TNvLTpfCU7 = Jgtzv1a;
                TNvLTpfCU7 = YcXC8D2xQ[TNvLTpfCU7][WDwij6Naun7];
                {
                    Jgtzv1a = lBUfyx;
                    for (; ko3LBrw8g > Jgtzv1a;) {
                        YcXC8D2xQ[Jgtzv1a][WDwij6Naun7] -= TNvLTpfCU7;
                        ++Jgtzv1a;
                    }
                }
                ++WDwij6Naun7;
            }
        }
        s += YcXC8D2xQ[lBUfyx + (538 - 537)][lBUfyx + (535 - 534)];
        {
            WDwij6Naun7 = 157 - 156;
            for (; ko3LBrw8g > WDwij6Naun7;) {
                YcXC8D2xQ[lBUfyx + 1][WDwij6Naun7] = YcXC8D2xQ[lBUfyx][WDwij6Naun7];
                YcXC8D2xQ[WDwij6Naun7][lBUfyx + 1] = YcXC8D2xQ[WDwij6Naun7][lBUfyx];
                ++WDwij6Naun7;
            }
        }
        YcXC8D2xQ[lBUfyx + 1][lBUfyx + 1] = YcXC8D2xQ[lBUfyx][lBUfyx];
    }
    return;
}

int main () {
    int HaosdbJ;
    cin >> ko3LBrw8g;
    {
        HaosdbJ = 1;
        for (; HaosdbJ <= ko3LBrw8g;) {
            ++HaosdbJ;
            q2Hkha1l ();
            cout << s << endl;
        }
    }
}

